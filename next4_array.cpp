#include <iostream>
#include <array>
#include <algorithm>

int main() {

	int array2[20]{};
	int a[5]{ 4,5,6,7 };//1 2 3 0 0 (оыеальное заполняется нулями)
	int b[]{ 1,2,3 };
	std::array<int, 5> arr{ 11,22,33 };

	std::cout << "array a:  ";
for (int i = 0; i < 5; i++) {
    	std::cout << a[i] << " ";
        }
std::cout << std::endl;

std::cout << "array b:  ";
for (int i = 0; i < 3; i++) {
    	std::cout << b[i] << " ";
        }
std::cout << std::endl;

std::cout << "array arr:  ";
for (int i = 0; i < 5; i++) {
    	std::cout << arr[i] << " ";
        }
std::cout << std::endl;

std::cout << "array2:  ";
for (int i = 0; i < 20; i++) {
    	std::cout << array2[i] << " ";
        }
std::cout << std::endl;
std::cout << std::endl; 
for (int i = 0; i < 5; i++) {
    arr[i] = a[i];
    }
std::cout << "array arr:  ";
for (int i = 0; i < 5; i++) {
    	std::cout << arr[i] << " ";
        }
std::cout << std::endl;
std::cout << std::endl;
std::cout << "array a :  ";
for (int i = 0; i < 5; i++) {
    std::cout << a[i] << " ";
}
std::cout << std::endl;
	return 0;
}
