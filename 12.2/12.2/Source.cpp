#include <iostream>
#include <string>
using namespace std;

template<typename T>
int linearSearch(T list[], T key, int arraySize)
{
	int result;
	for (int i = 0; i < arraySize; i++)
	{
		if (key == list[i])
		{
			result = i; 
			return result;
		}
	}	
	    result = -1;
		return result;
	
}

int main()
{
	int list[] = { 1, 4, 4, 2, 5, -3, 6, 2 };
	int i = linearSearch(list, 4, 8);
	int j = linearSearch(list, -4, 8);
	int k = linearSearch(list, -3, 8); 
	
	double list1[] = { 3.4, 5.5, 2.4, 4.5, 23.6, 2.5, 3.3, 5.5 }; 
	double l = linearSearch(list1, 3.4, 8);
	double m = linearSearch(list1, 3.2, 8);
	double n = linearSearch(list1, 1.0, 8);

	string list2[] = { "hello", "hi", "sup", "people", "yeah", "haha", "wazzup", "gross" }; 
	int o = linearSearch(list2, string("hi"), 8);
	int p = linearSearch(list2, string("yo"), 8);
	int q = linearSearch(list2, string("people"), 8);

	cout << i << endl;
	cout << j << endl;
	cout << k << endl;
	cout << l << endl;
	cout << m << endl;
	cout << n << endl;
	cout << o << endl;
	cout << p << endl;
	cout << q << endl;  
}