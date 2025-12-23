#include <stdio.h>
#include <stdlib.h>
int grading(int a){
	char x;
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
	int a,b,c,d,i,x;
	scanf("%d",&a);	
	while(a != -1){
		printf("%d(%c)\n",a,grading(a));
		scanf("%d",&a);
	}
	return 0;
}
