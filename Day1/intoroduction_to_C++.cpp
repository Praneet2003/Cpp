// #Introduction to c++
// *C++ is an Iterative, objent oriented & generic programming language.
// *C++ is used this make desktop applications, games, semote deske eth

// # features of C++;
// 1: simple.
// 2: fast. (faster than java)
// 3: portable (on different system at a time) 
// 4: Object oriented programming language.
// 5: Compiler based.
// 6: more secure.
// 7: Platform dependent. (A languge Said to be platform dependent, whenever to program is executed on the same system.)
// 8: syntax based language. 
// 9: Case sensitive language.
//10: Pointers
//11: Rich library.

//C++ compiler operation :- 
// source Code --------> pre-processor -----------> Compiler -----------> Linker ----------> Machine Code(Executable).

//Pre-Processor:-
// Handels a line of code, which begins with'#' character which is called as directive of pre-processor.
// It doesn't Change any content of source code file to be executed but creates a temprorary file.(copies content to the header file)
//There are two common directives:-
//1:) #include:-
//The preprocessor encounters the #include directive then, it opens the header file and copies the content to the temproray file.
// <name>  ------> Part of the Program
//eg:- #include<iostream>
//"name.h" => part of the program
//Eg:- #include"test.h"
//2:) #define :-
//It defines a programming device called as macro
// macro is a label defined in the source code that is replced by its value by the pre-processor before compilation.
//Eg:- #define pi 3.14
//
// Compiling:- 
//Pre-processor process each souirce code file at a time and produces an object file.'
//test.cpp(source file) ------> compile --------> test 0(object file)
//
//Linker:-
// liker takes all object file along with the library code and makes a completly executable file(<filename>.exe)
//
//Comments:-
//Short Comment:- //for single line comment
//Long comment:- /*for a block of code(multiple lines)*/