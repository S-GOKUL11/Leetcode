char* longestCommonPrefix(char** strs, int strsSize) {
    int lp=strlen(strs[0]);
    int s1=strlen(strs[0]);
    if(strsSize==1) return strs[0];
    if(lp>-1){
        static char p[200];
        for(int i=0;i<strsSize;i++){
            if(strs[0][0]!=strs[i][0]) return "";
            if(strlen(strs[i])==0)  return "";
            int c=-1;
            for(int j=0;j<s1 && j< strlen(strs[i]);j++){
                if(strs[0][j]!=strs[i][j]) break;
                c++;
            }
            if(c<lp) lp=c;
        }
        int i;
        for(i=0;i<=lp;i++)
            p[i]=strs[0][i];
        p[i]='\0';
        return p;
    }
    return "";
}
