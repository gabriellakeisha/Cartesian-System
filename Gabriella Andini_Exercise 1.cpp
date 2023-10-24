//============================================================================
// Name        : Exercise 1
// Author      : Gabriella Keisha Andini (40392749)
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

/*Write a program that prints the quadrant (1, 2, 3, 4) of a point located in the Cartesian system.
The program needs to take the coordinates of the point (x,y).
The first quadrant is when both coordinates are positive.
Then the rest follow an anti-clockwise order like in the figure below.*/

//Be careful when one or both coordinates are zero.
//You need to handle these cases with proper messages.


#include <iostream>   //directive. standard input/output library, which provides input/output operations (cout and cin)
using namespace std;  //declares the `std` namespace, which contains standard C++ library functions and objects
int main() {
    //declare variables to store the x and y coordinates
    double x,y;

    //Input the x coordinate
    cout << "Enter x value : ";
    cin >> x;
    //Input the y coordinate
    cout << "Enter y value : ";
    cin >> y;

    //Different output based on the point location using conditional statements
    //when the point is (0,0)
    if (x == 0 && y == 0){
        cout << "This point is located at the origin."<<endl;
    }
    //when the point is(0,+/-)
    else if (x == 0 && !y == 0 ){
        cout << "This point is located on the y-axis"<<endl;
    }
    //when the point is(+/-,0)
    else if (!x == 0 && y == 0 ){
        cout << "This point is located on the x-axis"<<endl;
    }
    //when the point is(+,+)
    else if (x > 0 && y > 0){
        cout << "This point is located in quadrant 1"<<endl;
    }
    //when the point is(-,+)
    else if (x <0 && y> 0){
        cout << "This point is located in quadrant 2"<<endl;
    }
    //when the point is(-,-)
    else if (x <0 && y <0){
        cout << "This point is located in quadrant 3"<<endl;
    }
    //when the point is(+,-)
    else if (x > 0 && y < 0){
        cout << "This point is located in quadrant 4"<<endl;
    }
    else{
        cout <<"Please input the valid number for each point"<<endl;
    }
    return 0;

}
