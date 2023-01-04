class Solution {
public:
    bool detectCapitalUse(string word) {
        string temp = word;
        transform(temp.begin(), temp.end(), temp.begin(), ::toupper);
        if (temp == word){
            return true;
        }
        transform(temp.begin(), temp.end(), temp.begin(), ::tolower);
        if (temp == word){
            return true;
        } 
        transform(temp.begin(), temp.begin()+1, temp.begin(), ::toupper);
        if (temp == word){
            return true;
        } 
        return false;
    }
};