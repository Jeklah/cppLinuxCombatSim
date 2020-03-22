#pragma once
#include <string>
#include <ctime>
#include <cmath>

// Spacing formatting

extern const std::string vertSpcPadding = "               ";
extern const std::string horiSpcPadding = "                                                  ";
extern const std::string header = "=======================================================================================================================";
extern const std::string welcomeBorder = "===================================================";
//random numbers for random stats for the character stats.
extern int getRand(int rangeMin, int rangeMax)
{
	return (int)floor(rand() / (RAND_MAX + 1.0) * ((rangeMax - rangeMin) + 1) + rangeMin);
}

//the nice little function that prints out strings character by character.
void typeText(string text)
{
	for (size_t i = 0; i < text.size(); ++i)
	{
		cout << text[i] << flush;
		Sleep(50);

	}
};
