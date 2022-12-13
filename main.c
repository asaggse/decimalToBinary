#include <stdio.h>

// Function to convert a decimal number to binary
void decimalToBinary(int n)
{
    // If the number is zero, return
    if (n == 0) return;

    // Divide the number by 2 and store the remainder
    int remainder = n % 2;

    // Recursively call the function with the quotient
    decimalToBinary(n / 2);

    // Print the remainder
    printf("%d", remainder);
}

int main()
{
    int decimal = 10; // Decimal number to convert

    printf("Binary equivalent of %d: ", decimal);
    decimalToBinary(decimal);

    return 0;
}
