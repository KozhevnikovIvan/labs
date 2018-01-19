#include <iostream>
#include <cstdio>
#include <string>
#include <fstream>
#include <limits>

using namespace std;

int main(int argc, char *argv[]) {
  ifstream fin(argv[1]);
  string stroka;
  cout << endl;
  while (!(fin.eof())) {
    getline(fin, stroka);
    cout << stroka << endl;
  }
  fin.close();
}
