
int findJudge(int n, int** trust, int m, int* trustColSize) {
    int trusting[1001]={0}, trusted[1001]={0};
    
    for(register int i=0; i<m; i++){
        int* e=trust[i];
        trusting[e[0]]++;
        trusted[e[1]]++;
    }
    for(register int i=1; i<=n; i++)
        if (trusting[i]==0 && trusted[i]==n-1) return i;
    return -1; 
}
