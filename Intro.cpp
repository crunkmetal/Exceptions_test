

 // preprocessor directives
#include "Intro.h"
#include "Pausing.h"
#include <iostream>

using namespace std;
// constructors
Pausing onesec;
Pausing fivemil;
// function to introduce the app with sugar
// displays an 'animated graphic'
void Intro::splashscreen()
{
	// declare variable for do while loop iteration
	int j = 0;
	// using a do/while loop for three iterations
	do
	{
		// using a for loop to display fourteen symbols vertically
		for (int i = 0; i < 14; i++)
		{
			cout << "[]\n";
			fivemil.pause_10m();
		}
		j++;
		system("CLS");
	} while (j < 4);
}
// function to introduce the app
void Intro::about()
{
	// using a for loop to display fourteen symbols vertically, once and add welcome msg centered vertically
	for (int k = 0; k < 14; k++)
	{
		if (k == 7)
		{
			cout << "[]\tWelcome to the CIA code Hunter Program\n";
		}
		cout << "[]\n";
		fivemil.pause_10m();
	}
	cout << "\n\n";

}

