#include <iostream>
#include <ctime>
#include <vector>
#include <iomanip>
using namespace std;

int main()
{
	vector<int> mV;

    mV.push_back(12);
    mV.push_back(-1000);
    mV.push_back(20000);
    mV.push_back(1900);
    mV.push_back(-1970);

     int max_mV = 0;
    for (int i = 0; i < 5; i++)
    {
        if (mV[i] > max_mV)
            max_mV = mV[i];
        else (mV[i] <= max_mV);
            continue;
    }
    cout << max_mV << endl;
    return 0;
}
