int countPrefixSuffixPairs(char** words, int wordsSize) {
    int c = 0;
    for (int i = 0; i < wordsSize - 1; i++) {
        for (int j = i + 1; j < wordsSize; j++) {
            int flag = 0;
            int i_len = strlen(words[i]);
            if (i_len <= strlen(words[j])) {
                for (int k = 0; k < i_len; k++) {
                    if (words[i][k] != words[j][k]) {
                        flag = 1;
                        break;
                    }
                }
                for (int k = i_len - 1, m = strlen(words[j]) - 1; k >= 0;
                     k--, m--) {
                    if (words[i][k] != words[j][m]) {
                        flag = 1;
                        break;
                    }
                }
                if (flag == 0)
                    c++;
            }
        }
    }
    return c;
}
