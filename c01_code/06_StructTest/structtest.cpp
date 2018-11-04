#include <iostream>
#include "employeestruct.h"

using namespace std;

int main()
{
	// Create and populate an employee.
	Employee anEmployee;

	anEmployee.firstInitial = 'M';
	anEmployee.lastInitial = 'G';
	anEmployee.employeeNumber = 42;
	anEmployee.salary = 80000;

	// Output the values of an employee.
	cout << "Employee: " << anEmployee.firstInitial << 
							anEmployee.lastInitial << "\n";
	cout << "Number: " << anEmployee.employeeNumber << "\n";
	cout << "Salary: $" << anEmployee.salary << "\n";

	return 0;
}
