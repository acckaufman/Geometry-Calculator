//This program is a simple geometry calculator that can be used
//to calculate the area of various shapes.
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	const float PI = 3.14159;
	int choice;		//User's menu selection
	float area, radius, length, width, base, base1, base2, height;
	//Variables needed to calculate areas

	//Display the main menu for the user, and ask them to make a selection
	cout << "Geometry Calculator\n\n"
		<< "\t1. Calculate the Area of a Circle\n"
		<< "\t2. Calculate the Area of a Rectangle\n"
		<< "\t3. Calculate the Area of a Triangle\n"
		<< "\t4. Calculate the Area of a Trapezoid\n"
		<< "\t5. Calculate the Surface Area of a Sphere\n"
		<< "\t6. Exit\n\n";
	cout << "Enter your choice: ";
	cin >> choice;
	cin.ignore(20,'\n');	//Ensures that any additional input beyond the first digit
							//does not bleed over into subsequent variable inputs.

	//Set the formatting for all output.
	cout << fixed << showpoint << setprecision(2);

	switch (choice)
	{
	case 1:
		//The user wants to calculate the area of a circle.
		cout << endl << "Calculate the Area of a Circle\n\n";
		//Get the radius of the circle from the user.
		cout << "What is the circle's radius in inches? ";
		cin >> radius;
		//Check to make sure that the user did not input a negative number.
		if (radius < 0)
		{
			cout << "Error: invalid input.\n"
				<< "You must enter a positive number for the radius.\n"
				<< "Please run the program again.\n";
		}
		else
		{ 
			//Calculate the area of the circle.
			area = PI * pow(radius, 2);
			//Display the area of the circle.
			cout << "The area of the circle is " << area << " square inches.\n";
		}

		break;

	case 2:
		//the user wants to calculate the area of a rectangle.
		cout << endl << "Calculate the Area of a Rectangle\n\n";
		//Get the length and width of the rectangle from the user.
		cout << "What is the rectangle's length in inches? ";
		cin >> length;
		//Check to make sure that the user did not input a negative number.
		if (length < 0)
		{
			cout << "Error: invalid input.\n"
				<< "You must enter a positive number for the length.\n"
				<< "Please run the program again.\n";
		}
		else
		{
			cout << "What is the rectangle's width in inches? ";
			cin >> width;
			//Check to make sure that the user did not input a negative number.
			if (width < 0)
			{
				cout << "Error: invalid input.\n"
					<< "You must enter a positive number for the width.\n"
					<< "Please run the program again.\n";
			}
			else
			{
				//Calculate the area of the rectangle.
				area = length * width;
				//Display the area of the rectangle.
				cout << "The area of the rectangle is " << area << " square inches.\n";
			}

		}
		break;

	case 3:
		//the user wants to calculate the area of a triangle.
		cout << endl << "Calculate the Area of a Triangle\n\n";
		//Get the base and height of the triangle from the user.
		cout << "How long is the triangle's base in inches? ";
		cin >> base;
		//Check to make sure that the user did not input a negative number.
		if (base < 0)
		{
			cout << "Error: invalid input.\n"
				<< "You must enter a positive number for the base.\n"
				<< "Please run the program again.\n";
		}
		else
		{
			cout << "What is the triangle's height in inches? ";
			cin >> height;
			if (height < 0)
			{
				cout << "Error: invalid input.\n"
					<< "You must enter a positive number for the height.\n"
					<< "Please run the program again.\n";
			}
			else
			{
				//Calculate the area of the triangle.
				area = 0.5 * base * height;
				//Display the area of the triangle.
				cout << "The area of the triangle is " << area << " square inches.\n";
			}

		}
		break;

	case 4:
		//the user wants to calculate the area of a trapezoid.
		cout << endl << "Calculate the Area of a Trapezoid\n\n";
		//Get the lengths of the bases and the height from the user.
		cout << "How long is the trapezoid's first base in inches? ";
		cin >> base1;
		if (base1 < 0)
		{
			cout << "Error: invalid input.\n"
				<< "You must enter a positive number for the base.\n"
				<< "Please run the program again.\n";
		}
		else
		{
			cout << "How long is the trapezoid's second base in inches? ";
			cin >> base2;
			if (base2 < 0)
			{
				cout << "Error: invalid input.\n"
					<< "You must enter a positive number for the base.\n"
					<< "Please run the program again.\n";
			}
			else
			{
				cout << "What is the trapezoid's height in inches? ";
				cin >> height;
				if (height < 0)
				{
					cout << "Error: invalid input.\n"
						<< "You must enter a positive number for the height.\n"
						<< "Please run the program again.\n";
				}
				else
				{
					//Calculate the area of the rectangle.
					area = 0.5 * (base1 + base2) * height;
					//Display the area of the trapezoid.
					cout << "The area of the trapezoid is " << area << " square inches.\n";
				}

			}

		}
		break;

	case 5:
		//the user wants to calculate the area of a sphere.
		cout << endl << "Calculate the Surface Area of a Sphere\n\n";
		//Get the radius of the sphere from the user.
		cout << "What is the sphere's radius in inches? ";
		cin >> radius;
		if (radius < 0)
		{
			cout << "Error: invalid input.\n"
				<< "You must enter a positive number for the radius.\n"
				<< "Please run the program again.\n";
		}
		else
		{
			//Calculate the surface area of the sphere.
			area = 4 * PI * pow(radius, 2);
			//Display the surface area of the sphere.
			cout << "The surface area of the sphere is " << area << " square inches.\n";
		}
		break;

	case 6:
		cout << endl << "Goodbye!";
		break;

	default:
		cout << "Error: invalid input.\n";
		cout << "You must run the program again,"
			<< "and enter a valid menu choice from 1-6.\n";
	}

	cout << endl;
	system("PAUSE");
	return 0;
}