
char* addBinary(char* a, char* b) {
    int lenA = strlen(a);
    int lenB = strlen(b);
    int carry = 0;
    static char bin[100001]; // Increased size for handling large results
    int i = 0;

    // Iterate through both strings in reverse order
    while (lenA > 0 || lenB > 0) {
        int numA = lenA > 0 ? a[--lenA] - '0' : 0;
        int numB = lenB > 0 ? b[--lenB] - '0' : 0;

        int sum = numA + numB + carry;
        bin[i++] = (sum % 2) + '0'; // Store the remainder in binary array
        carry = sum / 2;            // Update the carry
    }
    // Check if the carry is generated
    if (carry && lenA == 0 && lenB == 0)
        bin[i++] = carry + '0';

    // Reverse the string
    int start = 0;
    int end = i - 1;
    while (start < end) {
        char temp = bin[start];
        bin[start] = bin[end];
        bin[end] = temp;
        start++;
        end--;
    }
    bin[i] = '\0'; // Null-terminate the string
    return bin;
}
