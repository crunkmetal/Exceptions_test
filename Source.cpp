// Bryan Jeremy
// CSC275 C/C++ programming II
// Assignment - Exceptions
// 19MAY21

/*
	- Write a program that demonstrates the try/catch exception handler blocks
		- a minimum of 4 different exceptions.
		- Include sufficient output to indicate the exception and the condition that caused it.
		- Use more than one catch type.

	- Print out a description of the program
		- and how to use for the user when it starts. 

	- Over comment your code!

	- The program should do something in addition to demonstrating exceptions and should have a good UX.
 */

/*
	- intro
	- ask user to input msg
	- ask to encrypt msg
	- display encrypted msg
	- convert msg to binary
	- display binary
	- send binary (to file)
	- msg to user stating msg sent
	- pause, add msg to show msg recieved
	- output an encrypted binary msg
	- ask user to convert binary to text
	- display msg asking user to decrypt msg
	- output reply

	
 */

/* Encryption code from http://www.trytoprogram.com/cpp-examples/cplusplus-program-encrypt-decrypt-string/
	C++ program to encrypt and decrypt the string using Caesar Cypher Algorithm.

	//Simple C++ program to encrypt and decrypt a string

#include <iostream>
using namespace std;

int main()
{
   int i, x;
   char str[100];

   cout << "Please enter a string:\t";
   cin >> str;

   cout << "\nPlease choose following options:\n";
   cout << "1 = Encrypt the string.\n";
   cout << "2 = Decrypt the string.\n";
   cin >> x;

   //using switch case statements
   switch(x)
   {
      //first case for encrypting a string
      case 1:
         for(i = 0; (i < 100 && str[i] != '\0'); i++)
            str[i] = str[i] + 2; //the key for encryption is 3 that is added to ASCII value

         cout << "\nEncrypted string: " << str << endl;
         break;
		  //second case for decrypting a string
	  case 2:
		 for(i = 0; (i < 100 && str[i] != '\0'); i++)
		 str[i] = str[i] - 2; //the key for encryption is 3 that is subtracted to ASCII value

	  cout << "\nDecrypted string: " << str << endl;
	  break;

	  default:
		 cout << "\nInvalid Input !!!\n";
   }
   return 0;
}
 
 */

// preprocessor directives
#include <iostream>

// #include "Dao.h"
#include "Collate.h"
#include "Intro.h"	// introduction
#include "Pausing.h"



// using standard template library
using namespace std;




// main function is required for every C++ program, but only one
int main()
{
	// instantiating objects
	Intro info;
	Pausing quitter;
	Collate engage;	

	// generate a game loop (based on user input)
	do 
	{
		// display an intro screen
		info.splashscreen();
		// clear the screen
		system("CLS");
		
		// display more info
		info.about();
		cout << "\nPlease type in text to analyze:\t " << endl;
		// collect user input and assign it to variable in Collate class
		getline(cin, engage.textToAnalyze);
		// clear the screen
		system("CLS");
		
		cout << "You wrote '" << engage.textToAnalyze << "'.\n";
		// invoke method from Collate class to analyze user input
		engage.analyze(engage.textToAnalyze);

		// invoke method from Pausing class to quit/continue the program
		quitter.quitApp();
		// clear the screen
		system("CLS");


	} while (quitter.restart);	// game loop continues based on bool value of restart property in Pausing 
	// main requires an int value returned
	return 0;
}		// ************* end of main **************





