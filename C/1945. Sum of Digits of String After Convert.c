int getLucky(char* s, int k) {
    int temp, n = 0;
    // Find the value of string With iteration count 1 (k=1).
    for (int i = 0; s[i]; i++) {
        temp = s[i] - 96;
        n += temp / 10 + temp % 10;
    }
    while (--k) {
        int sum = 0;
        while (n) {
            sum += n % 10;
            n /= 10;
        }
        n = sum;
    }
    return n;
}
