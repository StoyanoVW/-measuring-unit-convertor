#include<iostream>
#include<string>
#include<iomanip>
#include<cmath>



using namespace std;

double number;
double answer;
char optionA, optionL, optionW, optionV, optionAr, quit;

void printIntroduction();
void mainMenu();
void printQuit();
void printGoodBye();
void lengthMenu();
void areaMenu();
void volumeMenu();
void weightMenu();
void printAnswer();
// Lengths
void inchesToCentimeters();
void yardsToMeters();
void milesToKilometers();
// Weights
void ouncesToGrams();
void poundsToKilograms();
void tonsToKilograms();
// Volumes
void pintsToLiters();
void quartsToLiters();
void gallonsToLiters();
// Areas
void sqInchesToSqMillimeters();
void sqFeetToSqMeters();
void acresToSqMeters();


double enterData();
void printAnswer(double, string, double, string);

int main()
{
	printIntroduction();
	mainMenu();
	printQuit();
	printGoodBye();

	return(0);

}

void printIntroduction()
{
	cout << "====================== WELCOME TO MY CALCULUS PROGRAM ======================" << endl << endl;
cout << "My name is Denis and and i will present you my calculation program!;D" << endl << endl;
}

void mainMenu()
{
	cout << "Main Menu" << endl;
	cout << "\tL = Length" << endl;
	cout << "\tW = Weight" << endl;
	cout << "\tV = Volume" << endl;
	cout << "\tA = Area" << endl;
	cout << "\t\tChoose an option: ";

	cin >> optionA;
	if (optionA == 'L'|| optionA == 'l')
	{
	lengthMenu();
	}
	else if (optionA == 'W'|| optionA == 'w')
	{
	weightMenu();
	}
	else if (optionA == 'V'|| optionA == 'v')
	{
	volumeMenu();
	}
	else if (optionA == 'A'|| optionA == 'a')
	{
	areaMenu();
	}
}

void lengthMenu()
{
	cout << "Lengths" << endl;
	cout << "\tI = Inches to centimeters" << endl;
	cout << "\tY = Yards to meters" << endl;
	cout << "\tM = Miles to Kilometers" << endl;
	cout << "\t\tChoose an option: ";
	cin >> optionL;

	if (optionL == 'I'|| optionL == 'i')
	{
		inchesToCentimeters();
	}
	else if (optionL == 'Y'|| optionL == 'y')
	{
		yardsToMeters();

	}
	else if (optionL == 'M'|| optionL == 'm')

	{
		milesToKilometers();
	}

}

void weightMenu()
{
	cout << "Weights" << endl;
	cout << "\tO = Ounces to grams" << endl;
	cout << "\tP = Pounds to Kilograms" << endl;
	cout << "\tT = Tons to Kilograms" << endl;
	cout << "\t\tChoose an option: ";
	cin >> optionW;

	if (optionW == 'O' || optionW == 'o')
	{
	ouncesToGrams();
	}
	else if (optionW == 'P' || optionW == 'p')
	{
	poundsToKilograms();

	}
	else if (optionW == 'T' || optionW == 't')

	{
	tonsToKilograms();
	}
}
void printAnswer()
{
}
void volumeMenu()
{
	cout << "Volumes" << endl;
	cout << "\tP = Milliliters to liters" << endl;
	cout << "\tQ = Liters to Gallons" << endl;
	cout << "\tG = Gallons to liters" << endl;
	cout << "\t\tChoose an option: ";
	cin >> optionV;
	if (optionV == 'P' || optionV == 'p')
	{
	pintsToLiters();
	}
	else if (optionV == 'Q' || optionV == 'q')
	{
	quartsToLiters();

	}
	else if (optionV == 'G' || optionV == 'g')

	{
	gallonsToLiters();
	}
}
void areaMenu()
{
	cout << "Areas" << endl;
	cout << "\tI = Square inches to square millimeters" << endl;
	cout << "\tF = Square meters to Acres" << endl;
	cout << "\tA = Acres to square meters" << endl;
	cout << "\t\tChoose an option: ";
	cin >> optionAr;

	if (optionAr == 'I' || optionAr == 'i')
	{
		sqInchesToSqMillimeters();
	}
	else if (optionAr == 'F' || optionAr == 'f')
	{
		sqFeetToSqMeters();

	}
	else if (optionAr == 'A' || optionAr == 'a')

	{
		acresToSqMeters();
	}
}

void inchesToCentimeters()
{
	number = enterData();
	answer = (number * 2.54);
	printAnswer(number, " Inches ", answer, " Centimeters ");
	mainMenu();
}

void yardsToMeters()
{
	number = enterData();
	answer = (number * 0.9144);
	printAnswer(number, " Yards ", answer, " Meters ");
	mainMenu();
}

void milesToKilometers()
{
	number = enterData();
	answer = (number * 1.609344);
	printAnswer(number, " Miles ", answer, " Kilometers ");
	mainMenu();
}

//
void ouncesToGrams()
{
	number = enterData();
	answer = (number * 28.349523);
	printAnswer(number, " Ounces ", answer, " Grams ");
	mainMenu();
}

void poundsToKilograms()
{
	number = enterData();
	answer = (number * 0.453592);
	printAnswer(number, " Pounds ", answer, " Kilograms ");
	mainMenu();
}

void tonsToKilograms()
{
	number = enterData();
	answer = (number * 907.18474);
	printAnswer(number, " Tons ", answer, " Kilograms ");
	mainMenu();
}

void pintsToLiters()
{
	number = enterData();
	answer = (number / 1000);
	printAnswer(number, " Milliliters ", answer, " Liters ");
	mainMenu();
}

void quartsToLiters()
{
	number = enterData();
	answer = (number / 3.785306);
	printAnswer(number, " Liters ", answer, " Gallons ");
	mainMenu();
}

void gallonsToLiters()
{
	number = enterData();
	answer = (number * 3.785306);
	printAnswer(number, " Gallons ", answer, " Liters ");
	mainMenu();
}

void sqInchesToSqMillimeters()
{
	number = enterData();
	answer = (number * 645.16);
	printAnswer(number, " Square Inches ", answer, " Square Millimeters ");
	mainMenu();
}

void sqFeetToSqMeters()
{
	number = enterData();
	answer = (number /(4.04688 * pow(10,3)));
	printAnswer(number, " Square Meters ", answer, " Acres ");
	mainMenu();
}

void acresToSqMeters()
{
	number = enterData();
	answer = (number * (4.04688 * pow(10,3)));
	printAnswer(number, " Acres ", answer, " Square Meters ");
	mainMenu();
}

double enterData()
{
	number;
	cout << "\tEnter your value: ";
	cin >> number;
	return number;
}

void printAnswer(double cTemp, string sTemp, double dTemp, string rTemp)
{
	cout << endl;
	cout << cTemp << sTemp << "= " << dTemp << rTemp << endl;
	printQuit();
	cout << endl;
}

void printQuit()
{
	cout << "Would you like to continue? y/n: ";
	cin >> quit;
	cout << endl;
	if (quit == 'N' || quit == 'n')
	{
	void printGoodBye();
	}
	if (quit == 'Y' || quit == 'y')
	{
	void mainMenu();
	}

}

void printGoodBye()
{
	cout << "\n\nGood bye to next time and thank you for your attention!\n\n" << endl;
}
