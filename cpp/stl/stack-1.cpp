#include <iostream>
#include <stack> // Required header

int main() {
    std::stack<int> st;

    // Push elements onto the stack
    st.push(10);
    st.push(20);
    st.push(30); // 30 is now at the top

    std::cout << "Stack size: " << st.size() << "\n"; // Outputs 3
    std::cout << "Top element: " << st.top() << "\n"; // Outputs 30

    // Remove the top element
    st.pop(); 
    std::cout << "New top element: " << st.top() << "\n"; // Outputs 20

    // Check if empty
    if (!st.empty()) {
        std::cout << "Stack is not empty.\n";
    }

    // Traversal (destructive loop)
    std::cout << "Remaining elements: ";
    while (!st.empty()) {
        std::cout << st.top() << " ";
        st.pop();
    }
    // Outputs: 20 10
    
    return 0;
}
