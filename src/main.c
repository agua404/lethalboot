#include <locale.h>
#include <stdio.h>

int main() {
  setlocale(LC_ALL, "");

  int X = 0;
  int Y = 0;

  printf("Size X: ");
  scanf("%d", &X);
  printf("Size Y: ");
  scanf("%d", &Y);

  X = X - 2;
  Y = (Y - 2) / 2;

  printf("┌");
  for (int i = 0; i < X; i++) {
    printf("─");
  }
  printf("┐\n");

  for (int i = 0; i < Y; i++) {
    printf("│");
    for (int i2 = 0; i2 < X; i2++) {
      printf(" ");
    }
    printf("│");
    printf("\n");
  }

  printf("└");
  for (int i = 0; i < X; i++) {
    printf("─");
  }
  printf("┘");
  printf("\n");

  return 0;
}
