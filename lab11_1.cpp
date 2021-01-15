#include<iostream>
using namespace std;

long long int fibonacci(long double x);

int main(){
	cout << fibonacci(50);
    return 0; 
}

long long int fibonacci(long double x){
    if(x == 0){
        return 0;
    }
    else if(x == 1){
        return 1;
    }
    else if(x > 1){
        return fibonacci(x - 1) + fibonacci(x - 2);
    }
    else{
    	return 0;
	}
}



