
 // preprocessor directives
#include "Pausing.h"
#include <chrono>	// library for time stuff
#include <iostream>
#include <thread>	// library for multithreading
#include <conio.h>	// library for _getch (char reading)

using namespace std;
// function to pause execution for 10ms
void Pausing::pause_10m()
{
	chrono::milliseconds dura(10);
	this_thread::sleep_for(chrono::milliseconds(dura));
}
// function to pause execution for 1sec
void Pausing::pause_1s()
{
	chrono::seconds duration(1);
	this_thread::sleep_for(duration);
}

// function to continue/end play
bool Pausing::quitApp()
{
	restart = false;
	// using a for loop to display fourteen symbols vertically, once 
	// and give info...
	for (int k = 0; k < 14; k++)
	{
		if (k == 7)
		{
			cout << "[]\tPress any key to continue...";
		}
		if (k == 8)
		{
			cout << "[]\tPress 'ESC' to quit.\n";
		}
		cout << "[]\n";
	}
	cout << "\n\n";

	char ch = 0;
	// assigning user input to variable 'ch'
	ch = _getch();
	// while user does not press ESC key, user picks a direction
	if ((ch = _getch()) != 27)
	{
		restart = true;
		system("CLS");
		
		return restart;
	}
	else
	{
		return restart;
	}
}