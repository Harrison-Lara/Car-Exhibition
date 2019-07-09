// Harrison Lara
// Program 7
// May 05, 2017

#pragma once

#include<string>
#include<queue>
#include<iostream>
using namespace std;

struct Car // structure to hold the name, plate and model of the car entered
{
	string name; // name of car variable
	string plate;// plate of car variable
	string model;// model of car variable
};

class Queue //This class holds the data entered, then filters it out of the queue as requested by user
{
public:
	//constructors
	Queue(const string, int);
	Queue();

	void AddCar(const string& C); // adds a car to the queue
	string AddCarBeginning(string& C); // //Returns the element at the start of the queue
	string CancelCar(int); // removes a car from the queue
	bool clear() const; // clears the entire queue
	void print(); // prints out entire queue

private:
	Queue *next = NULL; // pointer to null variable
	Queue *Head; // front of queue
	Queue *Tail; // end of queue
	int count; 
	string data;
	int size; // size of queue	
};