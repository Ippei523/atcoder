#include <iostream>
using namespace std;

int main()
{
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int on_left_hand = 1;
  int on_right_hand = 2;

  int ring_count, attempt_count;

  cin >> ring_count >> attempt_count;
  int total_count = 0;

  for (int i = 0; i < attempt_count; i++)
  {
    char hand;
    int move_number;

    int left_hand_round = 0;
    int right_hand_round = 0;

    cin >> hand >> move_number;

    right_hand_round = move_number - on_right_hand;
    left_hand_round = move_number - on_left_hand;

    if (hand == 'L')
    {
      if (left_hand_round == 0)
      {
        continue;
      }

      // 0より小さい場合は、左手を時計回り
      if (right_hand_round < 0)
      {
        total_count += abs(left_hand_round);
      }
      else
      {
        total_count += abs(ring_count - left_hand_round);
      }
      move_number = on_left_hand;
    }
    else
    {
      if (right_hand_round == 0)
      {
        continue;
      }

      if (left_hand_round < 0)
      {
        total_count += abs(right_hand_round);
      }
      else
      {
        total_count += abs(ring_count - right_hand_round);
      }
      move_number = on_right_hand;
    }
  }

  cout << total_count;
}
