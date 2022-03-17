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
void lcsLength(string x, string y);
void printLcs();




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
void lcsLength(string x, string y) 
{

    //get the length of the strings
    int m = x.length();
    int n = y.length();

    //create two tables for the numbers and the arrows
    vector<vector<(m + 1)>> arrows;
    vector<vector<(n + 1)>> numbers;


    //make the first row and column filled with 0's
    for (int i = 1; i < m; i++)
    {
        numbers[i, 0] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        numbers[0, i] = 0;
    }


    //
    for (int i = 1; i < m; i++)
    {
        for (int j = 1; j < n)
        {
            if (x.charAt(i) == y.charAt(j))
            {
                //change the number
                numbers[i, j] = (numbers[(i - 1), (j - 1)] + 1);

                //assign the arrow
                arrows[i, j] = "diagonal (up-left)";
            }
            else if (numbers[i - 1, j] >= numbers[i, j - 1])
            {
                //set the number
                numbers[i, j] = numbers[(i - 1),j];

                //assign the arrow
                arrows[i, j] = "up";   
            }
            else
            {
                //set the number
                numbers[i, j] = numbers[i, (j - 1)];

                //assign the arrow
                arrows[i, j] = "left";
            }

        }
    }

}


