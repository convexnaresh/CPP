/*
 * Comment section.
 * ColorFormat.cpp
 *
 *  Created on: Sep 1, 2022
 *      Author: naresh.adhikari

//Cheat sheet Custom Color
 * https://opensource.com/article/21/11/c-stdcout-cheat-sheet
	https://misc.flogisoft.com/bash/tip_colors_and_formatting
	https://stackoverflow.com/questions/5947742/how-to-change-the-output-color-of-echo-in-linux

//Install ANSI Console
  The easiest way is from the Eclipse Marketplace.
  Help --> Eclipse Marketplace --> search for ANSI and install.

Color id	Color	Color id	Color
1	Blue	9	Light Blue
2	Green	0	Black
3	Aqua	A	Light Green
4	Red	B	Light Aqua
5	Purple	C	Light Red
6	Yellow	D	Light Purple
7	White	E	Light Yellow
8	Gray	F	Bright White

*/
// no semi-colon with include
#include "ColorFormat"

#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <windows.h>

using namespace std;

int justifyText(){
	cout<< setfill('.') << setw(50) << "." << endl;

    cout.setf(ios::right, ios::adjustfield);
    cout.width(50);
    cout << "This text is right justified" << endl;
    cout.width(50);
    cout << "This text is left justified again" << endl;

    cout << "\n-------------------------------------------------------" << endl;

    std::cout << right << setfill('.') << setw(30) << std::dec << 500 << " pcs" << endl;
    cout << right << setfill('.') << setw(30) << 3000 << " pcs" << endl;
    cout << right << setfill('.') << setw(30) << 24500 << " pcs" << endl;

    cout << "\n-------------------------------------------------------" << endl;

    std::cout << right << setfill('.') << setw(30) << std::hex << 500 << " pcs" << endl;
    cout << right << setfill('.') << setw(30) << 3000 << " pcs" << endl;
    cout << right << setfill('.') << setw(30) << 24500 << " pcs" << endl;

    cout<<endl;

    cout<<"\n-----------------------------------------------------\n";
    //both
    cout << left << setfill('.') << setw(20) << "Flour"
    		<< right << setfill('.') << setw(20) << 0.7 << " Kg" << endl;
    cout << left << setfill('.') << setw(20) << "Sugar"
    		<< right << setfill('.') << setw(20) << 0.9 << " Kg" << endl;
    cout << left << setfill('.') << setw(20) << "Sunflower Oil"
    		<< right << setfill('.') << setw(20) << 0.7 << " Kg" << endl;

    cout<<endl;
        cout<<"\n-----------------------------------------------------\n";
    return 0;
}

int paddingZeros(){

    cout << setfill('0') << setw(7) << 3 << endl;
    cout << setfill('0') << setw(7) << 35 << endl;
    cout << setfill('0') << setw(7) << 357 << endl;
    cout << setfill('0') << setw(7) << 3579 << endl;
    return 0;
}

int numberFormatting() {

    // Print any message
    cout << "U for us!" << endl;;
    cout << "Decimal: " << 123 << endl;

    cout.setf(ios::hex, ios::basefield);
    cout << "Hexadecimal: " << 123 << endl;

    cout << "Octal: " << resetiosflags(ios::basefield) <<  setiosflags(ios::oct) << 123 << endl;
    cout << "Dec: " << resetiosflags(ios::basefield) <<  setiosflags(ios::dec) << 123 << endl;



    //Format Floating Point Output In C++


    cout << "\n\n";
    //
    cout.setf(ios::fixed, ios::floatfield);
    cout.precision(6);
    cout << "Modified precision: " << 1234.123456789012345 << endl;

    cout.precision(6);
    cout.setf(ios::scientific, ios::floatfield);
    cout << "Modified precision & scientific format: " << 1234.123456789012345 << endl;


    /* back to default */
    cout.setf(ios::fixed, ios::floatfield);
    cout.precision(cout.precision());

    cout << "Default precision & fixed format:  " << 1234.123456789012345 << endl;


    cout << "\n\n";

    float floatA = 3.14159;
    float floatB = 12.3456;
    // Standard C formatting method
    printf("floatA = %5.2f\n", floatA);
    printf("floatB = %5.2f\n", floatB);


    std::cout << "==============" << '\n';  // separator
    // Preferred C++ formatting method
    std::cout << std::fixed             // fix the number of decimal digits
              << std::setprecision(2);  // to 2
    std::cout << "floatA = " << std::setw(5) << floatA << '\n';
    std::cout << "floatB = " << std::setw(5) << floatB << std::endl;
    cout<<"\n-----------------------------------------------------\n";
	return 0;
}


int computingWNumbers(){
	cout << "(10.5 + 2* 3)/(45 - 3.5) =";
	cout << (10.5 + 2* 3)/(45 - 3.5) << endl;

}
