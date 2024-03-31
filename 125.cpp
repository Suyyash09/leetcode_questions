class Solution
{
public:

    // function to check whether character is alphanumeric or not
    bool valid(char ch)
    {

        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9'))
        {
            return true;
        }

        return false;
    }

    // function to convert character into lower case (excluding small case and numeric characters)
    char lowerCase(char ch)
    {
        if (((ch >= 'a') && (ch <= 'z')) || ((ch >= '0') && (ch <= '9')))
        {
            return ch;
        }
        else
        {
            char temp = ch - 'A' + 'a';
            return temp;
        }
    }

    // function to check whether string is palindrome
    bool checkPalindrome(string str)
    {
        int start = 0, end = str.length() - 1;
        while (start <= end)
        {
            if (str[start] != str[end])
            {
                return false;
            }
            else
            {
                start++;
                end--;
            }
        }

        return true;
    }

    // main function
    bool isPalindrome(string s)
    {
        string temp = "";

        // check for the characters in string are valid, that is., characters that are alphanumeric and add them in another string - 'temp'
        for (int i = 0; i < s.length(); i++)
        {
            if (valid(s[i]))
            {
                temp.push_back(s[i]);
            }
        }

        // converting all the character in temp in lower case (those already in lower case and are numeric values will not be altered)
        for (int i = 0; i < temp.length(); i++)
        {
            temp[i] = lowerCase(temp[i]);
        }

        // check the string temp whether it is palindrome or not
        return checkPalindrome(temp);
    }
};