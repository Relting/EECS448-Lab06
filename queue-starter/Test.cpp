#include "Test.h"
#include<iostream>
using namespace std;


	Tester::Tester()
	{
	}

        void Tester::testCreator()
	{
	cout <<"\n Testing the creator function:\n\n ";

	cout << "A queue that is created should be empty. ";
	Queue testIsCreated;
	if(testIsCreated.isEmpty() == true)
	{
	cout << "PASS!\n";
	}
	else
	cout << "FAILED! Was expecting the queue to be empty, but it's not!\n";

        cout <<" A queue that is created should be able to be added to. ";
        Queue testEnqueue1;
        testEnqueue1.enqueue(1);
        if(testEnqueue1.isEmpty() == false)
        {
	cout << "PASS!\n";
        }
	else
        cout << "FAILED! Adding an entry resulted in a isEmpty() value of not-false!\n";

	}

        void Tester::testDestructor()
        {
        cout <<"\n\n Testing the clear entries function:\n\n";

	cout << " A queue that is populated then deletes all entries should be empty. ";
        Queue testIsDeleted;
	testIsDeleted.enqueue(1);
	testIsDeleted.enqueue(2);
	testIsDeleted.~Queue();
        if(testIsDeleted.isEmpty() == true)
        {
        cout << "PASS!\n";
        }
        else
        cout << "FAILED! Was expecting the queue to be empty, but it's not!\n";


// THE BELOW CODE WAS TO TEST THE THEORY THAT IT MAY HAVE DELETED THE QUEUE. IT RESULTS
// IN THE PROGRAM NOT COMPULING, WHICH DEBUNKS THAT THEORY.

//	if (thisthing.isEmpty)
//	{
//	cout << "Isempty works on queues that don't exist!";
//	}


// THE BELOW FUNCTION THREW AN ERROR THAT COULD NOT BE CAUGHT.

//	cout << " The above queue should return an error when peeked.";
//	Queue testIsDeleted2; // for testing a queue that was not deleted
//	try {
//	testIsDeleted.peekFront();
//	}
//	catch (...)
//	{
//	cout << "PASS, it threw an error!";
//	}
//	cout << " If it didn't say PASS just now, then it FAILED.\n";

// THE BELOW FUNCTION THREW AN ERROR THAT COULD NOT BE CAUGHT.

//        cout << " The above queue should return an error when an entry is added.";
//	Queue testIsDeleted2; // for testing a queue that was not deleted
//	try {
//	testIsDeleted.enqueue(1);
//	}
//	catch (...)
//	{
//	cout << "PASS, it threw an error!";
//	}
//	cout << " If it didn't say PASS just now, then it FAILED.\n";

	cout << " Memory leaks should be checked for outside this program.\n";

	}


        void Tester::testIsEmpty()
	{
        cout <<"\n\n Testing the isEmpty() function:\n\n";

	cout <<" An empty (newly created) queue should return false. ";
	Queue testIsEmpty1;
        if(testIsEmpty1.isEmpty() == true)
        {
        cout << "PASS!\n";
        }
        else
        cout << "FAILED! Was expecting the queue to be empty, but it's not!\n";

	cout << " A queue with an item should return false. ";
	Queue testIsEmpty2;
	testIsEmpty2.enqueue(1);
	if(testIsEmpty2.isEmpty() == false)
	{
	cout << "PASS!\n";
	}
	else
	cout << "FAILED! The queue had an item pushed to it, but registers as empty!\n";

        cout << " A queue with multiple items should return false. ";
        Queue testIsEmpty3;
        testIsEmpty3.enqueue(1);
	testIsEmpty3.enqueue(2);
        if(testIsEmpty3.isEmpty() == false)
        {
        cout << "PASS!\n";
        }
        else
        cout << "FAILED! The queue had two items pushed to it, but registers as empty!\n";

        cout << " A queue that is empty, pushed and popped should return true. ";
        Queue testIsEmpty4;
	testIsEmpty4.enqueue(1);
	testIsEmpty4.dequeue();
	if(testIsEmpty4.isEmpty() == true)
        {
        cout << "PASS!\n";
        }
        else
        cout << "FAILED! The queue was pushed and popped, but registers as not empty!\n";

	}


        void Tester::testEnqueue()
	{
        cout <<"\n\n Testing the Enqueue() function:\n\n";

	cout <<" Adding an entry to an empty queue should make it not empty. ";
        Queue testEnqueue1;
	testEnqueue1.enqueue(1);
        if(testEnqueue1.isEmpty() == false)
        {
        cout << "PASS!\n";
        }
        else
        cout << "FAILED! Adding an entry resulted in a isEmpty() value of not-false!\n";

        cout << " Adding an entry to an empty queue should result in that entry being in front. ";
        Queue testEnqueue2;
        testEnqueue2.enqueue(1);
        if(testEnqueue2.peekFront() == 1)
        {
        cout << "PASS!\n";
        }
        else
        cout << "FAILED! The entry at the front was not 1 as expected!\n";

        cout << " Adding two entries should still result in the first entry being in front. ";
        Queue testEnqueue3;
        testEnqueue3.enqueue(1);
	testEnqueue3.enqueue(2);
        if(testEnqueue3.peekFront() == 1)
        {
        cout << "PASS!\n";
        }
        else
        cout << "FAILED! The entry at the front was not 1 as expected, it was " << testEnqueue3.peekFront() << "!\n";

        cout << " Adding two entries and popping should result in the second entry being in front. ";
        Queue testEnqueue4;
        testEnqueue4.enqueue(1);
        testEnqueue4.enqueue(2);
	testEnqueue4.dequeue();
        if(testEnqueue4.peekFront() == 2)
        {
        cout << "PASS!\n";
        }
        else
        cout << "FAILED! The entry at the front was not 2 as expected, it was " << testEnqueue4.peekFront() << "!\n";

	}


        void Tester::testDequeue()
	{
        cout <<"\n\n Testing the Dequeue() function:\n\n";

	cout <<" Trying to dequeue an empty stack should throw std::runtime_error. ";
        Queue testDequeue1;
        try {
	testDequeue1.dequeue();
	}
	catch (const std::exception&)
	{
	cout << "PASS, it threw an error!";
	}
        cout << " If it didn't say PASS just now, then it FAILED.\n";

        cout << " Removing from a queue of size one should return an empty queue. ";
        Queue testDequeue2;
        testDequeue2.enqueue(1);
        testDequeue2.dequeue();
	if(testDequeue2.isEmpty() == true)
	{
        cout << "PASS!\n";
        }
	else
        cout << "FAILED! The queue does not register as empty!\n";

        cout << " Removing from a queue of size two should make the last entry first. ";
        Queue testDequeue3;
        testDequeue3.enqueue(1);
        testDequeue3.enqueue(2);
        testDequeue3.dequeue();
        if(testDequeue3.peekFront() == 2)
        {
        cout << "PASS!\n";
        }
        else
        cout << "FAILED! The entry at the front was not 2 as expected, it was " << testDequeue3.peekFront() << "!\n";

	}


        void Tester::testPeekFront()
	{
        cout <<"\n\n Testing the peekFront() function:\n\n";

	cout <<" Trying to peek an empty stack should throw std::runtime_error. ";
        Queue testPeek1;
        try {
        testPeek1.peekFront();
        }
        catch (const std::exception&)
        {
        cout << "PASS, it threw an error!";
        }
        cout << " If it didn't say PASS just now, then it FAILED.\n";

        cout << " Adding one entry should return that entry when peeked. ";
        Queue testPeek2;
	testPeek2.enqueue(1);
	if(testPeek2.peekFront() == 1)
        {
        cout << "PASS!\n";
        }
        else
        cout << "FAILED! The entry at the front was not 1 as expected, it was " << testPeek2.peekFront() << "!\n";

	cout << " Adding two entries should return the first entry when peeked. ";
	Queue testPeek3;
        testPeek3.enqueue(1);
	testPeek3.enqueue(2);
        if(testPeek3.peekFront() == 1)
	{
	cout << "PASS!\n";
        }
	else
	cout << "FAILED! The entry at the front was not 1 as expected, it was " << testPeek3.peekFront() << "!\n";

        cout << " Adding two entries and popping should return the second entry when peeked. ";
	Queue testPeek4;
	testPeek4.enqueue(1);
	testPeek4.enqueue(2);
	testPeek4.dequeue();
	if(testPeek4.peekFront() == 2)
        {
	cout << "PASS!\n";
	}
	else
	cout << "FAILED! The entry at the front was not 2 as expected, it was " << testPeek4.peekFront() << "!\n";

	cout << " Adding four entries and popping should return the second entry when peeked. ";
	Queue testPeek5;
	testPeek5.enqueue(1);
	testPeek5.enqueue(2);
	testPeek5.enqueue(3);
	testPeek5.enqueue(4);
	testPeek5.dequeue();
	if(testPeek5.peekFront() == 2)
	{
	cout << "PASS!\n\n";
	}
	else
	cout << "FAILED! The entry at the front was not 2 as expected, it was " << testPeek5.peekFront() << "!\n\n";

	}
