#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int &,int &,int &,int &);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(a,b,c,d);
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}

void shuffle(int &a,int &b,int &c,int &d){
    int i = rand()%3+1;
    int temp;
    
    if( i == 1){
        temp = a;
        a = b;
        b = temp;
        temp = c;
        c = d;
        d = temp;
        
    } 
    else if( i == 2){
        temp = a;
        a = d;
        d = temp;
        temp = c;
        c = b;
        b = temp;
    }
    else if (i == 3 ){
        temp = a;
        a = c;
        c = temp;
        temp = b;
        b = d;
        d = temp;}

}