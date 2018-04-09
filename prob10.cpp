#include <iostream>

using namespace std;


float enteros(const char *s)
{
	float n = 0;
	for (; *s != '\0'; s++)
	{
    n *= 10;
    n += *s - '0';
	}
  return n;
}

int main() {
  char ab [] = "17824";
  char *ptr = ab;
  float no = enteros(ptr);

  cout << no << '\n';


}
