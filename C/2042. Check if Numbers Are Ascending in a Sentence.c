bool areNumbersAscending(char* s) {
    int n, max = 0;
    for (int i = 0; i < strlen(s); i++) {
        if (s[i] >= '0' && s[i] <= '9') {
            n = 0;
            while (s[i] >= '0' && s[i] <= '9')
                n = (n * 10) + s[i++] - '0';
            if (max >= n)
                return false;
            else
                max = n;
        }
    }
    return true;
}
