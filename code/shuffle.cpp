#include <iostream>
#include <string>
#include <cstdlib>
#include <algorithm>
#include <random>

using namespace std;

int number[5];

/*struct pointarray mixit(int a; int b; int c; int d; int e){
int temp;
	int myarray = {a,b,c,d,e}
for (int i = 0; i<10, i++){
int random_num1 = (rand() % 5);
int random_num2 = (rand() % 5);

}
temp = myarray(random_num1);
myarray(random_num1) = myarray(random_num2);
myarray(random_num2) = temp;
}

*/

// this function randomly switches 2 of the members of the array
void mixit(void){
int temp;
int random_num1 = (rand() % 5);
int random_num2 = (rand() % 5);

temp = number[random_num1];
number[random_num1] = number[random_num2];
number[random_num2] = temp;

}


int main() {
	
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


for (int i = 0; i<10; i++){

	mixit();
}



for (int i =0; i<5; i++){

	cout << number[i] << " ";

}

	cout << endl;
}
