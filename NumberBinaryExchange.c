#include<stdio.h>
int main(){
	int temp,num,i,a[32];
	float flo;
	scanf("%d",&temp);
	if(temp==1){
		scanf("%d",&num);
		for(i=0;i<32;i++){
			a[31-i] = num&1;
		 	num >>= 1;
		 }
		 for(i=0;i<32;i++)
		 	printf("%d",a[i]);
	}else if(temp==2){
		scanf("%f",&flo);
		unsigned int floattoint = *((unsigned int*)&flo);
		for(i=0;i<32;i++){
			a[31-i] = floattoint&1;
			floattoint >>= 1;
		}
		for(i=0;i<32;i++){
			printf("%d",a[i]);
		}
	}
} 
