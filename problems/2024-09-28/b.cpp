#include <iostream>
using namespace std;

int main()
{
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  const string ALPHABET = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

  string s;
  int move_coordinator = 0;
  int move_count = 0;

  cin >> s;

  for (int i = 0; i < s.length(); i++)
  {
    if (i == 0)
    {
      int index = s.find(ALPHABET[i]);
      move_coordinator = index;
      continue;
    }
    int index = s.find(ALPHABET[i]);
    int move = std::abs(index - move_coordinator);

    move_coordinator = index;
    move_count += move;
  }

  cout << move_count;
}