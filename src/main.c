#include <wchar.h>
#include <locale.h>

int main(void)
{
  setlocale(LC_ALL, "");

  wchar_t message[2][5] = {
      L"╔═╗",
      L"╚═╝"
  };

  for (int i = 0; i < 2; i++) {
      wprintf(L"%ls\n", message[i]);
  }

  return 0;
}
