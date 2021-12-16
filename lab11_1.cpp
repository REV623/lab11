#include<iostream>
using namespace std;

int main(){
	int i=1,count[5] = {0,0,0,0,0}; //Declare array count for counting A,B,C,D,F and initialize all element = 0
	char grade;
	cout << "Please input grade of each student (A-F) or input 0 to exit.\n";
	do{
		cout << "Student [" << i << "]: ";
		cin >> grade; //The loop must be terminated when grade = '0'
		if(grade=='A'){ // if grade is A
			count[0]++;
		}else if(grade=='B'){ // if grade is B
			count[1]++;
		}else if(grade=='C'){
			count[2]++;
		}else if(grade=='D'){
			count[3]++;
		}else if(grade=='F'){
			count[4]++;
		}else{ // grade is wrong input
			if(grade!='0'){
				cout << "Wrong input. Please input again.\n";
				continue;
			}
		}
		i++;
	}while(grade!='0');
	
	
	cout << "In total " << i-2 << " students.\n";
	cout << "A = " << count[0] <<", ";
	cout << "B = " << count[1] <<", ";
	cout << "C = " << count[2] <<", ";
	cout << "D = " << count[3] <<", ";
	cout << "F = " << count[4];
	//	and so on ... for grade = C, D, F
	return 0;
}