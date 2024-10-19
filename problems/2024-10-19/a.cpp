#include <iostream>
#include <vector>
using namespace std;

int main()
{
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int push_button = 0;
  int duration = 0;
  std::vector<int> at_push_time;

  cin >> push_button >> duration;
  for (int i = 0; i < push_button; i++)
  {
    int push;
    cin >> push;
    at_push_time.push_back(push);
  }

  int received_count = 0;
  int received_at = 0;

  for (int i = 0; i < push_button; i++)
  {
    if (i == 0)
    {
      received_count++;
      received_at = at_push_time[i];
      continue;
    }

    bool can_received = at_push_time[i] - received_at >= duration;
    if (can_received)
    {
      received_count++;
      received_at = at_push_time[i];
    }
  }

  cout << received_count;
}
