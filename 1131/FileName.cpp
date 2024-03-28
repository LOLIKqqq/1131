#include <iostream>
using namespace std;

class MyClass {
public:
    int myNumber;
    string myString;
};

int main() {
    MyClass myObject;

    
    cout << "Enter a number: ";
    cin >> myObject.myNumber;

    cout << "Enter a string: ";
    cin >> myObject.myString;

   
    cout << "My number: " << myObject.myNumber << endl;
    cout << "My string: " << myObject.myString << endl;

    return 0;
}