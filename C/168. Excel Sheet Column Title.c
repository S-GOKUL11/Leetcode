char* convertToTitle(int columnNumber) {
    int n = columnNumber, i = 0;
    static char s[8];
    char t;
    while (n) {
        n--;
        t = (n % 26) + 'A';
        n = n / 26;
        s[i++] = t;
    }
    s[i--] = '\0';
    int j = 0;
    while (j < i) {
        t = s[j];
        s[j++] = s[i];
        s[i--] = t;
    }
    return s;
}
