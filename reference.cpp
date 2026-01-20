#include<iostream> 
using namespace std;
void incerement(int& value) { value++; }
int main() {
  int del = 10;
  int *ptr = &del;
  int &ref = del;
  incerement(ref);
  cout << del << endl;
  cout << ptr << endl;
  cout << &ref << endl;
  return 0;
}
