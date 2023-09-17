#include <stdio.h>

int main () 
{
	int weight;
	char choice = 'Y', destination;
	float weightextra, rateA, rateB, rateC, totalrate = 0.0;

	do 
	{
		printf ("\n\nA = West Malaysia");
		printf ("\nB = Sabah");
		printf ("\nC = Sarawak");
		
		printf ("\n\nEnter destination (A @ B @ C) : "); 
		scanf (" %c", &destination);
		
		printf ("Enter weight : ");
		scanf ("%d", &weight);
		
		
		if (destination == 'A' || destination == 'a') {
		
			if (weight>=0 && weight<=0.5) {
			rateA = 8.2;
			printf ("West Malaysia = RM8.20", rateA);		
			}
			else if (weight>=0.51 && weight<=1.00) {
			rateA = 12.5;
			printf ("West Malaysia = RM12.50", rateA);
			}
			else if (weight>=1.01 && weight<=2.00) {
			rateA = 15;
			printf ("West Malaysia = RM15.00", rateA);
			}
			else {
			weightextra = weight-2.0;
			rateA = 15+(weightextra*1.5);
			printf ("Extra rate for West Malaysia = RM%.2f", rateA);
			}
			
		}
		else if (destination == 'B' || destination == 'b') {
			
			if (weight>=0 && weight<=0.5) {
			rateB = 15;
			printf ("Sabah = RM15.00", rateB);
			}
			else if (weight>=0.51 && weight<=1.00) {
			rateB = 18.9;
			printf ("Sabah = RM18.90", rateB);
			}
			else if (weight>=1.01 && weight<=2.00) {
			rateB = 21;
			printf ("Sabah = RM21.00", rateB);
			}
			else {
			weightextra = weight-2.0;
			rateB = 21+(weightextra*2.50);
			printf ("Extra rate for Sabah = RM%.2f", rateB);	
			}
				
		}
		else if (destination == 'C' || destination == 'c') {
			
			if (weight>=0 && weight<=0.5) {
			rateC = 13;
			printf ("Sarawak = RM13.00", rateC);
			}
			else if (weight>=0.51 && weight<=1.00) {
			rateC = 17.2;
			printf ("Sarawak = RM17.20", rateC);
			}
			else if (weight>=1.01 && weight<=2.00) {
			rateC = 20;
			printf ("Sarawak = RM20.00", rateC);	
			}
			else {
			weightextra = weight-2.0;
			rateC = 20+(weightextra*2.00);
			printf ("Extra rate for Sarawak = RM%.2f", rateC);
			}	
			
		}
		else {
			printf ("Destination is invalid.");
			
		}
		
		printf ("\n\nContinue to send to other destination?");
		printf ("\nY for YES & N for NO >> ");
		scanf ("%s", &choice);
		
	}
	while (choice != 'N');	
	totalrate = rateA+rateB+rateC;
	printf ("\nTotal rate shipping for all parcel is RM%.2f", totalrate);
 	printf ("\n\nThank you, hope you can consider your choice again.");
 	
 	return 0;
}
