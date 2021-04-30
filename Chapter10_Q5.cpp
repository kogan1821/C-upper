/*Chapter 10 Question 5
Programmer: Ilya Kogan
Course: CSC119-143 Introduction to Programming Spring 2021
04/29/2021
This program capitalizes the first letter after each period
*/
#include <iostream>
#include <cstring>
#include <cctype>


using namespace std;

void capitalize(char[]);//state my function

int main()
{
    int SIZE=100;//variable for size
    char sentence[SIZE];//state array

    cout << "Enter a sentence, and I will capitalize!" << endl;//ask user to enter a sentence
    cin.getline(sentence,SIZE);//get sentence

    capitalize(sentence);//call function



    return 0;
}
void capitalize(char sentence[]){
    int index=0;//make index0


    sentence[0] = toupper(sentence[0]);//make the first letter capitalize

    while(sentence[index]!='\0'){//this loops until program ends
        if(sentence[index]=='.'&&sentence[index]!='\0'){//if there is a period and its not the end of the program this will be useful
            sentence[index+2]=toupper(sentence[index+2]);//Capitalizes the first letter
        }

        cout << sentence[index];//makes it visible to user
        index++;
        }
}
