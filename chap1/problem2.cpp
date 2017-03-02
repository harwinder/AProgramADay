#include <string>
#include <iostream>

using namespace std;

bool checkPermutation(const string& s, const string& t)
{
  if (s.length() != t.length())
    return false;

  int count[128] = { 0 };
  for(string::const_iterator it = s.begin();
      it != s.end();
      it++)
    count[*it]++;

  for(string::const_iterator it = t.begin();
      it != t.end();
      it++)
  {
    count[*it]--;
    if (count[*it] < 0)
      return false;
  }

  return true;
}

int main()
{
  cout << "checking : "
       << (checkPermutation("hello", "oelah") ? "true" : "false");
}
