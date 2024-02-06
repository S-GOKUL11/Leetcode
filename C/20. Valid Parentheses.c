bool isValid(char* s) {
    int size = strlen(s);
    char temp[size];
    int track = 0;
    int i;
    for (i = 0; i < size; i++) {
        if (track == 0 && (s[i] == ')' || s[i] == '}' || s[i] == ']'))
            return false;
        else if (track == 0)
            temp[track++] = s[i];
        else if ((temp[track - 1] == '(' && s[i] == ')') ||
                 (temp[track - 1] == '{' && s[i] == '}') ||
                 (temp[track - 1] == '[' && s[i] == ']')) {
            track--;
            continue;
        } else
            temp[track++] = s[i];
    }
    if (track == 0)
        return true;
    return false;
}
