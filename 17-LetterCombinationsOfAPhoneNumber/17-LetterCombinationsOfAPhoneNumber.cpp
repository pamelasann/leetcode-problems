// Last submission: 11/22/2023, 1:18:54 PM
class Solution {
public:
    vector<string> letterCombinations(string digits) {
        if(digits.size() == 0)
            return {};
        vector<string> v{"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

        vector<string> combinations;
        combinations.push_back(""); //initializes it empty for combinations 

        // for each digit in digits       
        for(char digit : digits){
            vector<string> temp; 
            string letters = v[digit-'0']; // digit-'0' converts string to int
            //for each letter in letters
            for(char letter : letters){
                // create combinations
                for(auto comb : combinations) {
                    temp.push_back(comb+letter); 
                }   
            }
            combinations=temp;
        }
        return combinations;
    }
};