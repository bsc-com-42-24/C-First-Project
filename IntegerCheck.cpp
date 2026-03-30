#include <iostream>
using namespace std;

int main(){
    int value;
    bool valid = false;

    while (!valid) {
        cout << "Enter an integer value between 5 and 10: " << endl;

        if (cin >> value) { 
            if (value >= 5 && value <= 10) {
                valid = true; 
            } else {
                cout << "You entered " << value 
                     << ". Please enter a9 number between 5 and 10." 
                     << endl;
            }
        } else {
            cout << "Sorry, you entered an invalid number, please try again." << endl;
            cin.clear(); 
            cin.ignore(1000, '\n'); 
        } 
    }

    cout << "Your input value (" << value << ") has been accepted." << endl;

    return 0;
}
