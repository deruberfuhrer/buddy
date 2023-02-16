#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> myVector;
	myVector.push_back(12);
	myVector.push_back(-1000);
	myVector.push_back(452);
	myVector.push_back(-200000);
	myVector.push_back(32000);
	myVector.push_back(0);

	vector<int>::iterator it = myVector.begin();

	for (it = myVector.begin(); it != myVector.end(); ++it) {
		std::cout << *it << std::endl;
	}
}