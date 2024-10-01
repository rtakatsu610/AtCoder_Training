#include <bits/stdc++.h>
using namespace std;

int main(void) 
{
  int N;
  cin >> N;

  // N要素の配列
  vector<int> A(N);

  // 入力処理
  for (int i = 0; i < N; i++) 
  {
    cin >> A.at(i);
  }

  // 合計点
  int sum = 0;

  // 合計点を計算
  for (int i = 0; i < N; i++) 
  {
    sum += A.at(i);
  }

  // 平均点
  int mean = sum / N;
  int between = 0;

  // 平均点から何点離れているかを計算して出力
  for (int i = 0; i < N; i++) 
  {
    A.at(i) -= mean;
    between = abs(A.at(i));
    cout << between << endl;
  }
  return 0;
}
