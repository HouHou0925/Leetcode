/*
 * @lc app=leetcode id=345 lang=cpp
 *
 * [345] Reverse Vowels of a String
 */

// @lc code=start
class Solution
{
public:
    bool isVowel(char c)
    {
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U';
    }

    string reverseVowels(string s)
    {

        for (int i = 0, j = s.length() - 1; i < j;)
        {

            if (isVowel(s[i]) && isVowel(s[j]))
            {
                swap(s[i++], s[j--]);
            }
            else if (isVowel(s[i]))
            {
                j--;
            }
            else
            {
                i++;
            }
        }

        return s;
    }
};
// @lc code=end
