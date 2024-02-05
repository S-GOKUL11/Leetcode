// Function to Sum the Square of the each digit
int Sum(int n) {
    int s = 0;
    while (n) {
        s += pow(n % 10, 2);
        n /= 10;
    }
    return s;
}

bool isHappy(int num) {
    // Loop runs infinite times until the function returns.
    while (1) {
        // Calls the function Sum() to Sum the Square of the each digit in num
        num = Sum(num);
        // If num is equal to 1 then returns true.
        if (num == 1)
            return true;
        // There are only 2 possible outputs 1 or 9
        // If the output is 9, then its power is 89, it will be in a infinity
        // loop, So returns false.
        if (num == 89)
            return false;
    }
}
