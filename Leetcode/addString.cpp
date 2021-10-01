class Solution {
public:
    string addStrings(string num1, string num2) {
        int carry = 0, a = 0, b = 0, val = 0, i = num1.size()-1 , j = num2.size()-1;
        string sm = "";
		while((i >= 0)||(j >= 0)){
		   if(i>=0){
                a = num1[i] - '0';
            }
            else{ 
                a = 0;
            }
			if(j>=0){
                 b = num2[j] - '0';    
            }
            else{
                b = 0;
            }
			val = (a+b+carry)%10;
            sm += ('0'+val);
            carry = (a+b+carry)/10;
			
            i--;
            j--;
        }
        if(carry>0){
            sm+=carry+'0';
        }
        reverse(sm.begin(), sm.end());
    return sm;
    }
};

// https://leetcode.com/problems/add-strings/
