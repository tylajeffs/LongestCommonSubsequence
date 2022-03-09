// LongestCommonSubsequence.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <cstdlib>


using namespace std;


//global variables
vector<string> lines;
int numLines;




//methods
void lstLength(string x, string y);




int main(int argc, char** argv)
{

    //get the file from the command line
    string filename = argv[1];//"C:/users/config/Desktop/pokemon.txt";
    ifstream ifs;

    //open the file
    ifs.open(filename, ios::in);

    //some basic error-checking...
    if (!ifs)
    {
        cout << "Error opening file: " << filename << endl;
        return -1;
    }

    //get and store the first line of the file (first string)
    string firstString;
    getline(ifs, firstString);

    //get and store the second line of the file (second string)
    string secondString;
    getline(ifs, secondString);



    //close the scanner thingy
    ifs.close();






    



}


//method to find the longest common subsequence between 2 strings
void lstLength(string x, string y) 
{

}


