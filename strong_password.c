#include<stdio.h>
#include<conio.h>
int main(){
	int i,len,upper=0,lower=0,num=0,special=0,z,y=0,ans;
	char password[50];
	printf("set a password in such a way that it contains an upper case letters ,lower case letters ,numbers\n ");
	printf("special characters and the length of the password should be greater than or equal to 8\n");
	scanf("%s",password);
	for(i=0;password[i]!=0;i++){
	}
	len=i;
	for(int j=0;j<len;j++){                                               
		if(password[j]>=65 && password[j]<=90){
			upper=1;
		}
		else if(password[j]>=97 && password[j]<=122){
			lower=1;
		}
		else if(password[j]>=48 && password[j]<=57){
			num=1;
		}
		else if((password[j]>=33 && password[j]<=46) || (password[j]>=91 && password[j]<=96) || 
		(password[j]>=123 && password[j]<=126) ||(password[j]>=58 && password[j]<=64)){
			special=1;
		}
	}
	if(len>=6){
		y=1;
	}
	ans=5-(upper+lower+num+special+y);
	if(ans==0){
		printf("it is a strong password");
	}
	else{
		printf("%d requirement missing",ans);	
	}
	return 0;
}
