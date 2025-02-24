#include <iostream>
#include <vector>
#include <math.h>
#include "LinearAlgae.h"

int main() {
	Matrix demo({
		Row({1, 2, 0, 3}),
		Row({3, 4, 1, 8}),
		Row({3, 4, 2, 10})
	});
	Matrix demoCoeff({
		Row({1, 2, 0}),
		Row({3, 4, 1}),
		Row({3, 4, 2})
	});
	Matrix zeroDet({
		Row({0, 0}),
		Row({1, 2})
	});
	//demo.swap(1, 2); // R_1 <--> R_2
	//demo.replace(1, 1, -3, 2, 1); // R_1 - 3R_2 --> R_1
	//demo.scale(0.5, 1); // (1/2)R_1 --> R_1
	//RREF(demo);
	std::cout << "Original Coefficient Matrix:\n";
	printMatrix(demoCoeff);
	std::cout << "\n\n";
	std::cout << "Original Augmented Matrix:\n";
	printMatrix(demo);
	std::cout << "\n\n";

	std::pair<Matrix, Matrix> LU = findLUFactorization(demoCoeff);
	std::cout << "L part of LU factorization:\n";
	printMatrix(LU.first);
	std::cout << "\n";
	std::cout << "U part of LU factorization:\n";
	printMatrix(LU.second);

	std::cout << "\n\n";
	Matrix inverse = findInverse(demoCoeff);
	std::cout << "Inverse:\n";
	printMatrix(inverse);
	std::cout << "\n\n";
	std::cout << "Determinant: " << findDeterminant(demoCoeff);
	std::cout << "\n\n";
	std::cout << "REF of its augmented matrix:\n";
	REF(demo);
	printMatrix(demo);
	std::cout << "\n\n";
	std::cout << "RREF of its augmented matrix:\n";
	RREF(demo);
	printMatrix(demo);
	return 0;
}