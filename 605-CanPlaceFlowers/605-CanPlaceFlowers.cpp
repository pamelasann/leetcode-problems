// Last submission: 11/24/2023, 5:42:29 PM
class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        if(n == 0)
            return true;

        int vectorSize = flowerbed.size();
        for(int i = 0; i < flowerbed.size(); i++) {
            if(flowerbed[i] == 0) {
                // checks if current position is empty (0),
                // both sides are 0s or iteration is 0 or n-1
                if(flowerbed[i] == 0 
                    && (i == 0 || flowerbed[i-1] == 0)
                    && (i == vectorSize-1 || flowerbed[i+1] == 0)) {
                    
                    flowerbed[i] = 1; // update place as not empty
                    n--; // decrease the n
                    // if flowers plotted finished
                    if(n == 0) 
                        return true;
                }
            }
        }
        // not able to plot flowers
        return false;
    }
};