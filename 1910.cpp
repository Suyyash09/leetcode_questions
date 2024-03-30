class Solution
{
public:
    string removeOccurrences(string s, string part)
    {

        // first check whether the length of the string is not 0 & part lies inside the string
        // p.s. :- s.find(part) give index of first occurance of part in string s 
        while (s.length() != 0 && s.find(part) < s.length())
        {
            // erase from index of part upto its length 
            s.erase(s.find(part), part.length());
        }
        return s;
    }
};