class Solution
{
public:
    string changeCase(string s)
    {
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] >= 'A' && s[i] <= 'Z')
            {
                char ch = s[i] - 'A' + 'a';
                s[i] = ch;
            }
        }

        return s;
    }

    int countKeyChanges(string s)
    {
        // converting all upper case characters into lower case
        string str = changeCase(s);

        int count = 0;
        // check for adjacent elements, increment count variable if adjacent are not equal
        for (int i = 0; i < str.length() - 1; i++)
        {
            if (str[i] != str[i + 1])
            {
                count++;
            }
        }

        return count;
    }
};