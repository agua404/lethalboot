#include <locale.h>
#include <stdio.h>
#include <wchar.h>

int main(void) {
  setlocale(LC_ALL, "");

  int X = 0;
  int Y = 0;

  //  wchar_t message[2][5] = {
  //      L"╔═╗",
  //      L"╚═╝"
  //  };

  printf("Size X: ");
  scanf("%d", &X);
  printf("Size Y: ");
  scanf("%d", &Y);

  X = X - 2;
  Y = Y - 2;

  wprintf(L"╔");
  for (int i = 0; i < X; i++) {
    printf(" ");
  }
  wprintf(L"╗");
  printf("\n");

  for (int i = 0; i < Y; i++) {
    printf("l");
    for (int i2 = 0; i2 < X; i2++) {
      printf(" ");
    }
    printf("r");
    printf("\n");
  }

  wprintf(L"%ls","╚");
  for (int i = 0; i < X; i++) {
    printf(" ");
  }
  wprintf(L"%ls", "╝");
  printf("\n");

  return 0;
}
