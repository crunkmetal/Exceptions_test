#include "Collate.h"
#include <iostream>

using namespace std;

string Collate::analyze(string textToAnalyze)
{
	// for loop that iterates thru each char in user input in string 'textToAnalyze'
	for (int i = 0; i < textToAnalyze.length(); ++i)
	{
		char E = textToAnalyze[i];

		 // if statement that looks for vowels( both upper and lowercase )
		if (E == 'a' || E == 'e' || E == 'i' || E == 'o' || E == 'u' || E == 'A' ||
			E == 'E' || E == 'I' || E == 'O' || E == 'U')
		{
			// for each char in string that is equal to a char listed above
			// (a,e,i,o,u,A,E,I,O,U) increase the 'vowel' counter by one.
			++vowels;
		}
		// if statement looking for consonants
		else if ((textToAnalyze[i] >= 'b' && textToAnalyze[i] <= 'z') || (textToAnalyze[i] >= 'B' && textToAnalyze[i] <= 'Z'))
		{
			// for each char in string that is equal to a char that is not a vowel increase the 'consonant' counter by one.
			++consonants;
		}
		// after searching for vowels and consonants, search for numbers 0-9
		else if (textToAnalyze[i] >= '0' && textToAnalyze[i] <= '9')
		{
			// for each char in string that is equal to the numbers 0-9, increase the 'digit' counter by one.
			++digits;
		}
		// after searching for numbers, search for spaces
		else if (textToAnalyze[i] == ' ' || textToAnalyze[i] == '.')
		{
			// for each char in string that is equal to a 'space', increase the 'spaces' counter by one.
			++spaces;
		}
		// after searching for spaces, search for any characters that have not been searched for
		// that have not been categorized
		else
		{
			// for each char in string that has not been picked off with previous code in
			// if statement, increase the 'unknownCharacters' counter by one.
			++unknownCharacters;
		}
	}


	// defining int variable lengthOf... as equal to the length of the user input variable 'textToAnalyze'
	lengthOfStringSubmittedForAnalysis = textToAnalyze.length();
	// defining int variable checkSum as equal to the sum of the values of variables listed after '=' sign
	checkSum = unknownCharacters + vowels + consonants + digits + spaces;

	// print the following information to console
	cout << "\nVowels: " << vowels << endl;
	cout << "Consonants: " << consonants << endl;
	cout << "Digits: " << digits << endl;
	cout << "White spaces: " << spaces << endl;
	cout << "Length of string submitted for analysis: " << lengthOfStringSubmittedForAnalysis << endl;
	cout << "Number of characters algorithm could not identify: " << unknownCharacters << endl;
	cout << "Checksum: " << checkSum << endl;

	// if statement used to verify components combined value is equal to value of user input string
	if (checkSum == lengthOfStringSubmittedForAnalysis)
	{
		// if the sums are equal, print to console, this
		cout << "\nThis program self checking has found this analysis to be valid.\n" << endl;
	}
	// if values of checkSum is not equal to combined value of components in user input string, do this
	else
	{
		// print this to console
		cout << "\nWARNING! *** This program self checking has found this analysis to be invalid! Do not use this data!\n" << endl;
	}

	// 'pause' temporarily halts the program, until user hits a key
	system("pause");
	system("CLS");
	// reset variable values back to zero
	vowels = 0;
	consonants = 0;
	digits = 0;
	spaces = 0;
	lengthOfStringSubmittedForAnalysis = 0;
	unknownCharacters = 0;
	checkSum = 0;
	
	return textToAnalyze;
}
