#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n;  // 部署の数
    std::cin >> n;

    std::vector<int> people(n);  // 各部署の人数を保存するベクトル

    // 各部署の人数を入力
    for (int i = 0; i < n; ++i) 
    {
        std::cin >> people[i];
    }

    // 各グループの人数差が最小になるように分けるために全ての組み合わせを試す
    int totalSum = 0;  // 全体の人数の合計
    for (int i = 0; i < n; ++i) 
    {
        totalSum += people[i];
    }

    // 最適なグループ分けを見つけるためのビット全探索
    int minDifference = totalSum;  // 初期値を合計人数に設定
    int bestGroup1Sum = 0;         // ベストなグループ1の合計

    for (int i = 0; i < (1 << n); ++i) 
    {  // 2^n 通りの組み合わせをチェック
        int group1Sum = 0;

        // グループ1に含まれる部署を計算する
        for (int j = 0; j < n; ++j) {
            if (i & (1 << j)) {
                group1Sum += people[j];
            }
        }

        int group2Sum = totalSum - group1Sum;
        int difference = std::abs(group1Sum - group2Sum);

        // 最小の人数差を更新
        if (difference < minDifference) {
            minDifference = difference;
            bestGroup1Sum = group1Sum;
        }
    }

    // 結果を出力
    int largerGroup = std::max(bestGroup1Sum, totalSum - bestGroup1Sum);
    std::cout << largerGroup << std::endl;

    return 0;
}