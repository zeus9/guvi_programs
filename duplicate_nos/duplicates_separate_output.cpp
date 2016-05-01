/* 
	Find duplicate Reg nos.
	No limit on length of regNo

	Time Complexity = O(n) with	unordered_map <string, int>
	NOTE: can use map <string, int> for a sure shot O(nlogn) 

	To run this program in bash (c++11 compiler) ==>
	$ g++ --std=c++11 duplicates.cpp
*/
#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
	unordered_map <string, int> regNos;
/*
	unordered_map has complexity O(1) for
	insertion, lookup, deletion of common keys like <string, int>
*/
	string no;
	int n;
	cout<<"\nTotal Registration Nos : ";
	cin >> n;

	cout<< endl << "Registration nos : \n";
	for(int i = 0; i < n; i++)
	{
		cin >> no;
		regNos[no]++;
	}

	cout << endl;
  	for ( auto it = regNos.begin(); it != regNos.end(); ++it )
    	if( it->second > 1)
    		cout<< it->first << " has " << it->second << " duplicate/s " << endl;
  	
  	cout<<endl;
	return 0;
}