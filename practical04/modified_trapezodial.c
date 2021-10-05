#include <stdio.h>
#include <math.h>
int array[12];

float cal_rad(float arg){	
	return (M_PI*arg)/180.0;
}
float cal_area(float arg){
	return tan(arg); 	
}

int main(void) {
	int N =12,i;
	float a =0.0, b_deg = 60.0;
	
	float b_rad;
	b_rad = cal_rad(b_deg);
	printf("pi/3 in Radians = %f\n", b_rad);

	//tan0+tanpi/3
	float area;
	//trap
	for(i=0;i<=12;i++){
		if(i!=0 && i!=12){
			area += 2*cal_area(cal_rad((i)*5));
		}
		else{
			area +=cal_area(cal_rad(i*5));
		}
		array[i] = area;
		printf("New area at x%d = %f\n",i,array[i]);
	}
	
	float mult_rad = cal_rad(((b_deg-a)/(2*N)));
	area = mult_rad*area;
	//assessed result
	printf("\nTrapezodial result = %f\n",area);

	//real
	printf("Real result = %f\n",log(2.0));

	return 0; 

}


