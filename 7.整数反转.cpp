/*
 * @lc app=leetcode.cn id=7 lang=cpp
 *
 * [7] 整数反转
 */
class Solution {
public:
    int reverse(int x) {
        
        int _num = 0;
        int _index = _num;
        while (x)
        {
            if (_num>(INT_MAX/10) || _num<(INT_MIN/10))
            {
                return 0;
            }
           _num = _num*10 + x%10;
           if(_num / 10 != _index)
              return 0;
           _index = _num;
           x = x/10;
        }
        return _num;
    }
};

