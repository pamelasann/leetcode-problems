// Last submission: 9/5/2024, 2:08:37 PM
class Solution {
public:
    vector<string> fizzBuzz(int i) {
        vector<string> result;
        for(int n = 1; n <= i; n++){
            if(n%3 == 0){
                if(n%5==0){
                    result.push_back("FizzBuzz");
                }
                else{
                    result.push_back("Fizz");
                }
            }
            else if(n%5==0){
                result.push_back("Buzz");
            }
            else{
                string temp = to_string(n);
                result.push_back(temp);
            }
        }

        return result;
    }
};