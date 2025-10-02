#include <iostream>
using namespace std;

char letterGrade(int grade) {
    char letters[] = {'A', 'B', 'C', 'D', 'F'};
    int minimums[] = {90, 80, 70, 60, 0};

    if (grade < 0 || grade > 100) return 'X';

    for (int i = 0; i < 5; i++) {
        if (grade >= minimums[i]) return letters[i];
    }
    return 'X';
}

int main() {
    const int SIZE = 10;
    double grades[SIZE] = {95, 82, 76, 88, 59, 100, 67, 73, 91, 85};

    cout << "Original grades: ";
    for (int i = 0; i < SIZE; i++) cout << grades[i] << " ";
    cout << "\n";

    int minIndex = 0;
    for (int i = 1; i < SIZE; i++) {
        if (grades[i] < grades[minIndex]) minIndex = i;
    }
    grades[minIndex] = 100.0;

    cout << "After lowestGrade100: ";
    for (int i = 0; i < SIZE; i++) cout << grades[i] << " ";
    cout << "\n";

    double maxGrade = grades[0];
    for (int i = 1; i < SIZE; i++) {
        if (grades[i] > maxGrade) maxGrade = grades[i];
    }
    double diff = 100.0 - maxGrade;
    for (int i = 0; i < SIZE; i++) grades[i] += diff;

    cout << "After examCurve: ";
    for (int i = 0; i < SIZE; i++) cout << grades[i] << " ";
    cout << "\n";

    cout << "Letter grades:\n";
    for (int i = 0; i < SIZE; i++) {
        cout << (int)grades[i] << " -> " << letterGrade((int)grades[i]) << "\n";
    }

    return 0;
}

/*  JS
    Function 1: 0/3.0
    Function 2: 0/3.0
    Function 3: 3.0/3.0
    main: 1.0/1.0
    Total: 4.0/10.0

*/