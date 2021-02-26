#include <iostream>
#include <vector>
using namespace std;

/*****************************************************************************************************************************
        時間複雜度：
        空間複雜度：
        功能：求排列組合Cij
        輸入引數：
                int i                :        總數
                int j                :          組合數
                vector<int>r:        用於儲存臨時結果的向量，大小必須等於num 
                int num                :        組合數
                vector<vector<int> > & result        :        用於儲存最終所有結果的二維向量 
        返回引數：
                void
        注意：　
                首先建立兩個向量作為函式的輸入引數                
                vector<int> r(num);                                //num為組合數 
                vector<vector<int> > result;        //儲存最終結果 
        使用樣例：
                vector<int> resulttemp(3);
                vector<vector<int> > result;
                Cij(6,3,resulttemp,3,result); 
*****************************************************************************************************************************/

void Cij(int i, int j, vector<int> &r, int num, vector<vector<int>> &result)
{
    //排列組合公式Cij
    //cout << n << ' ' << i << ' ' << j << endl;
    if (j == 1)
    {
        for (int k = 0; k < i; k++)
        {
            vector<int> temp(num);
            r[num - 1] = k;
            for (int i = 0; i < num; i++)
            {
                temp[i] = r[i];
                //cout << r[i] << ' ';
            }
            result.push_back(temp);
            //cout << endl;
        }
    }
    else if (j == 0)
    {
        //do nothing!
    }
    else
    {
        for (int k = i; k >= j; k--)
        {
            r[j - 2] = k - 1;
            Cij(k - 1, j - 1, r, num, result);
        }
    }
}

int main()
{
    int i = 5, j = 3;
    // vector<int> r(j); //num為組合數
    // vector<vector<int>> result;

    vector<int> resulttemp(j);
    vector<vector<int>> result;
    Cij(i, j, resulttemp, j, result);

    for (int k = 0; k < result.size(); k++)
    {
        for (int l = 0; l < result[k].size(); l++)
        {
            cout << result[k][l] << "\t";
        }

        cout << endl;
    }

    system("pause");
    return 0;
}