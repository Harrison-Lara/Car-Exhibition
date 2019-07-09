// Harrison Lara
// Program 7
// May 05, 2017

#include "car.h" // include header file

Queue::Queue(const string, int){ }; //constructor

Queue::Queue()//constructor
{
	Head = NULL;//setting variables to defaults
	Tail = NULL;
	count = 0;
}

void Queue::AddCar(const string & C) 
//adds a car to the queue if clear to queue, then cycling through and adding to the queue in single filing order
{
	if (clear()) // if no data is in queue
	{
		Head = new Queue(C, NULL); // creating queue for head
		Tail = Head; // set end to front
	}
	else // if data is in queue, start placing data on top of older data
	{
		Tail->next = new Queue(C, NULL); // place data after older data 
		Tail = Tail->next;
	}
	count++; // incrementing 
}

string Queue::AddCarBeginning(string& C) //adds a VIP car to the front of queue
{
	Queue *newNode = new Queue(C, NULL); // sets new data to front queue by setting data to front of head
	newNode->next = Head;
	Head = newNode;
	size++; // increment queue size
	return C; // return data
}

string Queue::CancelCar(int) // removes car from the queue
{
	if (!clear())
		// if queue isnt empty, sort through the queue till specific car is found with a temporary pointer, then delete that pointer when data is found
	{
		Queue *temp; //create temporary pointer
		string returnVal;

		temp = Head; // set pointer to front

		returnVal = temp->data;

		Head = Head->next; // going through each element

		if (Head == NULL)
		{
			Tail = Head; // set end to front if null 
		}

		delete temp; //delete pointer

		count--; // decrement queue count by 1

		return returnVal; // return data removed
	}

	return ""; // return empty if no data found
}

bool Queue::clear() const // clears the entire queues data
{
	if (count == 0) // if elements are equal to zero, then return true, if false clear data
	{
		return true;
	}
	else return false;
}

void Queue::print() // prints all data in the queue
{
	Queue* p; // create pointer from class
	p = Head; // set pointer to front
	while (p != NULL) // while not null, cout the data in the queue, then delete temporary pointer
	{ 
		cout << p->data << endl;
		p = p->next;
	}
	delete p;
}