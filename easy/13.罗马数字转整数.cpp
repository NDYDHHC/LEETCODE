/*
 * @lc app=leetcode.cn id=13 lang=cpp
 *
 * [13] 罗马数字转整数
 */
class Solution {
public:
    int romanToInt(string s) {
        
        int Val[256];
        Val['I'] = 1;
        Val['V'] = 5;
        Val['X'] = 10;
        Val['C'] = 100;
        Val['M'] = 1000;
        Val['L'] = 50;
        Val['D'] = 500;
        int val = 0;
        for(int i = 0; i < s.length(); i++){
            if(i+1 >= s.length() || Val[s[i+1]] <= Val[s[i]])
                val += Val[s[i]];
            else  
                val -= Val[s[i]];
        }  
        return val;  
        
    }
};

