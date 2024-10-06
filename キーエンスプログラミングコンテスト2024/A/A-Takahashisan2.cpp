#include <bits/stdc++.h>
using namespace std;

int main() 
{
    // 文字列を保存する変数を宣言
    std::string input;

    std::getline(std::cin, input);  // 入力された文章を変数に保存

    // 文章の長さを取得
    int length = input.length();

    // 文章が少なくとも3文字以上であることを確認し、最後の3文字が"san"かをチェック
    if (length >= 3) 
    {
        std::string lastThree = input.substr(length - 3);  // 最後の3文字を取り出す
        if (lastThree == "san") {
            std::cout << "Yes" << std::endl;  // "san"で終わっているなら"yes"と表示
        } else {
            std::cout << "No" << std::endl;  // そうでない場合は"no"と表示
        }
    } 
    else 
    {
        std::cout << "No" << std::endl;  // 文章が3文字未満なら必ず"no"と表示
    }

    return 0;  // プログラム終了
}