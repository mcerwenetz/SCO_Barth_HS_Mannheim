#include "lib.h"
#include <stdio.h>
#include <math.h>


double heron(double x, double eps){
	double initial = (1 + x) / 2;
	double prev = initial;
	double curr =  (prev + (x/prev))/2;
	//printf("%f, %f", (prev-curr), eps);
	if (fabs(curr-prev) < eps){
		return curr;
	}
	else
	{
		while(1)
		{
		prev = curr;
		curr =  (prev + (x/prev))/2;
			if (fabs(prev-curr) < eps){
				return curr;
			}	
		}
	}
}
