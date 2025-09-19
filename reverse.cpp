#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;

    // Take input
    cout << "Enter a string: ";
    getline(cin, str);

    // Reverse the string manually
    int size = str.length();
    for (int i = 0; i < size / 2; i++) {
        char temp = str[i];
        str[i] = str[size - i - 1];
        str[size - i - 1] = temp;
    }

    // Print result
    cout << "The reversed string is: " << str << endl;

    return 0;
}
