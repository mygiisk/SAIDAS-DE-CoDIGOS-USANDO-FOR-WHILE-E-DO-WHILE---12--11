#include<stdio.h>

int i;
int x;
int y= 1;
int z = 10;
int w = 10;
int c = 10;
int main() {

printf("\n-----------------FOR-----------------");

	for( i = 1; i <=10; i ++){
		printf("\n%d", i);
	}
	
		printf("\n");
	
	for( x = 10; x >=1; x --){
		printf("\n%d", x);
	}
	
	
printf("\n----------------WHILE----------------");


	while (y <= 10){
		printf("\n%d", y);
		y++;
	}
	
	printf("\n");

	while (z >= 1){
		printf("\n%d", z);
		z--;
	}
	
	printf("\n-----------------DO WHILE----------------");
	
do {
    printf("\n%d", w);
    w--;
}
while (w >= 1);

	printf("\n");
	
do {
    printf("\n%d", c);
    c--;
}
while (c >= 1);


	return 0;
}


