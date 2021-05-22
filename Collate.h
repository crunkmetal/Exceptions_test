#pragma once
#include <string>

using namespace std;

class Collate
{
public:
	// string variable used to store value of user input
	string textToAnalyze;
	// integer variable used to store the number of vowels found in the analyzed statement
	int vowels{};
	// integer variable used to store the number of consonants found in the analyzed statement
	int consonants{};
	// integer variable used to store the number of digits found in the analyzed statement
	int digits{};
	// integer variable used to store the number of spaces found in the analyzed statement
	int spaces{};
	// integer variable used to store the length/size of the analyzed statement
	int lengthOfStringSubmittedForAnalysis{};
	// integer variable used to store the number of unknown characters in the analyzed statement
	int unknownCharacters{};
	// integer variable used to verify the total number of characters in string is equal to the sum of it's constituent components
	int checkSum{};
	

	// method to analyze
	string analyze(string textToAnalyze);
	
	
};

