//File Handling:-
// The fstream library allows us to work with with files...
// Three Classes included in the fstream library which are used to create ,write or read files.....
//|     Class           |              uses                    |
//|  1:)ofstream        | Creates and writes to file.          |
//|  2:)ifstream        | Reads from a file.                   |
//|  3:)fstream         | the combination of (ofstream) and    |
//|                     |(ifstream), creates,read and write to |
//|                     | files.                               |
// Writing into files:-
// To create a file use either ofstream or ifstream class and specify the name of the file..
// To write to a file, use the insertion operator "<<"..
//Eg:-
#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream Myfile("filename.txt");//Creates and opens file.
    //write into the file....
    Myfile <<"Files can be tricky,but it is fun enough!.\n";
    //Close a file.
    Myfile.close();
    return 0;
}
//Read From a file:-
// To read from a file, use either ifstream or ofstream class, and name of that file.
//Note:-
// We also use a while loop with the getline() function (which belong to the ifstream class) to read 
// the file line by line and to print the content of file.
#include<fstream>
int main(){
    string myText;
    ifstream myReadfile("filename.txt");//Read from text file.
    //use a while loop together with the getline() function to read the file line by line.
    while (getline (myReadfile,myText)){
        cout<< "MyText";//Output from the text file.
    }
    return 0;
}
