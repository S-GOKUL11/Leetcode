bool isAnagram(char* s, char* t) {
    int a[26] = {0};
    if (strlen(s) != strlen(t))
        return false;
    for (int i = 0; s[i]; i++)
        a[s[i] - 'a']++;
    for (int i = 0; t[i]; i++)
        a[t[i] - 'a']--;
    for (int i = 0; i < 26; i++)
        if (a[i] != 0)
            return false;
    return true;
}
