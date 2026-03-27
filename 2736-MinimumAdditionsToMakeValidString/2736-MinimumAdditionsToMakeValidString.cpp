// Last submission: 11/24/2023, 4:50:39 PM
class Solution {
public:
    int addMinimum(string word) {
        int minAdded = 0;

        int i = 0;
        while(i < word.size()) {
            // in each iteration count the number of letters (a,b,c)
            int count = 0;
            if(i < word.size() && word[i] == 'a') {
                count++;
                i++;
            }
            if(i < word.size() && word[i] == 'b') {
                count++;
                i++;
            }
            if(i < word.size() && word[i] == 'c') {
                count++;
                i++;
            }
            // in each iteration compute the minAdded
            // (3 - count) because count has the number of appearance 
            minAdded += 3 - count;
        }

        return minAdded;
    }
};