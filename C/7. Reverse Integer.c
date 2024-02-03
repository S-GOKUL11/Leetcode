int reverse(long int x) {
    long int num = 0;
    while (x) {
        num = (num * 10) + (x % 10);
        x = x / 10;
    }
    if (num > 2147483647 || num < -2147483648)
        return 0;
    return num;
}
