#include<iostream>
#include<cmath>
#include<string>

using namespace std;

// #11
enum enPassedOrFalie{Passed = 1 , Failed = 2};

void Read3Marks(int& Mark1, int& Mark2, int& Mark3 )
{
	cout << "Enter mark 1\n";
	cin >> Mark1;

	cout << "Enter mark 2\n";
	cin >> Mark2;

	cout << "Enter mark 3\n";
	cin >> Mark3;
}

int Sum3Marks(int Mark1 , int Mark2 , int Mark3)
{

	return Mark1 + Mark2 + Mark3;

}

int Calculate3MarksAvrage(int Mark1, int Mark2, int Mark3)
{
	return (float)Sum3Marks(Mark1, Mark2, Mark3) / 3;
}

enPassedOrFalie CheckPassedOrFailed(float Avg)
{
	if (Avg < 50)

		return enPassedOrFalie::Failed;
	else
		return enPassedOrFalie::Passed;
	
}

void Print3MarksResult(float Avrage)
{
	cout << " Your avrage is :" << Avrage << "\n";

	if (CheckPassedOrFailed(Avrage) == enPassedOrFalie::Failed)

		cout << " You failed\n";
	else

		cout << " You Passed\n";
	
}

// #12
void Read2Numbers(int& Number1 , int& Number2)
{
	cout << "Please enter number 1\n";
	cin >> Number1;

	cout << "Please enter number 2\n";
	cin >> Number2;
}

int MaxOf2Numbers(int Number1, int Number2)
{
	if (Number1 > Number2)

		return Number1;
	else
		return Number2;
	
}

void PrintMaxOf2Numbers(int Number)
{
	cout << "The Max number is " << Number << "\n";
}

// #13
void Read3Numbers(int& A , int& B , int& C)
{
	cout << "Please enter number1\n";
	cin >> A;

	cout << "Please enter number2\n";
	cin >> B;

	cout << "Please enter number3\n";
	cin >> C;
}

int GetMaxOf3Numbers(int A, int B, int C)
{
	if (A > B)
		if (A > C)
			return A;
		else
			return C;
	else
		if (B > C)
			return B;
		else
			return C;
		
}

void PrintMaxOf3Numbers(int Max)
{
	cout << "Max number is " << Max << "\n";
}

// #14
void Read2NumbersToSwap(int& A, int& B)
{
	cout << "Enter number 1\n";
	cin >> A;

	cout << "Enter number 2\n";
	cin >> B;
}

void SwapBetweenTwoNumbers(int& A, int& B)
{
	int Temp;

	Temp = A;
	A = B;
	B = Temp;
}

void Print2numbers(int A , int B)
{
	cout << "\nNumber 1 = " << A;

	cout << "\nNumber 2 = " << B << "\n";
}

// #14
void ReadRectangleWidthAndHeight(int& A, int& B)
{
	cout << "Enter width\n";
	cin >> A;
	
	cout << "Enter Hieght\n";
	cin >> B;

}

int CalculateRectangleArea(int A , int B)
{
	return A * B;
}

void PrintRectangleArea(int Area)
{
	cout << "\nRectangle Area = " << Area << "\n";
}


int main()
{

	// #11
	/*int Mark1, Mark2, Mark3;

	Read3Marks(Mark1 , Mark2 , Mark3);
	Print3MarksResult(Calculate3MarksAvrage(Mark1, Mark2, Mark3));*/


	// #12
	/*int Number1, Number2;

	Read2Numbers(Number1, Number2);
	PrintMaxOf2Numbers(MaxOf2Numbers(Number1, Number2));*/

	// #13
	/*int A, B, C;

	Read3Numbers(A , B , C);
	PrintMaxOf3Numbers(GetMaxOf3Numbers(A , B , C));*/

	// #14
	/*int Number1, Number2;
	Read2NumbersToSwap(Number1 , Number2);

	Print2numbers(Number1 ,Number2);
	SwapBetweenTwoNumbers(Number1 , Number2);
	Print2numbers(Number1 , Number2);*/

	// #15
	int Width, Hieght;

	ReadRectangleWidthAndHeight(Width, Hieght);

	PrintRectangleArea(CalculateRectangleArea(Width , Hieght));


	return 0;
}


