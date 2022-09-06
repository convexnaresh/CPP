//============================================================================
// Name        : HelloCpp.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style

//Change Run and Debug Configuration
	//On eclipse, Run > Run Configuration..
	//On eclipse, Run > Debug Configuration..

//Building project
	//On eclipse, Project > Build Project

//Cleaning project
	//On eclipse, Project > Clean All

//Install gdb
	//Open terminal (command prompt) and change directory/folder to C:\MinGW\bin and run the command below
	//mingw-get.exe install gdb

//View Assembly Code
	//On eclipse, Window > Show View > Other > Disassembly
	//On eclipse, debug the project after building the project.

	//Open terminal, go to the directory of this project, go inside Debug dir
	// Use command objdump -d HelloCpp.o #to view assembly code.

//View Machine Code
	//Build the project --> Double Click Binaries/HelloCpp.exe


//Compiling the project from command line
	//Make Obj files.
		//g++ -O3 -Wall -c -fmessage-length=0 -o "src\\HelloCpp.o" "..\\src\\HelloCpp.cpp"

	//If you are using the GNU assembler, compiling with -g -Wa,-alh will give intermixed source and assembly on stdout (-Wa asks compiler driver to pass options to assembler, -al turns on assembly listing, and -ah adds "high-level source" listing):

		//g++ -g -c -Wa,-alh foo.cc

	//Make executables
		//g++ -o HelloCpp.exe "src\\HelloCpp.o"

	//Run an executable
		//HelloCpp.exe #OR .\HelloCpp.exe

	//Video Lecture link by author
		//https://yongdanielliang.github.io/CppVideos.html

//============================================================================

// no semi-colon with include
#include <iostream>
#include <iomanip>
//#include <stdlib.h>
//#include <windows.h>
//#include "ColorFormat"

using namespace std;

int justifyText(); //declaring functions from another file.
int paddingZeros();
int numberFormatting();
int computingWNumbers();


int textStyling(){

	//std::cout << setprecision(3) << 2.71828;
	//std::cout << setbase(16) << 32;

	//red,bold,italizcs,bg
	cout << "\n42. \x1b[38;5;80;1;40m \t\tMy Text \t\t \x1b[0m" << endl;

    cout<<"\n43a. \x1b[31;1;9;3;43m Yellow Background   \x1b[0m";
    cout<<"\n43b. \x1b[31;2;3;5;9;46m Red Bold Text     \x1b[0m";
    cout<<"\n43c. \x1b[1;31m Bold, Red Text     		\x1b[0m";
    cout<<"\n44. \x1b[44m Blue Background       		\x1b[0m";
    cout<<"\n45. \x1b[45m Pink Background       		\x1b[0m";
    cout<<"\n46. \x1b[46m Light Blue Background 		\x1b[0m";
    cout<<"\n-----------------------------------------------------";
	return 0;
}

int textStylingWVars(){

	//Creating some string constants - shortcuts - combining text format modes
    const string RESET = "\e[0m";   //Format Mode 0
    const string BOLD_HIGHLIGHT  = "\e[1;7m";   //Format Modes 1 and 7
    const string COMPLEX_FORMAT_1 = "\x1b[5;1;3;35;44m";  //Format Modes 5, 1, 2, 35 and 44
    const string COMPLEX_FORMAT_2 = "\x1b[4;30;42m";      //Format Modes 4, 30 and 42
    const string COMPLEX_FORMAT_3 = "\x1b[5;1m";      //Format Modes 5 and 1

    //Examples using shortcuts
    cout<<"\n\n\t** Program has been "<<BOLD_HIGHLIGHT<<"Terminated"<<RESET<<" **";
    cout<<"\n\n\t"<<COMPLEX_FORMAT_1<<"** Program has been Terminated **"<<RESET;
    cout<<"\n\n\t"<<COMPLEX_FORMAT_2<<"** Program has been Terminated"<<COMPLEX_FORMAT_3<<" **"<<RESET;

    cout<<endl;
    cout<<"\n-----------------------------------------------------\n";
	return 0;
}

int main() {

	cout << "Hello World!" << endl;

	textStyling();
	textStylingWVars();
	paddingZeros();
	justifyText();
	numberFormatting();
	computingWNumbers();

	return 0;
}
