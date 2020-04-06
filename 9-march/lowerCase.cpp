#include <iostream>
#include <fstream>

using namespace std;

int main()
{

  string line;
  ifstream fin;

  fin.open("sample.txt");

  int y;
  int count = 0;
  while (fin)
  {
    getline(fin, line);

    cout << line << endl;
    char x = line[0];
    int i = 0;
    while (x != '\0')
    {
      cout << x;
      y = x;
      cout << y << endl;
      if (y >= 97 || y <= 122)
      {
        count++;
      }
      x = line[++i];
    }
  }
  cout << "count" << count;

  fin.close();
  return 0;
}