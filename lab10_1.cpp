#include<iostream>
using namespace std;

int main(){
    char grade ;
	int count[5] = {0}; //Declare array count for counting A,B,C,D,F and initialize all element = 0
	int student = 1 ;
	cout << "Please input grade of each student (A-F) or input 0 to exit."<<endl;
	do{
		cout << "Student [" << student << "]: ";
		cin >> grade; 
		
		
		if(grade=='0') break;
		     //The loop must be terminated when grade = '0'
		
		if(grade=='A'){ 
		    count[0]++;
			student ++;//Do something
		}else if(grade=='B'){
		    count[1]++;// if grade is B
			student ++;//Do something
		//and so on ... for grade = C, D, F	
		}else if(grade=='C'){
		    count[2]++;
		    student ++;
		} else if (grade=='D'){
		    count[3]++;
		    student++;
		    
		}else if(grade=='F'){
		count[4]++;
		student++;
		}else{
		    cout<<"Wrong input. Please input again."<<endl ; // grade is wrong input
			//Do something
		} 
	}while(true);
	
	
	cout << "In total " << student -1<<  " students."<< endl;
	cout << "A = " << count[0] <<", ";
	cout << "B = " << count[1] <<", ";	
	cout << "C = " << count[2] <<", ";	
	cout << "D = " << count[3] <<", ";
	cout << "F = " << count[4] <<endl;
	
	return 0;
} 