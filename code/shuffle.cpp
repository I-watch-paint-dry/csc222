#include <iostream>
#include <string>
#include <cstdlib>
#include <algorithm>
#include <random>

using namespace std;

struct pointarray{
int A;
int B;
int C;
int D;
int E;
};

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

int main() {
	int a;
	int b;
	int c;
	int d;
	int e;



	cout << "Type integer 1";
	cin >> a;
	
	cout << "Type integer 2";

	cin >> b;
	cout << "Type integer 3";

	cin >> c;
	cout << "Type integer 4";

	cin >> d;
	cout << "Type integer 5";

	cin >> e;

	cout << a << b << c <<  d <<  e <<  endl;
}
