#include<stdio.h>

float fit(float in0,float from0,float to0,float fromFix0,float toFix0){
	float a1=from0;
	float a2=to0;
	float b1=1;
	float b2=1;
	float c1=fromFix0;
	float c2=toFix0;
	float den=(a2*b1-a1*b2);
	float res=0;

	if(den!=0){
		//a1x+b1y=c1
		//a2x+b2y=c2
		//cramer
		float x=(b1*c2-b2*c1)/den;
		float y=(a2*c1-a1*c2)/den;
		res=in0*x+y;
	
	}else{
	
		printf("error div 0");
	}
	return res;
}//fit(5, 1,100,1,100)

int main(){
	
	printf("%f",fit(50,0,100, 0,1000));
	
}