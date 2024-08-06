#include<iostream>
#include<fstream>
using namespace std;

/*
 -fstream helps to work with files
 -ofstream creats and write the file
 -ifstream reads the file
*/

int main(){
     //Creating and open a text file
     ofstream myFile("myFile.txt");

     //write to the file
     myFile << "This is file created using fstream!" << endl;

    //close the file
    myFile.close();

    //---------------------------------

    // Create a text string, which is used to output the text file
    string myText;

    // Read from the text file
    ifstream MyReadFile("myFile.txt");

    // Use a while loop together with the getline() function to read the file line by line
    while(getline(MyReadFile, myText)){  //Till all the content isn't copied from MyReadFile in myText, reamin building
        cout << myText; //and output this
    }

    // Close the file
    MyReadFile.close();
    return 0;
}