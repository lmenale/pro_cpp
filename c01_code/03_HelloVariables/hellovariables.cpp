// NOTE: Most compilers will issue a warning or an error
// when code is using uninitialized variables. Some compilers
// will generate code that will report an error at run time.

#include <iostream>

using namespace std;

int main()
{
	int uninitializedInt;
	int initializedInt = 7;

	cout << uninitializedInt << " is a random value\n";
	cout << initializedInt << " was assigned an initial value\n";

	return 0;
}
