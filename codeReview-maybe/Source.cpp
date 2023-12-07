//#include <string>
//#include <iomanip>
//#include <iostream>
//#include <cmath>
//#include <vector>
//#include <fstream>
//#include <algorithm>
//
//
//#include<array>
//
//using namespace std;
//
////class Car //this is NEXT semester! 
////{
////	string model; 
////	int cost; 
////};
//
//int main()
//{
//	//vector<Car> listName;
//
//	vector<char> stringAlphabet =
//	{
//		'a',
//		'b',
//		'c',
//		'd',
//		'e',
//		'f',
//		'g',
//		'h',
//		'i',
//		'j',
//		'k',
//		'l',
//		'm',
//		'n',
//		'o',
//		'p',
//		'q',
//		'r',
//		's',
//		't',
//		'u',
//		'v',
//		'w',
//		'x',
//		'y',
//		'z'
//	};
//
//	for (int i = 0; i < stringAlphabet.size(); i++)
//	{
//		cout << stringAlphabet[i] << endl;
//	}
//
//	const int NUMBER_OF_ELEMENTS = 5;
//
//	//C-style array:
//	string favoriteThings[NUMBER_OF_ELEMENTS] =
//	{
//		"Raindrops on roses",
//		"Whiskers on kittens",
//		"Bright copper kettles",
//		"Warm woolen mittens",
//		"Brown paper packages tied up with strings"
//	};
//
//	cout << "\nThese are a few of my favorite things: " << endl;
//
//	for (int i = 0; i < NUMBER_OF_ELEMENTS; i++)
//	{
//		cout << favoriteThings[i] << endl;
//
//	}
//
//}


#include <string>
#include <iomanip>
#include <iostream>
#include <cmath>
#include <vector>
#include <fstream>
#include <algorithm>
#include <array>

using namespace std;

int main()
{

	string notesArray[] =
	{
		"A",
		"A#",
		"B",
		"C",
		"C#",
		"D",
		"D#",
		"E",
		"F",
		"F#",
		"G",
		"G#"
	};


	string triadsArray[12]; //uninitialized - to be filled in with loop below


	for (int i = 0; i < 12; i++)
	{
		string firstNote = notesArray[i % 12];
		string secondNote = notesArray[(i + 4)];
		string thirdNote = notesArray[(i + 7) % 12];


		triadsArray[i] = firstNote + "\t" + secondNote + "\t" + thirdNote;

		cout << triadsArray[i] << endl;
	}




}