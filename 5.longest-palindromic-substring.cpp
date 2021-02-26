/*
 * @lc app=leetcode id=5 lang=cpp
 *
 * [5] Longest Palindromic Substring
 */

// @lc code=start
class Solution
{
public:
    void pali(int left, int right, string s, int &start, int &anslen)
    {
        while (left >= 0 && right < s.length() && s[left] == s[right])
        {
            --left;
            ++right;
        }

        if (anslen < right - left - 1)
        {
            start = left + 1;
            anslen = right - left - 1;
        }
    }

    string longestPalindrome(string s)
    {

        if (s.length() < 2)
            return s;

        int start = 0, anslen = 0;

        for (int i = 0; i < s.length(); i++)
        {
            pali(i, i, s, start, anslen);
            pali(i, i + 1, s, start, anslen);
        }

        return s.substr(start, anslen);
    }

    // string longestPalindrome(string s)
    // {
        
    //     int len = s.length();

    //     if( len <2 )
    //      return s ;
        

    //     int **dp ;
    //     dp = new int*[len]() ;

    //     for (int i=0; i<len; i++)
    //     {   
    //         dp[i] = new int [len]();
    //     }

    //     int left = 0 , maxlen = 0 ;


    //     for(int i = 0; i< len; i++)
    //     {

    //         for(int j = i ; j >= 0 ; j--)
    //         {
    //             if( i==j )
    //                 dp[j][i] = 1 ;
    //             else
    //             {

    //                 dp[j][i] = (s[i]== s[j] && ( i-j < 2 || dp[j+1][i-1]  )  ) ;
    //             }

    //             if( dp[j][i] && maxlen < i-j+1 )
    //             {
    //                 left = j;
    //                 maxlen = i-j+1 ;

    //             }

    //         }

    //     }


    //     return s.substr( left,maxlen );


    // }




};
// @lc code=end
