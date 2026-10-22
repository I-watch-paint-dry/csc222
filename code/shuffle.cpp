#include <iostream>
#include <string>
using namespace std;

int shuffle(int ){

}

int main() {
	int a;
	int b;
	int c;
	int d;
	int e;

	cin >> a;
	cin >> b;
	cin >> c;
	cin >> d;
	cin >> e;

	int arr[a, b, c, d, e];
	int n = sizeof(arr) / sizeof(arr[0]);
	
	for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
	    }


	return 0;
}
