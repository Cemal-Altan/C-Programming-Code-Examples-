#include <stdio.h>
#include <stdlib.h>
#include<string.h>

/* run this program using the console pauser or add your o wn getch, system("pause") or input loop */
void encryption(void);
void decryption(void);
int main(void) {
	
	printf("text encryption");
	printf("\n\n");
	int selection;
	printf("\n select the operation to be done, enter 1 for encryption and 2 for decryption  ");scanf("%d",&selection);
	
	if(selection==1)
	{
	encryption();
	}
	else
	decryption();
	return 0;
}
void encryption(void){
	char text[30];int length;
	int i,j=0,k=0,t;
	char characters[30]=  {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','y','z','_'};
	char location1[30]=       {'0','1','2','3','4','5','6','7','8','9','a','b','c','d','e','f','g','h','i','j','k','l','m','n','/'};
	char location2[30]=       {'9','z','8','y','7','x','6','w','5','v','4','u','3','t','2','s','1','r','o','q','p','0','a','b','/'};
	
	printf("\n enter text to be encrypted use _ for spaces \n ");scanf("%s",text);
    length=strlen(text);
	
	
	
	for(i=0;i<length;i++)
	{
		for(j=0;j<30;j++){
			if(text[i]==characters[j])
			{
				if((i+1)%2==0)
				printf("%c",location2[j]);
				else
				printf("%c",location1[j]);
			}
		}
	
	}
	return 0;
}

void decryption(void){
	char text[30];int length;
	int i,j=0,k=0,t;
	char characters[30]=  {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','y','z','_'};
	char location1[30]=       {'0','1','2','3','4','5','6','7','8','9','a','b','c','d','e','f','g','h','i','j','k','l','m','n','/'};
	char location2[30]=       {'9','z','8','y','7','x','6','w','5','v','4','u','3','t','2','s','1','r','o','q','p','0','a','b','/'};
	
	printf("\n enter text to be encrypted use _ for spaces \n ");scanf("%s",text);
    length=strlen(text);
    
    for(i=0;i<length;i++){
    	
    	if((i+1)%2==0){
    		for(j=0;j<30;j++){
    			if(text[i]==location2[j])
    			printf("%c",characters[j]);
			}
		}
		else
		for(j=0;j<30;j++){
			if(text[i]==location1[j])
			printf("%c",characters[j]);
		}
	}
	return 0;
}
