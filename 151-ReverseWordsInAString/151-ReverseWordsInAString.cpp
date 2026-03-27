// Last submission: 11/26/2023, 9:34:10 PM
class Solution {
public:
    string reverseWords(string s) {
        // in case s starts or/and finishes with spaces
        int i = 0, j = s.size() - 1;
        while(i <= j && s[i] == ' ')
            i++;
        while(j >= i && s[j] == ' ')
            j--;
        s = s.substr(i, j-i+1); // trim s and remove such spaces

        // split string into words base on spaces
        vector<string> words;
        stringstream ss(s);
        string w;
        while(ss >> w)
            words.push_back(w);

        // reverse words order 
        string reverse = "";
        for(int i = words.size() - 1; i > 0; i--) {
            reverse += words[i] + " ";
        }
        reverse += words[0];
        
        return reverse;
    }
};