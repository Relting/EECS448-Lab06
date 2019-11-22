/**
*	@file main.cpp
*	@author John Gibbons, Rachel Elting
*	@date 2014.04.02 - 11/17/19
*/

#include <iostream>
#include <stdexcept>
#include "Queue.h"
#include "Test.h"

int main()
{
	Queue q;
	Tester T;

	T.testCreator();
	T.testDestructor();
	T.testIsEmpty();
	T.testEnqueue();
	T.testDequeue();
	T.testPeekFront();

	return(0);
}
