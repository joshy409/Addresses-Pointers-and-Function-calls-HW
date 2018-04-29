#include <iostream>
#include <iomanip>
using namespace std;

void ftoC(double* fahrenheit);

int main()
{
	// this is an array of fahrenheit temperature readings
	double measurements[] = { 98.3, 12.3, 58.3, 29.0, 35.6, 78.6, 58.4, 58.2 };

	// this iterates through each element of the array
	for (size_t i = 0; i < 8; ++i)
	{
		double* pmeasurement = &(measurements[i]);

		//call function to standardize
		ftoC(pmeasurement);
		//print out the stadardized reading
		cout << setprecision(3) << measurements[i] << "¨¬c" << endl;
	}
}

void ftoC(double* fahrenheit)
{
	//C = (F-32)/1.8
	*fahrenheit = (*fahrenheit - 32) / 1.8;
}
