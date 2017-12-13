#include<stdio.h>

double fit(double in0,double from0,double to0,double fromFix0,double toFix0){
	double a1=from0;
	double a2=to0;
	double b1=1;
	double b2=1;
	double c1=fromFix0;
	double c2=toFix0;
	double den=(a2*b1-a1*b2);
	double res=0;

	if(den!=0){
		//a1x+b1y=c1
		//a2x+b2y=c2
		//regla de Cramer
		double x=(b1*c2-b2*c1)/den;
		double y=(a2*c1-a1*c2)/den;
		res=in0*x+y;
	
	}else{
	
		printf("error div 0");
	}
	return res;
}//fit(5, 1,100,1,100)

int main(){
	
	printf("%.1lf",fit(50,0,100, 0,1000));
	
}
