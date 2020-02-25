#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int *,int *, int *, int *); //Modify input arguments to pointer 

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(&a,&b,&c,&d); //Modify input arguments to pointer 
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}

//Write definition of shuffle() using pointer here 
void shuffle(int *r,int *s, int *t, int *u){
	int A[]= {*r,*s,*t,*u};
	for(int i = 0 ; i<10 ;i++){
		int n = rand()%4;
		int m = rand()%4;
		
		int temp = A[n];
		A[n] = A[m];
		A[m] = temp;
	}
	*r = A[0];
	*s = A[1];
	*t = A[2];
	*u = A[3];
	
}