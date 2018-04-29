#include <iostream>
using namespace std;
void swap(float** a, float** b) {
	float* temp = *a;
	*a = *b;
	*b = temp;
}
int main() {
	float a = 1.234;
	float b = 4.321;
	float* pa = &a;
	float* pb = &b;
	swap(&pa, &pb);
}