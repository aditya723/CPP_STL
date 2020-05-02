#include <iostream>
#include <set>

using namespace std;

int main(int argc, const char *argv[])  {

		multiset <int> mSet;

		mSet.insert(10);
		mSet.insert(20);
		mSet.insert(20);
		mSet.insert(30);
		mSet.insert(40);
		
		auto it = mSet.equal_range(20);

		cout << "Lower Bound: " << *it.first << " Upper Bound: " << *it.second << endl;
			return 0;
}
