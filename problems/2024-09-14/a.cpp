#include <iostream>
using namespace std;

int main()
{
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  char Sab, Sac, Sbc;
  int a, b, c;
  int ans[] = {a, b, c};
  cin >> Sab >> Sac >> Sbc;

  if (Sab == '>')
  {
    a = 1;
    b = 0;
  }
  else
  {
    a = 0;
    b = 1;
  }

  if (Sac == '>')
  {
    a += 1;
    c = 0;
  }
  else
  {
    a += 0;
    c = 1;
  }

  if (Sbc == '>')
  {
    b += 1;
    c += 0;
  }
  else
  {
    b += 0;
    c += 1;
  }

  if (a == 1)
  {
    cout << "A";
  }
  else if (b == 1)
  {
    cout << "B";
  }
  else
  {
    cout << "C";
  }

  return 0;
}