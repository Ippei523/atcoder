#include <string>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
  std::string S, T, N;
  cin >> S >> T;

  int count = 0;
  std::vector<int> diff;
  bool isFirst = false;

  int length = S.length();
  for (int i = 0; i < length; i++)
  {
    if (S[i] != T[i])
    {
      if (i == 0)
      {
        isFirst = true;
      }
      count++;
      diff.push_back(i);
    }
  }
  if (isFirst)
  {
    int first = diff.at(0);
    diff.erase(diff.begin());
    diff.push_back(first);
  }

  cout << count << endl;

  length = diff.size();
  for (int i = 0; i < length; i++)
  {
    S[diff.at(i)] = T[diff.at(i)];
    cout << S << endl;
  }
}