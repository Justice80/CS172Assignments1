/*CS172-1
Justice Martinez
HW#1 CS1 Review
*/

#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

void ex02();
void ex03();
void ex04();
void ex05();
int doubleValue(int x);
int add(int x, int y);
int addOne(int & x);
void showArray(int array1[], int sizeOfArray);
void isInArray(int array2[], int sizeOfArray1);

int main()
{
	srand(time(NULL));
	ex02();
	ex03();
	ex04();
	ex05();


	return 0;
}

void ex02()
{
	//EX01_02 a
	bool hasPassedTest = true;

	//EX01_02 b
	int x = rand() % 100;
	int y = rand() % 100;

	if (x > y)
		cout << "X is greater than Y\n";
	else
		cout << "X is not great than Y\n";

	//EX01_02 c
	int numberOfShares;
	cout << "Enter a whole number: ";
	cin >> numberOfShares;

	if (numberOfShares < 100)
		cout << "The vaule you entered is less than 100\n";
	else
		cout << "The vaule you entered is more than or equal to 100\n";

	//EX01_02 d
	int boxWidth, bookWidth;
	cout << "Enter the width of the box: ";
	cin >> boxWidth;
	cout << "Enter the width of the book: ";
	cin >> bookWidth;

	if (boxWidth % bookWidth == 0)
		cout << "The box width is evenly divisible by the book width\n";
	else
		cout << "The box width is not evenly divisible by the book width\n";

	//EX01_02 e
	int shelfLife, outsideTemp;

	cout << "What is the shelf life(in year) of this box of chocolates? ";
	cin >> shelfLife;
	cout << "What is the tempurature outside? ";
	cin >> outsideTemp;

	if (outsideTemp > 90)
		cout << "The shelf life is now " << shelfLife - 4 << " years \n";
	else
		cout << "The shelf life is now " << shelfLife << " years \n";

	return;
}

void ex03()
{
	//EX01_03 a
	double areaOfSquare, lengthOfSide;
	cout << "What is the area of the Square? ";
	cin >> areaOfSquare;
	lengthOfSide = sqrt(areaOfSquare);
	double diagonal = lengthOfSide*sqrt(2);
	cout << "The length of a side of the square is " << lengthOfSide << "\nThe diagonal of the square is " << diagonal << endl;

	//EX01_03 b
	char answer;
	cout << "Yes or No?(y/n) ";
	cin >> answer;
	if (answer == 'y')
		cout << "Yes\n";
	else if (answer == 'n')
		cout << "No\n";

	//EX01_03 c
	char tab = '\t';

	//EX01_03 d
	string mailingAddress;
	cout << "What is your mailing address? ";

	cin.ignore();
	getline(cin, mailingAddress);
	cout << "Your address is " << mailingAddress << endl;

	//EX01_03 e
	string empty;

	return;
}

void ex04() 
{
	//EX01_04 a
	int x;
	cout << "Enter a number between 1 and 10: ";
	cin >> x;
	while (x > 10 || x < 1) {
		cout << "Enter a number between 1 and 10: ";
		cin >> x;
	}

	//EX01_04 b
	int sum = 0;
	for (int a = 1; a <= x; a++) {
		sum += (a*a*a);
	}

	cout << "The sum of the cubes up to " << x << " = " << sum << endl;

	//EX01_04 c
	int temp = x;
	do {
		cout << "*";
		temp--;
	} while (temp != 0);
	cout << endl;

	//EX01_04 d
	for (int number = 1; number <= 40; number++) {
		if (number % 2 == 0)
			cout << number << " ";
	}
	cout << endl;

	//EX01_04 e
	cout << doubleValue(x) << endl;
	
	//EX01_04 f
	int intOne = rand() % 100;
	int intTwo = rand() % 100;
	cout << "The value of the values added together is " << add(intOne, intTwo) << endl;

	//EX01_04 g
	int referance = rand() % 100;
	cout << "The number is " << referance << endl;
	addOne(referance);
	cout << "The number is " << referance << endl;

	return;
}

void ex05() {
	//EX01_05 a
	const int arraySize = 5;
	int random[arraySize];
	for (int i = 0; i < arraySize; i++) {
		cout << "Enter a random number: ";
		cin >> random[i];
	}

	//EX01_05 b
	int sum = 0, product = 1;
	for (int s = 0; s < arraySize; s++) {
		sum += random[s];
	}
	cout << "The sum of your integers is " << sum << endl;

	for (int p = 0; p < arraySize; p++) {
		product *= random[p];
	}
	cout << "The product of your integers is " << product << endl;

	//EX01_05 c
	showArray(random, arraySize);
	
	//EX01_05 d
	isInArray(random, arraySize);
	
	return;
}

int doubleValue(int x) {
	int y = 2 * x;

	return y;
}

int add(int x, int y) {
	int z = x + y;
	
	return z;
}

int addOne(int & x) {
	x++;

	return x;
}

void showArray(int array1[], int sizeOfArray) {
	for (int a = 0; a < sizeOfArray; a++) {
		cout << array1[a] << " ";
	}
	cout << endl;

	return;
}

void isInArray(int array2[], int sizeOfArray1) {
	int ask;
	bool inArray;
	cout << "Pick a number to see if it is in the Array: ";
	cin >> ask;

	for (int n = 0; n < sizeOfArray1; n++) {
		if (ask == array2[n]) {
			inArray = true;
			cout << ask << " is in the array\n";

			return;
		}

		else {
			cout << ask << " is not in the array\n";

			return;
		}
	}
}