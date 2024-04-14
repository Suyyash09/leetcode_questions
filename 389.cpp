// Approach - Utilizing bit manipulation, when we XOR two same numbers, we get 0. And when we XOR 0 
// with any number, we get that number back. So, I XOR each character of both strings together. This 
// cancels out matching characters, leaving only the odd one out as the answer.

class Solution
{
public:
    char findTheDifference(string s, string t)
    {
        int value = 0;
        for (int i = 0; i < s.length(); i++)
        {
            int ch = s[i] - 'a';
            value ^= ch;
        }

        for (int i = 0; i < t.length(); i++)
        {
            int ch = t[i] - 'a';
            value ^= ch;
        }

        char ans = char(value) + 'a';
        return ans;
    }
};