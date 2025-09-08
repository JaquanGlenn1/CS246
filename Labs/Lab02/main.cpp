#include <iostream>
using namespace std;

int main() {

  int x = 35;
  int *ptr = nullptr;

  ptr = &x;
  cout << "The value in x is " << x << endl;
  cout << "The address of x is " << ptr << endl;
  cout << "The value stored in the pointer is " <<  &x << endl;
  cout << "The value pointed to by the pointer is " << *ptr<< endl;

  return 0;
}

// task 2

#include <iostream>
using namespace std;

void printArray(int *arr, int size) {
  cout << "[";
  for (int i = 0; i < size; i++) {
    cout << *(arr + i);
    if (i < size - 1) {
      cout << ",";
    }
  }
  cout << "]";
}

int main() {

  int vals[4] = {1, 2, 3, 4}, *valptr;
  valptr = vals;
  printArray(vals, 4);
}
