int maximumWealth(int** accounts, int accountsSize, int* accountsColSize) {
    int maxWealth = 0;
    
    for (int i = 0; i < accountsSize; i++) {
        int currentCustomerWealth = 0;
        
        for (int j = 0; j < accountsColSize[i]; j++) {
            currentCustomerWealth += accounts[i][j];
        }
        
        if (currentCustomerWealth > maxWealth) {
            maxWealth = currentCustomerWealth;
        }
    }
    
    return maxWealth;
}
