#include <iostream>
#include <string>
#include <bitset>

using namespace std;

bool containsUniqueChars(const string& s)
{
  bitset<256> present;
  for(string::const_iterator it = s.begin();
      it != s.end();
      it++)
  {
    if (present[*it])
      return false;
    else
      present[*it] = true;
  }
  return true;
}

int main()
{
  string s1("helo");
  cout << s1 << ": " << containsUniqueChars(s1);
}
