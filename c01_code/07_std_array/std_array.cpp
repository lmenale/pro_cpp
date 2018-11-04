#include <iostream>
#include <array>

using namespace std;

int main()
{
	array<int, 3> arr = { 9, 8, 7 };
	cout << "Array size = " << arr.size() << "\n";
	cout << "2nd element = " << arr[1] << "\n";

	return 0;
}
