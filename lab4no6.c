#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,a,b,c;
	scanf("%d %d",&a,&b);
	for(i=0;i<b;i++){
		for(c=0;c<b;c++){
			printf("%d",a);
		}
		printf("\n");
	}
	return 0;
}
