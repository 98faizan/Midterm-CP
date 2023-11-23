#include<iostream>
using namespace std;
int main()
{
	int salary,years;
	char rating;

	float newsalary, increament = 1.05, bonus = 1.02;
	cout << "Enter the current salary of employee:";
	cin >> salary;
	cout << "Number of years employee is working:";
		cin >> years;
	for (int i = 1; i <= years; i++)
	{
		salary = salary * increament;
	}
	cout << "Increamented Salary: " << salary;
	cout << "\nPerfomance of the Employee in the following " << years << "years(A,B,C):";
	cin >> rating;
	if (rating == 'A')
	{
		newsalary = salary * bonus;

		cout << "\nThe Salary of Employee is: " << newsalary << endl;
	}
	else
	{
		cout << "Invalid Statement!";
	}
	return 0;

}