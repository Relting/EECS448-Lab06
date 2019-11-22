#ifndef test_h
#define test_h
#include<iostream>
#include"Queue.h"
using namespace std;

class Tester
{
	public:

	/**
	*@post A simple constructor.
	*/
	Tester();

	/**
	*@post Outputs to the console whether a queue was created or not.
	*/
	void testCreator();

        /**
        *@post:Outputs to the console: test results checking if the destructor removes all entries.
	* Memory leaks must be checked for OUTSIDE the program.
        */
        void testDestructor();

	/**
	*@post Outputs to the console: test results checking if isEmpty() works.
	*/
	void testIsEmpty();

	/**
	*@post Outputs to the console:test results checking if enqueue() works.
	*/
	void testEnqueue();

	/**
	*@post Outputs to the console: test results checking if dequeue() works.
	*/
	void testDequeue();

	/**
	*@post Outputs to the console: test results checking if peekFront() works.
	*/
	void testPeekFront();

};

#endif


