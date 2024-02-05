int firstUniqChar(char *s) {
    int n = strlen(s);
    if (n == 0) {
        return -1;
    }
    // Assuming ASCII characters
    int charCount[256] = {0}; 
    //Increasing the ASCII characters place by 1 for each time.
    for (int i = 0; i < n; i++) { 
        charCount[s[i]]++;
    }
    //Returns if the value is 1;
    for (int i = 0; i < n; i++) {
        if (charCount[s[i]] == 1) {
            return i;
        }
    }
    //If the above for loop fails to return 
    //i.e. no unique character, then returns -1.
    return -1;
}
