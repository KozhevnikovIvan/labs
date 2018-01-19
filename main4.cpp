#include <iostream>
#include <cstdio>
#include <string>
#include <fstream>
#include <limits>

using namespace std;

int main(int argc, char *argv[]) {
  string stroka;
  ifstream fin(argv[1]);
  cout << endl;
  ofstream fout(argv[2]);
  while (!(fin.eof())) {
    getline(fin, stroka);
    fout << stroka << endl;
  }
  fout.close();
}
