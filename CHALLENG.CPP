#include<stdio.h>
#include<conio.h>
void main(){
int a[4][7],i,j,sum=0,count=0,mul,s[7],n,m;
clrscr();
printf("\n Enter the value of n");
scanf("%d",&n);
printf("\n Enter the value of m");
scanf("%d",&m);
printf("\n Enter the element in a grid");
for(i=0;i<n;i++){

	for(j=0;j<m;j++){
		scanf("%d",&a[i][j]);

	}
}

for(i=0;i<n;i++){
	for(j=0;j<m;j++){
		if(a[i][j]==1){
			count=count+1;
		}

	}

			s[i]=count;
			count=0;


}

for(i=0;i<n;i++){
mul=s[i]*s[i+1];
sum=sum+mul;

}
printf(" output is:-  %d",sum);
}
