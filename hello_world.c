#include<stdio.h>

int main(int argc, char * argv[]){

int a ,b;
a = 0;
b = 1;



for (int i = 0 ; i < 20 ; i++ ){
a = b;
while(a < b+i){

printf("(%d)",a-1);
a++;

}
printf("\n");
b++;
}




printf("\n");
printf("hello world");
printf("\nhello %s\n",argv[1]);

return 0;
}
