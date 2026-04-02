
#include <iostream>
using namespace std;

int main()
{
	int prev, current;
	
	// TODO
	int flag = 1;
	
	cin >> current;

	// TODO
	while (flag == 1 || prev > current) {
		cout << current << "\t";
		flag = 0;
		prev = current;
		cin >> current;
	}
	cout << endl;
	return 0;
}
