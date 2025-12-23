#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,a,b,c;
	char k;
	scanf("%c %d %d",&k,&a,&b);
	for(i=0;i<b;i++){
		for(c=0;c<a;c++){
			printf("%c",k);
		}
		printf("\n");
	}
	return 0;
}
