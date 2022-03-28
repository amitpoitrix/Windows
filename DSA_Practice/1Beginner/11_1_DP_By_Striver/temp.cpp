#include<bits/stdc++.h>
using namespace std;

class Solution {
private:
    int min(int a, int b){
        if(a < b)
            return a;
        else
            return b;
    }
    
    int maxWhiteTilesCover(string &floor, int idx, int numCarpets, int carpetLen, vector<int> &prefix, vector<vector<int>> &dp){
        // Base Case - As idx is changing from 0 -> n-1 & numCarpets from num -> 0
        if(idx >= floor.size() || numCarpets == 0)
            return 0;
        
        if(dp[idx][numCarpets] != -1)
            return dp[idx][numCarpets];
        
        // If current idx element is '0' i.e., Black than skip
        if(floor[idx] == '0')
            return dp[idx][numCarpets] = maxWhiteTilesCover(floor, idx + 1, numCarpets, carpetLen, prefix, dp);
        
        // Now getting the idx as x of white tile & min becoz idx + len might cross floor.size()
        int x = min(idx + carpetLen, floor.size()) - 1;
        int white = prefix[x];
        if(idx != 0)
            white -= prefix[idx - 1];
        
        int pick = white + maxWhiteTilesCover(floor, idx + carpetLen, numCarpets - 1, carpetLen, prefix, dp);
        int notPick = 0 + maxWhiteTilesCover(floor, idx + 1, numCarpets, carpetLen, prefix, dp);
        
        return dp[idx][numCarpets] = max(pick, notPick);
    }
    
public:
    int minimumWhiteTiles(string floor, int numCarpets, int carpetLen) {
        // Using DP - Memoization
        int n = floor.size();
        vector<vector<int>> dp(n + 1, vector<int> (numCarpets + 1, -1));
        
        // creating prefix array of size n that will contain no. of white tiles
        vector<int> prefix(n, 0);   // each initialize to '0' i.e., Black
        // Checking if 0th index of given floor string is '1' i.e., White
        if(floor[0] == '1')
            prefix[0] = 1;
        
        // Now filling up the prefix array with white elements
        for(int i=1; i <= n-1; i++){
            prefix[i] = prefix[i-1] + (floor[i] == '1');
        }
        
        // If all the given floor string is '0' i.e., Black
        if(prefix[n-1] == '0')
            return 0;   // i.e., No carpet needed as all are already black so 0 no. of white tiles to cover
        
        // else return min no. of white tiles left after covering with numCarpets no. of carpets
        // i.e., Total white tiles - max no. of white tiles covered up
        return prefix[n-1] - maxWhiteTilesCover(floor, 0, numCarpets, carpetLen, prefix, dp);
    }
};

int main(){
    string floor = "10110101";

    Solution obj;
    cout << obj.minimumWhiteTiles(floor, 2, 2);

    return 0;
}