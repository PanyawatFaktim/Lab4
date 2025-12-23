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
	scanf("%d",&b);
	for(i=0;i<b;i++){
		scanf("%d",&a);
		printf("%d(%c)\n",a,grading(a));
	}
	return 0;
}
