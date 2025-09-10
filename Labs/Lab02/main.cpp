#include <iostream>
using namespace std;

// JS Task 1
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

// task 3

#include <iostream>
using namespace std;

int *getScores(int &size) {
  cout << "Enter number of scores: ";
  cin >> size;

  while (size <= 0) {
    cout << "Enter a positive number: ";
    cin >> size;
  }

  int *scores = new int[size];

  for (int i = 0; i < size; i++) {
    cout << "Enter score " << i + 1 << ": ";
    cin >> scores[i];
  }

  return scores;
}

int main() {
  int size;
  int *scores = getScores(size);

  cout << "Scores are: ";
  for (int i = 0; i < size; i++) {
    cout << scores[i] << " ";
  }
  cout << endl;

  return 0;
}

//task 4

#include <iostream>
using namespace std;

// JS Task 4
int* Join(int a1[], int n1, int a2[], int n2) {
    int* a = new int[n1 + n2];

    for (int i = 0; i < n1; i++) {
        a[i] = a1[i];
    }
    for (int i = 0; i < n2; i++) {
        a[n1 + i] = a2[i];
    }

    return a;
}

int main() {
    int arr1[3] = {1, 2, 3};
    int arr2[4] = {4, 5, 6, 7};

    int* joined = Join(arr1, 3, arr2, 4);

    cout << "Joined: ";
    for (int i = 0; i < 7; i++) {
        cout << joined[i] << " ";
    }
    cout << endl;

    return 0;
}

// task 5

#include <iostream>
using namespace std;

void PointerExample() {
    int x = 10;
    int* p = &x;
    cout << "PointerExample: x = " << x << ", *p = " << *p << endl;
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

// JS Task 3
int* getScores(int& size) {
    cout << "Enter number of scores: ";
    cin >> size;
    while (size <= 0) {
        cout << "Enter positive number: ";
        cin >> size;
    }

    int* a = new int[size];
    for (int i = 0; i < size; i++) {
        cout << "Enter score " << i+1 << ": ";
        cin >> a[i];
    }
    return a;
}

int* Join(int a1[], int n1, int a2[], int n2) {
    int* a = new int[n1+n2];
    for (int i = 0; i < n1; i++) a[i] = a1[i];
    for (int i = 0; i < n2; i++) a[n1+i] = a2[i];
    return a;
}

// JS Task 5
int main() {
    PointerExample();

    int size;
    int* scores = getScores(size);
    cout << "Scores: ";
    printArray(scores, size);

    int arr1[3] = {1,2,3};
    int arr2[4] = {4,5,6,7};
    int* joined = Join(arr1,3,arr2,4);
    cout << "Joined array: ";
    printArray(joined,7);

    delete[] scores;
    delete[] joined;

    return 0;
}

/*  JS 7.8/10
    Task 1: 1.8/2
    Task 2: 2/2
    Task 3: 2/2
    Task 4: 2/2
    Task 5: 2/2

    Overall: -2 (Used multiple mains, and included iostream multiple times. Repeated many functions)
*/