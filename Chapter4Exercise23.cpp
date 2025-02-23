/*

file name:Chapter4exercise23.cpp
GitHub URL:https://github.com/Yaqoob7803/Chapter4Examples23/edit/main/Chapter4Exercise23.cpp#L4C10
programmer:Yaqoob Nagi
Date:February 2025
Requirements:

Geometry Calculator Write a program that displays the following menu:Geometry Calculator
Calculate the Area of a Circle Calculate the Area of a Rectangle Calculate the Area of a Triangle Quit
Enter your choice (1-4):If the user enters 1, the program should ask for the radius of 
the circle then display its area. Use the following formula:area = (pi)r^2
Use 3.14159 for t and the radius of the circle for r. If the user enters 2, 
the program should ask for the length and width of the rectangle, then display the rectangle's area. Use the following formula:
area = length * width If the user enters 3, the program should ask for the length of the 
triangle's base and its height, then display its area. Use the following formula:area = base * height * 0.5
If the user enters 4, the program should end.Input Validation: Display an error message if the user enters 
a number outside the range of 1 through 4 when selecting an item from the menu. Do not accept negative values 
for the circle's radius, the rectangle's length or width, or the triangle's base or height.
*/
#include <iostream>
using namespace std;


int main()
{
    int choice;
    double a, b;
    const double PI = 3.14159;

    cout << "Geometry Calculator/n"
        << "1. Circle Area/n"
        << "2. Rectangle Area/n"
        << "3. Triangle Area/n"
        << "4. Quit/n"
        << "Enter your choice (1-4): ";
    cin >> choice;

    if (choice == 1) {
        cout << "Enter radius: ";
        cin >> a;
        if (a < 0) cout << "Invalid input.";
        else cout << "Area: " << PI * a * a;
    }
    else if (choice == 2) {
        cout << "Enter length and width: ";
        cin >> a >> b;
        if (a < 0 || b < 0) cout << "Invalid input.";
        else cout << "Area: " << a * b;
    }
    else if (choice == 3) {
        cout << "Enter base and height: ";
        cin >> a >> b;
        if (a < 0 || b < 0) cout << "Invalid input.";
        else cout << "Area: " << 0.5 * a * b;
    }
    else if (choice == 4) cout << "Exiting program.";
    else cout << "Invalid choice.";

    return 0;
}
