// Last submission: 11/18/2023, 4:55:02 PM
class Solution {
public:
    int numberOfSteps(int num) {
        int steps = 0; //error handling
        while(num > 0) {
            if(num%2 == 0)
                num = num / 2;
            else
                num = num -1;
            steps++;
        }
        return steps;
    }
};