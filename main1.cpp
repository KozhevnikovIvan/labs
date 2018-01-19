#include <iostream>
#include <cstdio>
#include <string>
#include <fstream>
using namespace std;

int main(int argc, char* argv[]) {
  if (argc == 1)
    cout << " No file" << endl;
  else {
    ifstream inFile;
    fstream outFile;
    inFile.open(argv[1], ifstream::binary);
    inFile.seekg(0, ios_base::end);
    int size = inFile.tellg();
    inFile.close();
    outFile.open(argv[1], fstream::out);
    char* array = new char[size];
    for (int i = 0; i < size; i++) array[i] = '0';
    outFile.write((char*)array, size);
    delete[] array;
    outFile.close();
  }
}
