#define ll long long int

class Solution {
public:
    string categorizeBox(int length, int width, int height, int mass) {
        
        int h=0,b=0;
        if((long long)length*width*height>=1000000000||length>=10000||width>=10000||height>=10000)
            b++;
        if(mass>=100)
        h++;
        if(b==1&&h==1)
            return "Both";
        else if(b==1&&h==0)
            return "Bulky";
        else if(b==0&&h==1)
            return "Heavy";
        else
            return "Neither";
        
    }
};
