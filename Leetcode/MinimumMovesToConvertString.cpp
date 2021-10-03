// link to problem : https://leetcode.com/problems/minimum-moves-to-convert-string/

class Solution {
public:
    int minimumMoves(string s) {
        int c=0,c1=0;
        string str=s;
        for(int i=0;i<s.length();){
            if(s[i]=='X'){
                int x=3;
                while(i<s.length() && x--){
                    if(s[i]=='X')
                        s[i]='0';
                    i++;
                }c++;
            }else
                i++;
        }return c;
    }
};