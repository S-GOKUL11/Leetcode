int myAtoi(char* s) {
    long long int n = 0;
    int l = strlen(s);
    int flag = 1;
    bool a = false;
    for (int i = 0; i < l; i++) {
        if ((s[i] == '-' || s[i] == ' ') && a == true)
            break;
        else if (s[i] == '.')
            break;
        else if (s[i] == '-') {
            if (s[i + 1] >= '0' && s[i + 1] <= '9')
                flag = -1;
            else
                break;
        } 
        else if (s[i] == '+') {
            if (s[i + 1] >= '0' && s[i + 1] <= '9' && a == false)
                continue;
            else
                break;
        } 
        else if (s[i] >= '0' && s[i] <= '9') {
            a = true;
            n = (n * 10) + (s[i] - '0');
            if (n > 2147483647)
                break;
        } 
        else if (s[i] != '+' && s[i] != ' ')
            break;
    }
    n = n * flag;
    n = (n <= -2147483648) ? -2147483648 : n;
    n = (n > 2147483647) ? 2147483647 : n;
    return n;
}
