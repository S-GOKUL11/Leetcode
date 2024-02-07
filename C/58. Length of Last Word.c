int lengthOfLastWord(char* s) {
    int size = strlen(s);
    int count = 0;
    for (int i = size - 1; i >= 0; i--) {
        if (count > 0 && s[i] == ' ')
            break;
        else if (s[i] == ' ')
            continue;
        count++;
    }
    return count;
}
