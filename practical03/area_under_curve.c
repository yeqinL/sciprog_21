#include <stdio.h>
#include <math.h>

int main(void) {
	/* a = 0, b = pi/3 */
	// radias
	//double r = (M_PI*60.0)/180.0;
	//printf("pi/3 in radians = %f\n",r);
	/* 2 */
	double sum1;
	double pi = 3.1415926;
	sum1 = tan(0.0)+tan(pi/3.0);
	printf("tan0 + tanpi/3 = %.4f\n",sum1);
	printf("pi/3 = %.4f\n",pi/3.0);
	/* 3 4 5 */
        int N;
        N= 12;
	double distance = (pi/3.0)/((N)*1.0);
	double sum2 = 0;
	double rightpoint =0;
	for(int i = 0; i <N+1;i++){
		if(i==0 || i == N){
			sum2+=tan(rightpoint);
		}
		else{
			sum2+=2*tan(rightpoint);
		}
		if(i!=N){
			rightpoint += distance;
		}
	}
	sum2 = sum2* (pi/3.0/(2.0*N));
	printf("rightpoint = %.4f , area under the curve = %.4f\n",rightpoint, sum2);
	/*6 compare pi/3 with log(2)*/
	printf("log(2) = %.4f\n",log(2));
	return 0; 

}

