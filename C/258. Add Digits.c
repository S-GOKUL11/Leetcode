int addDigits(int num) {
    int sum = 10;
    while (sum > 9) {
        sum = 0;
        while (num > 0) {
            sum = sum + num % 10;
            num /= 10;
        }
        num = sum;
    }
    return sum;
}
