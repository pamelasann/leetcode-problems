// Last submission: 11/27/2023, 12:35:51 PM
class Solution {
public:
    int compress(vector<char>& chars) {
        if(chars.size() < 2)
            return chars.size();
        
        string str = ""; // to store resulting string
        for(int i = 0; i < chars.size(); i++) {
            int count = 1;
            int k = i; // to append last consecutive char
            while(i+1 < chars.size()) {
                if(chars[i] != chars[i+1])
                    break;
                count++;
                i++;
            }
            str += chars[k];
            if(count != 1)
                str += to_string(count); // append count
        }
        chars.clear(); // fill vector with each char in str
        for(int i = 0; i < str.size(); i++)
            chars.push_back(str[i]); 
        return chars.size();
    }
};