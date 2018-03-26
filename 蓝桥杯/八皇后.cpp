#include<stdio.h>
char map[8][8];
int count = 0;
int main() {
  void fun(int a);
  int t, m;

  for (t = 0; t < 8; t++) {
    map[0][t] = 1;
    fun(1);
    map[0][t] = 0;
  }
  printf("%dÖÖÇé¿ö", count);
  return 0;
}
void fun(int a) {
  int fun1(int a, int b);
  int x = 0, y = 0, b;
  for (y = 0; y < 8; y++) {
    if (fun1(a, y))
      continue;
    map[a][y] = 1;
    if (a == 7) {
      for (x = 0; x < 8; x++, putchar('\n'))
        for (b = 0; b < 8; b++) {
          if (map[x][b] == 1)
            printf("¦·");
          else if ((x + b) % 2)
            printf("¡¡");
          else
            printf("¨€");
        }
      count++;
      putchar('\n');
      if (y == 7) {
        map[a][y] = 0;
        return;
      }
    }
    fun(a + 1);
    map[a][y] = 0;
  }
  return;
}
int fun1(int a, int b) {
  int key = 0, x;
  for (x = 0; x <= b; x++)
    if (map[a][x] == 1)
      key = 1;
  for (x = 0; x <= a; x++)
    if (map[x][b] == 1)
      key = 1;
  for (x = 0; a - x > -1 && b - x > -1; x++)
    if (map[a - x][b - x] == 1)
      key = 1;
  for (x = 0; a - x > -1 && b + x < 8; x++)
    if (map[a - x][b + x] == 1)
      key = 1;
  return key ? 1 : 0;
}
