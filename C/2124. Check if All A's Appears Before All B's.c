bool checkString(char* s) {
    for (int i = 0; i < strlen(s) - 1; i++)
        if (s[i] == 'b' && s[i + 1] == 'a')
            return false;
    return true;
}
