char* intToRoman(int num) {
    static char s[20];
    int n = 0;
    while (num) {
        if (num < 4) {
            s[n++] = 'I';
            num--;
        } else if (num < 5) {
            s[n++] = 'I';
            s[n++] = 'V';
            num -= 4;
        } else if (num < 9) {
            s[n++] = 'V';
            num -= 5;
        } else if (num < 10) {
            s[n++] = 'I';
            s[n++] = 'X';
            num -= 9;
        } else if (num < 40) {
            s[n++] = 'X';
            num -= 10;
        } else if (num < 50) {
            s[n++] = 'X';
            s[n++] = 'L';
            num -= 40;
        } else if (num < 90) {
            s[n++] = 'L';
            num -= 50;
        } else if (num < 100) {
            s[n++] = 'X';
            s[n++] = 'C';
            num -= 90;
        } else if (num < 400) {
            s[n++] = 'C';
            num -= 100;
        } else if (num < 500) {
            s[n++] = 'C';
            s[n++] = 'D';
            num -= 400;
        } else if (num < 900) {
            s[n++] = 'D';
            num -= 500;
        } else if (num < 1000) {
            s[n++] = 'C';
            s[n++] = 'M';
            num -= 900;
        } else if (num >= 1000) {
            s[n++] = 'M';
            num -= 1000;
        }
    }
    s[n] = '\0';
    return s;
}
