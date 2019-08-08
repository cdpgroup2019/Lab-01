#include <stdio.h>
#include <stdlib.h>


int x;  
int y=5;
void fun();

int main(int argc, char const *argv[])
{
	fun();
	return 0;
}

void fun(){
   int c;
   char *name;
   name=(char*)malloc(2*sizeof(char));
   printf("Main @ %lx\n",(long unsigned int)&main);
   printf("Recursive @ %lx\n",(long unsigned int)&fun);
   printf("Uninilized G @ %lx\n",(long unsigned int)&x);
   printf("Initialized G @ %lx\n",(long unsigned int)&y);
   printf("Local @ %lx\n",(long unsigned int)&c);
   printf("Malloc @ %lx\n",(long unsigned int)&name);

   fun();
}
