
//https://leetcode.com/problems/string-to-integer-atoi/

#include <climits>
#include <iostream>

using namespace std;


class Solution {
public:
    static int	chek_sign(char const *s, int i)
    {
        int	sign;

        sign = 1;
        if (s[i] == '-')
        {
            sign *= -1;
            i++;
        }
        else if (s[i] == '+')
            i++;
        return (sign);
    }

    int	myAtoi(string str)
    {
        int		i;
        int		sign;
        long	result;
        long	temp;

        i = 0;
        result = 0;
        while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
            i++;
        sign = chek_sign(str.c_str(), i);
        if (str[i] == '-' || str[i] == '+')
            i++;
        while (str[i] >= '0' && str[i] <= '9')
        {
            temp = result;
            result = result * 10 + (str[i++] - '0');
            if (result * sign < INT_MIN)
                return (INT_MIN);
            else if (result > INT_MAX && sign != -1)
                return (INT_MAX);
        }
        return (result * sign);
    }
};