/*
 * @lc app=leetcode.cn id=9 lang=cpp
 *
 * [9] 回文数
 */
class Solution {
public:

    int getcover(int x){

        int _index = 0;
        int _num = 1;
        while (x/=10)
        {
            ++_index;
        }
        return _index;
    }

    bool isPalindrome(int x) {
        
        if (x<0)
            return false;

        int _cover = pow(10,getcover(x));
    
        while (x)
        {
            int _start = x/_cover;
            int _end   = x%10;
            if (_start != _end)
                return false;

            x = x % _cover;
            _cover /= 100;
            x /= 10;
        }
        return true;
    }
};

