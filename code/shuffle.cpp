#include <iostream>
#include <string>
#include <cstdlib>
#include <algorithm>
#include <random>
#include <time.h>
#include <ctime>
#include <chrono>

using namespace std;

// use global array so that function doesn't pass by a reference
int number[5];

// this function randomly switches 2 of the members of the array
void mixit(void){
// srand(time(4)); //using srand to seed using system time
int temp;
int random_num1 = (rand() % 5);
int random_num2 = (rand() % 5);

temp = number[random_num1];
number[random_num1] = number[random_num2];
number[random_num2] = temp;

}


int main() {
	// prompt for user entry of 5 integers
	cout << "Type integer 1: ";
	cin >> number[0];
	
	cout << "Type integer 2: ";
	cin >> number[1];

	cout << "Type integer 3: ";
	cin >> number[2];

	cout << "Type integer 4: ";

	cin >> number[3];
	cout << "Type integer 5: ";

	cin >> number[4];

// invokes the function 10 times
for (int i = 0; i<10; i++){
	mixit();
}


// print results
for (int i =0; i<5; i++){

	cout << number[i] << " ";

}

	cout << endl;
}
