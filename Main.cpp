// Harrison Lara
// Program 7
// May 05, 2017

#include "car.h"

void intro(); //function delaration for introduction outputs to user (greeting)
void exhibition(); // function declaration for car type menu

void main()
{
	string h; // input variables
	string n; 

	//dot operator variables for structure and class
	Car A;
	Queue B;

	int counter = 0;//set counter for while loop to zero, as 100 cars in queue is the max

	while (counter <= 100) // loop while there are 100 or less cars in queue
	{
		cout << "Welcome to Mercedes!\n" << endl; //greet user
		intro(); //call first menu for user to select car type
		cin >> h; // input for certain type
	
		if (h == "1") // if 1 is selected, they have chosen new cars
		{
			while (counter <= 100) // keeping looping while new cars have 100 or less elements
			{
				system("CLS");// clear screen
				cout << "Welcome to exhibition: New Cars\n" << endl; // greet user to new cars type
				exhibition(); // call this exhibitions menu selection
				cin >> n; // get user input for new menu
			
				if (n == "1") //adds a new car to queue  
				{
					system("CLS");// clear screen
					cout << "\nAdding new car\n";
					cout << "\nEnter your vehicles name and model, plate when prompted" << endl;
					cout << "Name and Model: "; //gets the name, model and plate from user.
					getline(cin, A.name);
					getline(cin, A.model);
					cout << "Plate: ";
					getline(cin, A.plate);
					system("CLS");// clear screen
					cout << A.name << " " << A.model << " " << A.plate << "\n"; // output the information entered by user
					B.AddCar(A.name);
					B.AddCar(A.model);
					B.AddCar(A.plate);
					counter++; // increment
					system("PAUSE"); // screen pause
				}
				else if (n == "2") // add a VIP car to the head of queue
				{
					system("CLS");// clear screen
					cout << "\nAdding VIP Car\n";
					cout << "\nEnter your vehicles name and model, plate when prompted" << endl;
					cout << "Name and Model: ";
					getline(cin, A.name); // get the name, model and plate from user
					getline(cin, A.model);
					cout << "Plate: ";
					getline(cin, A.plate);
					system("CLS");// clear screen
					cout << A.name << " " << A.model << " " << A.plate << "\n";
					B.AddCarBeginning(A.name); // output information to the user
					B.AddCarBeginning(A.model);
					B.AddCarBeginning(A.plate);
					counter++;// increment
					system("PAUSE"); // pause screen
				}
				else if (n == "3") // sell first car at top of queue
				{
					system("CLS");// clear screen
					cout << "Welcome to the Auction\n";
					cout << A.name << A.model << A.plate; // output which one is removed
					B.CancelCar(1); // remove first car
					cout << "\nVehicle sold!" << endl;
					counter--;//decrement
					system("PAUSE"); // pause screen
				}
				else if (n == "4")// user input can remove a car from queue
				{
					system("CLS");// clear screen
					cout << "\nEnter your vehicles name and model, plate when prompted to remove" << endl;
					cout << "Name and Model: ";
					getline(cin, A.name); // get plate, name and model from user
					getline(cin, A.model);
					cout << "Plate: ";
					getline(cin, A.plate);
					system("CLS");// clear screen
					cout << A.name << " " << A.model << " " << A.plate << "\n";
					cout << "\nVehicle removed." << endl;
					B.CancelCar(1); // output information from input and remove this vehicle
					B.CancelCar(1);
					B.CancelCar(1);
					counter--; // decrement
					system("PAUSE");//pause system
				}
				else if (n == "5") // print entire queue to user
				{
					system("CLS");// clear screen
					cout << "\nPrint entire queue of Vehicles\n" << endl;
					B.print();
					system("PAUSE");
				}
				else if (n == "6") // return to main menu
				{
					system("CLS");// clear screen
					break;
				}
				else// keep looping if input is bad
				{
					system("CLS");// clear screen
					cout << "Invalid input. Please press any key to return to main menu.\n" << endl;
					system("PAUSE");
					system("CLS");// clear screen
				}
			}
		}
		else if (h == "2")// if 2 is selected, they have chosen Old and Historical Cars
		{
			while (counter <= 100) // while this type is 100 or less elements
			{
				system("CLS"); // clear screen
				cout << "Welcome to exhibition: Old and Historical Cars" << endl;
				exhibition(); // greet user and output new menu
				cin >> n; // take input
			
				if (n == "1") // add a new car to the queue
				{
					system("CLS");// clear screen
					cout << "\nAdding new car\n";
					cout << "\nEnter your vehicles name and model, plate when prompted" << endl;
					cout << "Name and Model: ";
					getline(cin, A.name); // take in model, name and plate from user
					getline(cin, A.model);
					cout << "Plate: ";
					getline(cin, A.plate);
					system("CLS");// clear screen
					cout << A.name << " " << A.model << " " << A.plate << "\n";
					B.AddCar(A.name); // output data entered from user and store data
					B.AddCar(A.model);
					B.AddCar(A.plate);
					counter++; // increment size
					system("PAUSE"); // screen pause
				}
				else if (n == "2")// add a vip to head of queue
				{
					system("CLS");// clear screen
					cout << "\nAdding VIP Car\n";
					cout << "\nEnter your vehicles name and model, plate when prompted" << endl;
					cout << "Name and Model: ";
					getline(cin, A.name); // take model, name and plate from user
					getline(cin, A.model);
					cout << "Plate: ";
					getline(cin, A.plate);
					system("CLS");// clear screen
					cout << A.name << " " << A.model << " " << A.plate << "\n";
					B.AddCarBeginning(A.name); //output data entered from user
					B.AddCarBeginning(A.model);
					B.AddCarBeginning(A.plate); // store data to structure
					counter++; // add one to queue
					system("PAUSE");
				}
				else if (n == "3")// sell car from head of queue
				{
					system("CLS");// clear screen
					cout << "Welcome to the Auction\n";
					cout << A.name << A.model << A.plate;
					B.CancelCar(1); // sell car 1 and output what was sold
					cout << "\nVehicle sold!" << endl;
					counter--;//minus 1 from size
					system("PAUSE");
				}
				else if (n == "4")// user can remove a selected car from queue
				{
					system("CLS");// clear screen
					cout << "\nEnter your vehicles name and model, plate when prompted to remove" << endl;
					cout << "Name and Model: "; // get car information to remove
					getline(cin, A.name);
					getline(cin, A.model);
					cout << "Plate: ";
					getline(cin, A.plate);
					system("CLS");// clear screen
					cout << A.name << " " << A.model << " " << A.plate << "\n";
					cout << "\nVehicle removed." << endl; // remove car and tell user what was removed
					B.CancelCar(1);
					B.CancelCar(1);
					B.CancelCar(1);
					counter--;
					system("PAUSE");
				}
				else if (n == "5") // output queue to user
				{
					system("CLS");// clear screen
					cout << "\nPrint entire queue of Vehicles\n" << endl;
					B.print(); // print list
					system("PAUSE");
				}
				else if (n == "6") // return to main menu
				{
					system("CLS");// clear screen
					break;
				}
				else // keep cycling if input is bad
				{
					system("CLS");// clear screen
					cout << "Invalid input. Please press any key to return to main menu.\n" << endl;
					system("PAUSE");
					system("CLS");// clear screen
				}
			}
		}
		else if (h == "3")// if 3 is selected, they have chosen Luxury Cars
		{
			while (counter <= 100) // loop to this car type is 100 or less
			{
				system("CLS"); // clear screen
				cout << "Welcome to exhibition: Luxury Cars" << endl;
				exhibition();//greet user and output new menu
				cin >> n;//take input

				if (n == "1")//add new car to queue
				{
					system("CLS");// clear screen
					cout << "\nAdding new car\n";
					cout << "\nEnter your vehicles name and model, plate when prompted" << endl;
					cout << "Name and Model: ";
					getline(cin, A.name);
					getline(cin, A.model);
					cout << "Plate: "; // take name, model and plate from user
					getline(cin, A.plate);
					system("CLS");// clear screen
					cout << A.name << " " << A.model << " " << A.plate << "\n";
					B.AddCar(A.name);// add data to queue and output information entered
					B.AddCar(A.model);
					B.AddCar(A.plate);
					counter++;//plus 1 to queue
					system("PAUSE");
				}
				else if (n == "2") //add a vip to head of queue
				{
					system("CLS");// clear screen
					cout << "\nAdding VIP Car\n";
					cout << "\nEnter your vehicles name and model, plate when prompted" << endl;
					cout << "Name and Model: ";
					getline(cin, A.name); //take plate, model and name from user
					getline(cin, A.model);
					cout << "Plate: ";
					getline(cin, A.plate);
					system("CLS");// clear screen
					cout << A.name << " " << A.model << " " << A.plate << "\n";
					B.AddCarBeginning(A.name); //store data and output info to user 
					B.AddCarBeginning(A.model);
					B.AddCarBeginning(A.plate);
					counter++;// increment size
					system("PAUSE");//pause screen
				}
				else if (n == "3") // sell first car at head
				{
					system("CLS");// clear screen
					cout << "Welcome to the Auction\n";
					cout << A.name << A.model << A.plate;
					B.CancelCar(1); // output what car was sold
					cout << "\nVehicle sold!" << endl;
					counter--;//decrement size
					system("PAUSE");
				}
				else if (n == "4") // user can enter to remove a car from queue
				{
					system("CLS");// clear screen
					cout << "\nEnter your vehicles name and model, plate when prompted to remove" << endl;
					cout << "Name and Model: ";
					getline(cin, A.name); // take car information to remove
					getline(cin, A.model);
					cout << "Plate: ";
					getline(cin, A.plate);
					system("CLS");// clear screen
					cout << A.name << " " << A.model << " " << A.plate << "\n";
					cout << "\nVehicle removed." << endl;
					B.CancelCar(1);//remove data from queue and tell user what was removed 
					B.CancelCar(1);
					B.CancelCar(1);
					counter--;//decrement queue by 1 
					system("PAUSE");//screen pause
				}
				else if (n == "5") // print out all data in the queue
				{
					system("CLS");// clear screen
					cout << "\nPrint entire queue of Vehicles\n" << endl;
					B.print();//print elements
					system("PAUSE");
				}
				else if (n == "6")// return to main menu
				{
					system("CLS");// clear screen
					break;
				}
				else // keep looping if input was bad
				{
					system("CLS");// clear screen
					cout << "Invalid input. Please press any key to return to main menu.\n" << endl;
					system("PAUSE");
					system("CLS");// clear screen
				}
			}
		}
		else if (h == "4") // if 4 is selected, the program says goodbye to user and exits
		{
			cout << "\nThank you for visiting Mercedes.\n" << endl; // final message
			exit(1); //exit program
		}
		else // if anything other than 1 through 4 is entered, resets screen and gets input again
		{
			system("CLS"); // clear screen
			continue; // keep looping
		}
	}
}


void intro() // outputs the main menu to the user
{
	cout << "1. New Cars " << endl;
	cout << "2. Old and Historical Cars" << endl;
	cout << "3. Luxury Cars" << endl;
	cout << "4. Exit\n" << endl;
	cout << "Please enter your choice: ";
}

void exhibition() // outputs the car types menu for the user
{
	cout << "1. Add Car" << endl;
	cout << "2. Add VIP Car" << endl;
	cout << "3. Take Car to Auction" << endl;
	cout << "4. Cancel Car" << endl;
	cout << "5. List All Currently Queued Cars" << endl;
	cout << "6. Exit Back to Main Menu\n" << endl;
	cout << "Please enter your choice: ";
}