#ifndef HEADER_H
#define HEADER_H

#include <iostream>

template<typename T>

class vector
{
public:
	vector<T>();
	vector<T>(unsigned int size);
	vector<T>(unsigned int size, vector<T>);

	void push_back(const T & value);
	void pop_back();
	unsigned const size();
	const T at(int vector[]);
	bool const empty();
	void clear();
	void swap(vector<T> v2);
};

#endif 