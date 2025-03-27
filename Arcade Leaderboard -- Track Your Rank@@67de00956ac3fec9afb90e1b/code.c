void trackPlayerRanks(int ranked[] , int n , int player[] , int m , int result[]){
    int unqranks[20000] , rank = 0;
    unqranks[rank++] = ranked[0];

    for(int i = 1; i < n; i++){
        if (ranked[i] != ranked[i-1]){
            unqranks[rank++] = ranked[i];
        }
    }
    int x = rank - 1; //range 
    for(int i = 0; i<m; i++){
        while( x >= 0 && player[i] >= unqranks[x]){
            x--;
        }
        result[i] = x+1;
    }
}