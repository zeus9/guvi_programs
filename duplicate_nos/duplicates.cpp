/* 
	find duplicate registration nos
	run this program like this in bash ==>
	$ g++ --std=c++11 duplicates.cpp
*/
#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
	unordered_map <string, bool> regNos;
/*
	unordered_map has complexity O(1) for
	insertion, lookup, deletion of common keys like <string, bool>
*/
	string no;
	int n;
	cout<<"\nTotal Registration Nos : ";
	cin >> n;
	cout<<endl;
	for(int i = 0; i < n; i++)
	{
		cin >> no;
		if(regNos[no] == false)
			regNos[no] = true;
		else
			cout<<endl<<no<<" has duplicate/s\n\n";
	}
	return 0;
}