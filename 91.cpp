#include<stdio.h>


class Solution {
public:
    int numDecodings(string s) {
        if(s.length() == 0 || s[0] == '0') return 0;
        int cnt1 = 1, cnt2 = 1;
        
        for(int i = 1; i < s.length(); i++){
            if(s[i] == '0'){
                if(s[i-1] == '1' || s[i-1] == '2'){
                    cnt1 = cnt2;
                    continue;
                }
                else return 0;
            }
            int temp = cnt1;
            if(isValid(s[i-1], s[i])) temp+= cnt2;
            cnt2 = cnt1;
            cnt1 = temp;
        }
        return cnt1;
    }
private:
    bool isValid( char c1, char c2){
        return c1 == '1' || (c1 == '2' && c2 <= '6');
    }
};
