#include "Matrix.h"
#include <cstdio>
Matrix::Matrix(size_t size) {
	this->size = size;
	matrix = new uint8_t * [size];
	for (size_t i = 0; i < size; i++) {
		matrix[i] = new uint8_t[size];
		for (size_t j = 0; j < size; j++) {
			matrix[i][j] = 0;

		}
	}

}

void Matrix::print() const {
	for (size_t i = 0; i < size; i++) {
		for (size_t j = 0; j < size; j++) {
			cout << unsigned(matrix[i][j]) << " ";
		}
		cout << endl;
	}
}