#pragma once
#include <iostream>
using namespace std;
class Matrix {
	uint8_t** matrix;
	size_t size;
public:
	Matrix(size_t size = 8);
	void print() const;
	uint8_t* operator[](int index) {
		return matrix[index];
	}
	~Matrix() {
		for (size_t i = 0; i < size; i++) {
			delete[] matrix[i];
		}
		delete[] matrix;
	}
};