
/*  include all header files here */
#include<stdio.h>

/*  main function start from here */
int main(){
	
	#ifdef TEST
	printf("TEST hello world\n");
	#endif	
	
	#ifdef TEST2
	printf("TEST2 hello world\n");	
	#endif
	
	#ifdef TEST3
	printf("TEST3 hello world\n");	
	#endif
}
