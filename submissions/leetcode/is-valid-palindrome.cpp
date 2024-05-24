class Solution
{
public:
    bool isPalindrome(string s)
    {
        int j = s.size() - 1;
        int i = 0;

        while (j >= i)
        {
            if (!isalnum(s[j]))
            {
                j--;
                continue;
            }

            if (!isalnum(s[i]))
            {
                i++;
                continue;
            }

            if (tolower(s[i]) != tolower(s[j]))
            {
                return false;
            }

            i++;
            j--;
        }

        return true;
    }
};