#include <iostream>
using namespace std;

int main()
{
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  const int ATTEMPTS = 12;

  string strings[ATTEMPTS];
  int count = 0;

  for (int i = 0; i < ATTEMPTS; i++)
  {
    cin >> strings[i];
  }

  for (int i = 0; i < ATTEMPTS; i++)
  {
    if (strings[i].length() == i + 1)
    {
      count++;
    }
  }

  cout << count;
}