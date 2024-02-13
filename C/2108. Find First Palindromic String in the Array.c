char* firstPalindrome(char** words, int wordsSize) {
    for (int i = 0; i < wordsSize; i++) {
        int k = strlen(words[i]) - 1;
        int j = 0;
        while (j < k) {
            if (words[i][j] != words[i][k])
                break;
            j++;
            k--;
        }
        if (j >= k)
            return words[i];
    }
    return "";
}
