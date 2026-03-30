#include <iostream>
using namespace std;

/*Function calculates the area of a triangle*/
double areaOftriangle (double base, double height) {
    return 0.5 * base * height;
}

/*Function calculates the area of a rectangle*/
double areaOfrectangle (double length, double width) {
    return length * width;
}

/*Function calculates the area of a square*/
double areaOfsquare (double side){
    return side * side;
}

int main(){
    int selection;
    double side, length, width, base, height;
    bool running = true;

    while (running){
        cout << "Please select area of the shape to calculate" << endl;
        cout << "1. Square " << endl;
        cout << "2. Rectangle " << endl;
        cout << "3. Triangle " << endl;
        cout << "4. Quit Program " << endl;
        cout << "\n";
        cout << "Enter selection: ";
        cin >> selection;

        switch (selection) {
            case 1:
                cout << "Enter side length: ";
                cin >> side;
                cout << "Area of square = " << areaOfsquare(side) << endl;
                break;

            case 2:
                cout << "Enter length: ";
                cin >> length;
                cout << "Enter width: ";
                cin >> width;
                cout << "Area of rectangle = " << areaOfrectangle(length, width) << endl;
                break;

            case 3:
                cout << "Enter base: ";
                cin >> base;
                cout << "Enter height: ";
                cin >> height;
                cout << "Area of triangle = " << areaOftriangle(base, height) << endl;
                break;

            case 4:
                cout << "Quitting program..." << endl;
                running = false;
                break;

            default:
                cout << "Invalid selection!" << endl;
        
        }
    }
    return 0;
}