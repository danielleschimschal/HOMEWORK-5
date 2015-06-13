#include <iostream>
using namespace std;

template<typename T>
bool isSorted(const T list[], int size)
{
	for (int i = 0; i < size; i++){
		if (list[i] < list[i + 1])
			return true;
		else 
			return false;
	}
}

int main(){
	const int list[] = { 1, 3, 4, 5, 6 };
	cout << isSorted(list, 5) << endl; 

	const double list1[] = { 3.4, 2.3, 5.6, 7.9, 6.5 };
	cout << isSorted(list1, 5)<< endl; 

	const string list2[] = { "hi", "hello", "peace", "yo", "mariners" };
	cout << isSorted(list2, 5) << endl; 
		
}