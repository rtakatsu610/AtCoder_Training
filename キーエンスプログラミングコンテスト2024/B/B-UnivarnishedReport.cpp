#include <bits/stdc++.h>
using namespace std;

int main(void) 
{
    // 2つの文字列を入力する
    std::string str1;
    std::string str2;
    std::getline(std::cin, str1);
    std::getline(std::cin, str2);

    // 2つの文字列を比較
    int minLength = std::min(str1.length(), str2.length());
    int diffIndex = -1;  // 異なる位置を保存する変数。初期値は-1（等しい場合）

    // 各文字を1つずつ比較
    for (int i = 0; i < minLength; ++i) 
    {
        if (str1[i] != str2[i]) 
        {
            diffIndex = i + 1;  // 1文字目から数えるため、+1
            break;  // 最初に異なる位置を見つけたら終了
        }
    }

    // 長さが違う場合は最初に異なる位置を設定
    if (diffIndex == -1 && str1.length() != str2.length()) 
    {
        diffIndex = minLength + 1;  // 最初に長さが違った部分（1から数える）
    }

    // 結果を出力
    if (diffIndex == -1) 
    {
        std::cout << "0" << std::endl;  // 文字列が等しい場合
    } 
    else 
    {
        std::cout << diffIndex << std::endl;  // 異なる位置を出力
    }

    return 0;
}