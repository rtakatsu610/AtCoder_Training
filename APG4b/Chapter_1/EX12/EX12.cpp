#include <bits/stdc++.h>
using namespace std;

int main(void) 
{
    string S;
    cin >> S;

    int i = 0;
    int sum = 0;
    int current_number = 0;
    char last_operator = '+'; // 初期値を '+' に設定することで最初の数字を処理

    while (i < S.size()) 
    {
        // 数字の処理
        if (isdigit(S.at(i))) 
        {
            current_number = S.at(i) - '0'; // 文字を整数に変換

            // 演算子に応じて合計を更新
            if (last_operator == '+') 
            {
                sum += current_number;
            } 
            else if (last_operator == '-') 
            {
                sum -= current_number;
            }
        }
        // 演算子の処理
        else if (S.at(i) == '+' || S.at(i) == '-') 
        {
            last_operator = S.at(i);
        }

        i++;
    }

    cout << sum << endl;
    return 0;
}
