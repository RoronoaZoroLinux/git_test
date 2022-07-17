#include<stdio.h>

int main(int argc, char * argv[]){


printf("\n");
printf("hello world");
printf("\nhello %s\n",argv[1]);

int sayi = 0;
int loop = 1;
int limit = 0;

limitistoosmal:
printf("Write a number (recommended 10 - 100 ): ");
scanf("%d",&limit);

if(limit < 0){
printf("\nyou can't enter a negative value");
printf("\n");
goto limitistoosmal;

}

printf("\n");

for (int i = 0; sayi < limit ; i++){

    while(loop < i){
    printf("[ %d ]",sayi);
    sayi++;
    loop++;
    }
    printf("\n");
    loop = 0;
}




return 0;
}



