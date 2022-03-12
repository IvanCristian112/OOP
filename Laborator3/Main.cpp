#define _CRT_SECURE_NO_WARNINGS
#include "Math.h"
#include <stdarg.h>
#include <iostream>
#include <string.h>

 int  Math::Add(int x, int y) {
	 std::cout << x + y << "\n";
	 return x + y;
 }

 int Math::Add(int x, int y, int z) {
	 std::cout << x + y + z << "\n";
	 return x + y + z;
 }

 int Math::Add(double x, double y) {
	 std::cout << x + y  << "\n";
	 return x + y;
 }

 int Math::Add(double x, double y, double z) {
	 std::cout << x + y + z << "\n";
	 return x + y + z;
 }

 int Math::Mul(int x, int y) {
	 std::cout << x * y << "\n";
	 return x * y;
 }

 int Math::Mul(int x, int y, int z) {
	 std::cout << x * y * z << "\n";
	 return x * y * z;
 }

 int Math::Mul(double x, double y) {
	 std::cout << x * y  << "\n";
	 return x * y;
 }

 int Math::Mul(double x, double y, double z) {
	 std::cout << x*y*z << "\n";
	 return x * y * z; 
 }

 int Math::Add(int count, ...) {
	 va_list v1;
	 va_start(v1, count);
	 int sum = 0;
	 for (int i = 0; i < count; i++) {
		 int value = va_arg(v1, int);
		 sum += value;
	 }
	 va_end(v1);
	 std::cout << sum << "\n";
	 return sum;
 }

 char* Math::Add(const char* x, const char* y) {
	 char* result;
	 int sizeToAllocate = strlen(x) + strlen(y) + 1;
	 result = (char*)malloc(sizeToAllocate);
	 if (x == nullptr || y == nullptr) {
		 return nullptr;
	 }
	 if (result != nullptr)
	 {
		 memset(result, 0, sizeToAllocate);
		 memcpy(result, x, strlen(x));
		 memcpy(result+strlen(x), y, strlen(y));
		 std::cout << result << "\n";
		 
		 return result;
	 }


 }