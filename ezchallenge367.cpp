#include <iostream>
#include <cstdlib>
#include <math.h>

using namespace std;
double fact(int a);
int main(int argc, char *argv[]){
	if (argc>2){
		return 0;
	}
	int num =atoi(argv[1]);
	cout<<num<<endl;
	double result=fact(num);
	double sum;
	cout<<"factorial of "<<num<<" is "<<result<<endl;
	double f1 = 0.0;
	for (int k = 0;k<=num;k++){
		f1+=(pow(-1,k))/(1.0*fact(k));
		cout<<f1<<endl;
	}
	result*=f1;
	cout<<result<<endl;
	return 0;
}

double fact(int a){
	if (a<0){
		cout<<"error"<<endl;
		return 0;
	} else if (a==0){
		return 1;
	} else{
		int result = 1;
		for (int y=1;y<=a;y++){
			result *= y;
		}
		cout<<result<<endl;
		return 1.0*result;
	}

}

//note for !14 Answer given was 32071101049 where I got 4.70498e+008