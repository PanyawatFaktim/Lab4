#include <stdio.h>
#include <stdlib.h>
int grading(int a){
	char x;
	int xA,xB,xC,xD,xF;
	if(a>=0){
		if(a<=100){
			if (a>=50) {		
				if(a>=60){	
					if(a>=70){						
						if(a>=80){							
							return(x = 'A');
						}
					else{
						return(x = 'B');
					}	
					}
				else{
					return(x = 'C');
				}
				}
				else{
					return(x = 'D');
				} 
			}
			else{
				return(x = 'F');
			}
		}

	}
}
int main() {
	int a,b,c,d,i,x,grade;
	int xA,xB,xC,xD,xF;
	scanf("%d",&a);	
	while(a != -1){
		printf("%d(%c)\n",a,grading(a));
		grade = grading(a);
		scanf("%d",&a);
		switch(grade){
			case 'A':xA++;break;
			case 'B':xB++;break;
			case 'C':xC++;break;
			case 'D':xD++;break;
			case 'F':xF++;break;
		}
	}
	printf("A(%d)\n",xA);
	printf("B(%d)\n",xB);
	printf("C(%d)\n",xC);
	printf("D(%d)\n",xD);
	printf("F(%d)\n",xF);
	return 0;
}
