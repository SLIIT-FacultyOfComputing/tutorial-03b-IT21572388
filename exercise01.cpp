#include<iostream>
#include<iomanip>
using namespace std ;
int main(){
	cout << "123456789012345678901234567890" << endl;
	float marks[] = { 78.4 , 90.3 , 45.9 , 72.2 , 54.4};
	char names[][20] = {"Ajith" , "Wimal" ,"Kanthi" , "Suranji" , "Kushitha"};
	cout << setw(5) << "No" << setw(15) <<"Name" << setw(10) << "Marks" << endl;
	for(int r = 0 ; r < 5 ; r++){
		cout << setw(5) << r + 1 
	    << setw(15) << names[r] 
	    << setiosflags (ios::fixed)<< setw(10)<< setprecision (2) << marks[r] << endl;
	}
}