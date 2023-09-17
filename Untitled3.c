#include <stdio.h>
void main ()
{
	float weight, shippingR, Tweight;
	char state, answer; 
	
	printf ("Enter state to post your parcel >> ");
	scanf ("%c", &state);
	
	printf("Enter weight of your parcel >> ");
	scanf("%f", &weight);
	
	do{
	
	if (state == 'w' ){
		
		
		if (weight <= 0.5){
		
		shippingR = weight * 8.2;
		printf ("Your shipping rate is RM %.2f", shippingR);
	}
		
		else if (weight >= 1.0) {
		
		shippingR = weight * 12.5;
		printf ("Your shipping rate is RM %.2f", shippingR);
	}
		
	
	    else if  (weight >= 2.0){
		
		shippingR = weight * 15.0;
		printf ("Your shipping rate is RM %.2f", shippingR);
		
	}
		else {
		
		Tweight = weight - 2;
		shippingR = (2*15.0)+ (Tweight * 15.0);
		printf ("Your shipping rate is RM %.2f\n", shippingR);
    }
} 
   printf("Repeat sending parcel to other state? >> ");
   printf ("\n Press Y for yes and N for no >> ");
   scanf("%c", &answer);
   
   } while (answer != 'n');
   
   
 return 0;
}
