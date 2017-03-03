#include <iostream>
#include <string>

using namespace std;

void urlify(char s[], int length)
{
  int i = length - 1;
  while( length > 0 )
  {
    if (s[length - 1] != ' ')
      break;;
    length--;
  }
  while(length > 0)
  {
    if (s[length - 1] != ' ')
      s[i--] = s[length - 1];
    else
    {
      s[i--] = '0';
      s[i--] = '2';
      s[i--] = '%';
    }
    length--;
  }
}

int main()
{
  char str[] = "Mr A BCDE    ";
  cout << "<" << str << ">(" << strlen(str) << ") => ";
  urlify(str, 13);
  cout << "<" << str << ">(" << strlen(str) << ")" << endl;
}
