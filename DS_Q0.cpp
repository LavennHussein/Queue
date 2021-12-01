#include<iostream>
using namespace std;
const int msize = 5;
int queue[msize];
int rear = -1;
int front = -1;

int nofelement() {
	return rear - front;

}



int  clear() {




	return front = rear = -1;


}
bool full() {
	if (rear == msize - 1)
		return true;
	else
		return false;

}




bool empty()
{
	if (rear == front)
		return true;
	else
		return false;

}

void enqueue(int item) {

	if (full()) {
		cout << "is full";

		exit(0);
	}

	else
	{

		rear++;
		queue[rear] = item;

	}

}

int dequeue() {
	int item;
	if (empty()) {
		cout << "stack is empty";
		exit(0);
	}
	else
	{
		front++;

		item = queue[front];

	}
	return item;


}




int main() {
	int item; int nofitem = 0; int choice;

	

	
	cout << "1 enqueue element into the stak" << endl;
	cout << "2-denqueue element into the stak" << endl;
	cout << "3-exit program " << endl;
	cout << "enter your choice ";
	
	cin >> choice;
	while (choice != 3) {
		switch (choice) {

		case 1:
			cout << "how many number you want to enter in the quue   ";
			cin >> nofitem;
			cout << "enter your number to enqueue  ";
			for (int i = 0; i < nofitem; i++) {
				cin >> item;
				enqueue(item);
			}

			cout << "the number of the element in the queue " << nofelement() << endl;
			cout << "enter your choice ";
			cin >> choice;

			break;
		case 2:
			cout << "how many number you want to dequue   ";
			cin >> nofitem;
			for (int i = 0; i < nofitem; i++)

				cout << dequeue() << endl;

			clear();

			cout << "the number of the element in the queue after reset it " << nofelement() << endl;
			cout << "enter your choice ";
			cin >> choice;


			break;


		}


	}





}

