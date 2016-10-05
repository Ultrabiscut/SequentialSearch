#include <iostream>
using namespace std;

int main()
{
	//declare variables
	int iNum;
	int iSearch;

	int ourArray[10] = {47, 68, 25, 37, 404, 1, 2, 117, 8, 101};

	//ask the user for a number
	cout << "Enter a number: ";
	cin >> iNum;

	//loop throught the array
	for (int x = 0; x < 9; x++)
	{
		//if u find the number return current element
		if (iNum == ourArray[x])
		{
			iSearch = x; //store into secret variable

			//output "Found at index: "
			cout << "Found at index: " << iSearch << endl;
		}

	}
	
	return 0;
}