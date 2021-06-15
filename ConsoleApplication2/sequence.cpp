#include "stdafx.h"
#include <iostream>
#include <conio.h>
using namespace std;

void sequence(int n){
	cout<<n<<" ";
	if(n==1)
		return;
	else{
		if(n%2==0)
			sequence(n/2);
		else
			sequence(3*n +1);
	}
}

int main(){
	sequence(10);
	_getch();
}