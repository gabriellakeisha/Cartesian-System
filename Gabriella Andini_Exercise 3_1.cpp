//============================================================================
// Name        : Exercise 3.1
// Author      : Gabriella Keisha Andini (40392749)
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
/*using number 1 code, make it terminated until string EXIT is inserted*/

#include <iostream> //directive. standard input/output library, which provides input/output operations (cout and cin)
#include <string>   //directive. The standard string library which provides string objects and related functions
using namespace std;//declares the `std` namespace, which contains standard C++ library functions and objects


int main (){
    //declare the variables for coordinates x,y and character to end the loop
    double x,y;
    string done;

    //loop variable conditional expression
    while (done != "EXIT") {

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

    //statement
    cout<<"Type any character to continue with other points or type 'EXIT' to stop the program:";
    cin>>done;

    }
    return 0;

}
