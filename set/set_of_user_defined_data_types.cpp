/* Using set for user defined data type */

#include <iostream>
#include <set>
using namespace std;

class T {
	int a;
		public:
			T(int d) : a(d) {}
			// It is mandatory to overload the < operator, otehrwise compiler could not understand the order in which data should be stored in set
			bool operator <(const T& a) const {
				//return this->a < a.a; // To store elements in increasing order
				return this->a > a.a; // To store elements in decreasing order
			}
			int getData() const {return a;}
};

int main(int argc, const char *argv[]) {

	set <T> tSet;

	T a(1);
	T b(4);
	T c(3);
	T d(2);

	tSet.insert(a);
	tSet.insert(b);
	tSet.insert(c);
	tSet.insert(d);

	for (set<T>::iterator it = tSet.begin(); it != tSet.end(); it++) {
		cout << "Data is: " << it->getData() << endl;
	}

	return 0;

}
