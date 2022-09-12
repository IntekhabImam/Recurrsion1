// CPP Program to print a character
// n times without using loop,
// recursion or goto
#include<bits/stdc++.h>
using namespace std;

// print function
void printNTimes(char c, int n)
{
	// character c will be printed n times
	cout << string(n, c) << endl;
}

// driver code
int main()
{
	// no of times a character
	// need to be printed
	int n = 6;
	char c = 'G';
	
	// function calling
	printNTimes(c, n);

	return 0;
}

