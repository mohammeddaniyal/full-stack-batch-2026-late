#include <iostream>
#include <unordered_map>
#include <string>

int main() {
    // 1. Declaration and Initialization
    std::unordered_map<std::string, int> inventory = {
        {"apples", 50},
        {"bananas", 30}
    };

    // 2. Insertion & Modification
    inventory["oranges"] = 20; // Inserts new key
    inventory["apples"] = 65;   // Updates existing key

    // 3. Safe Lookup (C++20 style)
    // use only if, you have latest C++20 compiler, otherwise use find() method
    if (inventory.contains("apples")) {
        std::cout << "Apples in stock: " << inventory["apples"] << "\n";
    }

    // 4. Iteration
    if (inventory.find("apples")!= inventory.end()) {
        std::cout << "Apples in stock: " << inventory["apples"] << "\n";
    }

   
    return 0;
}
