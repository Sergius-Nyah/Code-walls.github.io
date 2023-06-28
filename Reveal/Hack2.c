#include <stdio.h>

#define T 2

void hack() {
  int test_cases = 2;
  int track_length[T], car_num[T];

  for (int i = 0; i < T; i++) {
    printf("Enter the track length for case %d: ", i);
    scanf("%d", &track_length[i]);

    printf("Enter the number of cars in case %d: ", i);
    scanf("%d", &car_num[i]); 
  }
}

void winner_here(int track_length) {
  int car_speed[car_num][4];

  for (int k = 0; k < car_num; k++) {
    for (int i = 0; i < 4; i++) {
      printf("Input car %d's speed (Cs), turbo speed (Ct), cooldown time (Cc), and duration time (Cd): ", k + 1);
      for (int j = 0; j < 4; j++) {
        scanf("%d", &car_speed[k][j]);
      }
    }
  }

  int points[car_num], wins[car_num];

  for (int i = 0; i < car_num; i++) {
    points[i] = 0;
    wins[i] = 0;
  }

  for (int i = 0; i < car_num; i++) {
    for (int j = 0; j < car_num; j++) {
      if (car_speed[i][0] > car_speed[j][0]) {
        points[i]++;
      } else if (car_speed[i][0] < car_speed[j][0]) {
        wins[j]++;
      }
    }
  }

  for (int i = 0; i < car_num; i++) {
    if (points[i] > wins[i]) {
      printf("Case #1: Car %d\n", i + 1);
    } else {
      printf("Case #1: Car %d\n", i + 2);
    }
  }
}

int main() {
  int track_length = 2;
  hack();
  winner_here(track_length);
  return 0;
}
