#include <iostream>
#include <vector>

using namespace std;


void print_vector(vector <int> &vec)
{
	cout << __func__  << "(): Printing Vector" << endl;
	/* Iterate through vector */
	for (int i : vec)
		cout << i <<  " ";
	cout << endl;

	for (auto i = vec.begin(); i != vec.end(); i++)
		cout << *i << " ";
	cout << endl;

	for (vector <int>::iterator i = vec.begin(); i != vec.end(); i++)
		cout << *i << " ";
	cout << endl;

	for (int i = 0; i < vec.size(); i++)
		cout << vec[i] << " ";

	cout << endl;
	cout << endl;
}

void print_capacity(vector <int> &vec)
{

	cout << __func__ << "(): Size: "<< vec.size() << endl;
	cout << __func__ << "(): Max Size: " << vec.max_size() << endl;
	cout << __func__ << "(): Capacity: " << vec.capacity() << endl << endl;
}	

void  play_with_resize(vector <int> &vec)
{

	cout << "\n############In " << __func__ << "(): " << "##############" << endl;

	print_vector(vec);
	print_capacity(vec);

	cout << __func__ << "(): resizing it size from: " << vec.size() << " to " << 4 << endl;	
	vec.resize(4);
	print_vector(vec);
	print_capacity(vec);

	cout << __func__ << "(): resizing it size from: " << vec.size() << " to " << 6 << endl;
	vec.resize(6);
	print_vector(vec);
	print_capacity(vec);
	
	cout << __func__ << "(): resizing it size from: " << vec.size() << " to " << 10 << endl;
	vec.resize(10, 20);
	print_vector(vec);
	print_capacity(vec);

	cout << "Out " << __func__ << "(): " << endl;
	
}

void play_with_reserve(vector <int> &vec)
{
	cout << "\n############In " << __func__ << "(): " << "##############" << endl;
	print_vector(vec);
	print_capacity(vec);

	cout << "Reserving 18 elements" << endl;
	vec.reserve(18);
	print_vector(vec);
	print_capacity(vec);

	cout << "Reserving 8 elements" << endl;
	vec.reserve(8);
	print_vector(vec);
	print_capacity(vec);
	cout << "Out " << __func__ << "(): " << endl;
}

void play_with_shrink_to_fit(vector <int> &vec)
{
	cout << "\n############In " << __func__ << "(): " << "##############" << endl;
	print_vector(vec);
	print_capacity(vec);

	cout << "Shrink to fit" << endl;
	vec.shrink_to_fit();
	print_vector(vec);
	print_capacity(vec);
	cout << "Out " << __func__ << "(): " << endl;

}

void learn_assign(vector <int> &vec)
{
	cout << "\n############In " << __func__ << "(): " << "##############" << endl;
	print_vector(vec);
	print_capacity(vec);

	vec.assign(9, 100); // 7 ints with value as 100.other elements will be removed
	print_vector(vec);
	print_capacity(vec);


	vector <int> first = {1, 2, 3, 4, 5, 6, 7};
	print_vector(first);
	print_capacity(first);

	auto it = first.begin();
	++it;
	vec.assign(it, first.end());
	print_vector(vec);
	print_capacity(vec);
	cout << "Out " << __func__ << "(): " << endl;

}

int main()
{

	// CONSTRUCTOR
	vector <int> first; // empty vector

//	cout << first[0] << endl; // will result in segmentation fault as vector is not allocated with any data.
	vector <int> sec (4, 200); // four ints with value 100
	print_vector(sec);

	vector <int> third (sec.begin(), sec.end());
	print_vector(third);

	vector <int> fourth (third);
	print_vector(fourth);

	int arr[5] = {1, 2,3, 4, 5};
	vector <int> fifth (arr, arr+5);
	print_vector(fifth);

	vector<int>sixth(5); // will construct 5 integers with default values
	print_vector(sixth);

	/* iterators
	 * begin() // Return iterator to the begining
	 * end() // Return iterator to the end
	 * rbegin() // Return reverse iterator to the reverse begining
	 * rend() // Return reverse iterator to the reverse end
	 * cbegin() // Return const iterator to the begining
	 * cend() // Return const iterator to the end
	 * crbegin() // Return const reverse iterator to the reverse begining
	 * crend() // Return conts reverse  iterator to the reverse end
	 * */

	/* Capacity
	 * size // Return the size of vector i.e. how many elemnets are stored
	 * max_size // Return the maximum size i.e how man elements that can be stored in vector at max
	 * resize // Change the size of vector
	 * capacity // Return the storage space currently allocated for the vector, expressed in terms of elements 
	 * empty // Test whether vector is empty.
	 * reserve // Request that the vector capacity be at least enough to contain n elements.
	 * shrink_to_fit // Reduce the capacity to size
	 * */

	print_capacity(fifth);

	play_with_resize(fifth);

	play_with_reserve(fifth);

	play_with_shrink_to_fit(fifth);

	/*
	 * Element Access
	 * operator[] // Access Element
	 * at // Access data
	 * front // Access first element
	 * back // Access last elemet
	 * data // Returns a direct pointer to the memory array used internally by the vector to store its owner element
	 * */

	/*
	 * Modifiers
	 * assign // Assign new contents to the vecrot, replacing its current content, and modifying its size accordingly.
	 * push_back // Add element to the last
	 * pop_back // Delete last element, it return last element
	 * insert // The vector is modified by inserting new elements before at the specified position, effectivily increasing the container size by the number of elements inserted.
	 * erase // Removes from the vector either a single element(position) or a range of elements(first, last).
	 * swap // swap content, exchange the content of the container by the content of x, which is another vector object of the same type. Size may differ.
	 * clear // Remove all elements from the vector(which are destroyed), leaving the container with a size of 0. vector<T>().swap(x); // clear x reallocating
	 * emplace // The constructor is extended by inserting a new elements at position. This new element is constructed in place using args as the argument for its construction.
	 * emplace_back // Construct and insert element at the end
	 * */

	learn_assign(fifth);

	// learn_insert(fifth);

	/*
	 *  Allocator
	 * get_allocator // Returns a copy of the allocator object associated with the vector
	 * */

	/**
	 * Non Member function overloads
	 * relational operator // Performs the relational operation between the vector containers lhs and rhs, having both the same template
	 * swap
	 */

	/*
	 * Template Specialization
	 * vector<bool>
	 *
	 * flip and swap are additional member function.data, emplace and emplace_back are not present.
	 * */



	return 0;
}
