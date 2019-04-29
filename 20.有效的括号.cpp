/*
 * @lc app=leetcode.cn id=20 lang=cpp
 *
 * [20] 有效的括号
 */
class Solution {
public:
    bool isValid(string s) {

        if (s.empty())
            return true;

        int _length = s.length();


        if (_length & 1)
            return false;

        stack<char> _stack;

        map<char,char> _vec;
        _vec[')'] = '(';
        _vec['}'] = '{';
        _vec[']'] = '[';

        for (size_t i = 0; i < _length; ++i)
        {
            char _index = s[i];
            if ( _vec.count(_index))
            {
                if (_stack.empty())
                {
                    return false;
                }
                if(_stack.top() != _vec[_index])
                    return false;
                _stack.pop();
            }else
            {
                _stack.push(_index);
            }
        }
        if (!_stack.empty())
        {
           return false;
        }
        
        return true;
    }
};

