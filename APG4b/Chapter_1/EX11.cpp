#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int N, A;
    cin >> N >> A;
    int n = 1;

    while (n <= N) 
    {
        char op;
        int B;
        cin >> op >> B;

        // 演算子に応じて適切な処理を行う
        if (op == '+') 
        {
            A += B;
        } 
        else if (op == '-') 
        {
            A -= B;
        } 
        else if (op == '*') 
        {
            A *= B;
        }
        else if (op == '/') 
        {
            if (B == 0) 
            {
                cout << "error" << endl;
                break;  // 割り算でゼロ除算のエラーが発生した場合、処理を終了
            } 
            else 
            {
                A /= B;
            }
        } 
        else 
        {
            // 無効な演算子が入力された場合
            cout << "error" << endl;
            break;
        }

        // 結果を表示
        cout << n << ":" << A << endl;
        n++;
    }

    return 0;
}
