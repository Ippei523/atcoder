#include <iostream>
using namespace std;

int main()
{
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int N, M;
  cin >> N >> M;
  char ans[N][M];

  for (int i = 0; i < M; i++)
  {
    int a;
    char b;

    cin >> a >> b;
    ans[a - 1][i] = b;
  }

  for (int i = 0; i < N; i++)
  {
    bool already = false;
    for (int j = 0; j < M; j++)
    {
      if (ans[i][j] == 'M' && already == false)
      {
        cout << "Yes";
        already = true;
      }
      else if (ans[i][j] == 'F')
      {
        cout << "No";
      }
      cout << endl;
    }
  }
}