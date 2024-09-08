#include <iostream>
using namespace std;

int main()
{
  int N = 0;
  int answer = 1;
  cin >> N;
  // 配列の宣言
  int A[N][N];

  for (int i = 0; i < N; i++)
  {
    for (int j = 0; j < i + 1; j++)
    {
      cin >> A[i][j];
    }
  }

  for (int i = 0; i < N; i++)
  {
    if (answer >= i + 1)
    {
      answer = A[answer - 1][i];
    }
    else
    {
      answer = A[i][answer - 1];
    }
  }

  cout << answer << endl;
}