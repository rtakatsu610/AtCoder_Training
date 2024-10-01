#include <bits/stdc++.h>
using namespace std;

int main() 
{
  int A, B, C;
  cin >> A >> B >> C;

  int big = max(A, max(B, C));
  int small = min(A, min(B, C));

  int answer = big - small;
  cout << answer << endl;
}
