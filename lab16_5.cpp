#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int *,int *,int *,int *); 

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(&a,&b,&c,&d); 
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}

void shuffle(int *w,int *x,int *y,int *z){
    int i = rand()%3+1;
    int temp = 0;
    
    if( i == 1){
        temp = *w;
        *w = *x;
        *x = temp;
        temp = *y;
        *y = *z;
        *z = temp;
        
    } 
    else if( i == 2){
        temp = *w;
        *w = *z;
        *z = temp;
        temp = *y;
        *y = *x;
        *x = temp;
    }
    else if (i == 3 ){
        temp = *w;
        *w = *y;
        *y = temp;
        temp = *x;
        *x = *z;
        *z = temp;
		}
}