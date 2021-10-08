//https://www.youtube.com/watch?v=094y1Z2wpJg

#include <cmath>
#include <iostream>
#include <Windows.h>

using namespace std;

int number = 0;
int turns = 0;
int biggest_number = 0;

int main() {

    cout << "3x+1\nIf the number is odd times it by 3 and add 1, if the number is even divide it by 2" << endl;

    cout << "Enter your number: ";
    cin >> number;

    while (true) {

        if (number > biggest_number)
            biggest_number = number;

        if (number % 2 == 0)
            number = number / 2;
        else
            number = (number * 3) + 1;
    
        cout << number << endl;

        Sleep(100);

        turns++;

        if (number == 1)
            break;
    }

    cout << "\nIt took " << turns << " turns to get to '1'\n";
    cout << "The biggest number was " << biggest_number << endl;

    return 0;
}
