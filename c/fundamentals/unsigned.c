#include <stdio.h>

int main() {
    // Declaration and Initialization
    unsigned int count = 150000;
    unsigned int max_val = 4294967295U; // 'U' suffix denotes an unsigned constant

    // Printing using %u
    printf("Count: %u\n", count);
    printf("Max Value: %u\n", max_val);

    // Critical Pitfall: Underflow / Wrap-around
    unsigned int zero = 0;
    zero = zero - 1; 
    printf("0 minus 1 as unsigned: %u\n", zero); // Outputs 4294967295

    return 0;
}