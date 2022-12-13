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

// You can call this function to convert a decimal number to binary like this:

int decimal = 10;
decimalToBinary(decimal);
