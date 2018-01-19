#include <iostream>
#include <cstdio>
#include <string>
#include <fstream>
#include <limits>

using namespace std;

int main(int argc, char *argv[]) {
  int word;
  int i;
  ifstream fin(argv[1]);
  string stroka;
  cout << endl;
  while (!(fin.eof())) {
    getline(fin, stroka);
    for (i = 0; i < stroka.length(); i++) {
      if (stroka[i] == ' ') word++;
    }
  }
  fin.close();
  cout << word + 1;
}
