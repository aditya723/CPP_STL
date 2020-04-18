#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

class cmp {
        public:
                bool operator () (const int &a, const int &b) {
                        return  a > b;
                }
};


int main()
{
        vector <int> arr;
        for(int i = 0; i < 10; i++) arr.push_back(i + 1);

        for(int i = 0; i < arr.size();i++) cout << arr[i] << " ";
        cout << endl;

        // using user defined comparator
        sort(arr.begin(), arr.end(), cmp());

        for(int i = 0; i < arr.size();i++) cout << arr[i] << " ";
        cout << endl;

        // using lambda
        sort(arr.begin(), arr.end(), [](const int &a, const int &b) {return a < b;});

        for(int i = 0; i < arr.size();i++) cout << arr[i] << " ";
        cout << endl;
        return 0;
}
