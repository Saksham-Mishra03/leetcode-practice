class Solution {
public:
    bool detectCapitalUse(string word) {
        string str1 = word,str2 = word,str3;
        for(int i = 0; i<word.length();i++)
        {
            str1[i] = toupper(str1[i]);
            str2[i] = tolower(str2[i]);
        }
        str3 = str2;
        str3[0] = toupper(str3[0]);
        if(word==str1||word==str2||word==str3)
        return true;
        else
        return false;
    }
};
