class Solution {
public:
    string capitalizeTitle(string title) {
        vector<string>v;
        vector<string>v2;
        int i = 0;
        string temp = "";
        while(i<title.size())
        {
            if(title[i]==' ')
            {
                v.push_back(temp);
                temp = "";
            }
            else
            {
            temp += title[i];
            }
            i++;
        }
        v.push_back(temp);

            string str;
            string str1 = "";
        for(auto i :v)
        {
            str = i;
            for(int i = 0; i<str.length();i++)
            {
                str[i]= tolower(str[i]);
                
        }
            if(str.length()!=1&&str.length()!=2)
            str[0]= toupper(str[0]);
            v2.push_back(str);            
        }
        str1 = str1+v2.front();
        for(int  i=1;i<v2.size();i++)
        {
            str1 = str1+" "+v2[i];
        }

        


        return str1;

    }
};
