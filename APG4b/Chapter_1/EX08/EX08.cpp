#include <bits/stdc++.h>
using namespace std;

int main()
{
  int p;
  int price;
  int N;
  string text;
  cin >> p;

  // パターン1
  if (p == 1) 
  {
    cin >> price >> N;
  }

  // パターン2
  if (p == 2)
  {
    cin >> text >> price >> N;
    cout << text << "!" << endl;
  }

  cout << price * N << endl;
  return 0;
}
