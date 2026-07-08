int maximumWealth(int** accounts, int accountsSize, int* accountsColSize) {
    int max_wealth=0;
    int wealth = 0;
    for(int i=0 ; i<accountsSize ; i++){
        wealth = 0;
        for(int j=0 ; j<accountsColSize[i] ; j++){
            wealth += accounts[i][j];
        }
        if(wealth > max_wealth){
            max_wealth = wealth;
        }
    }

    return max_wealth;
}