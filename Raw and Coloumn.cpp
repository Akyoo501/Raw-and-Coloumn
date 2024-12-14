#include <iostream>
using namespace std;

int main(){
	int product[5][3]={
	{01,200,3000},
	{02,500,6000},
	{03,800,9000}     };
	
	int r,c;
	for(r=0; r<3; r++){
		
		for(c=0; c<3; c++){
			cout<<product[r][c]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
