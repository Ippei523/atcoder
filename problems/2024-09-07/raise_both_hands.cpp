#include <iostream>
using namespace std;

int main()
{
  int L, R;

  cin >> L >> R;

  if (L == R)
  {
    cout << "Invalid" << endl;
  }
  else
  {
    if (L == 1)
    {
      cout << "Yes" << endl;
    }
    else
    {
      cout << "No" << endl;
    }
  }
}