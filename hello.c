#include <stdio.h>

int main()
{
	float one = 4/3;
	float two = 4%3;
	float three = 4.0/3;
	printf("value = %f. \n",one);
  printf("value = %f. \n",two);
  printf("value = %f. \n",three);
	printf("%d\n",(2==3));
	printf("%d\n",(2==2));

	if (3>2) {
		printf("%s\n", "True\n");
	}else{
		printf("%s\n", "False\n" );
	}

	if (3<2) {
		printf("%s\n", "True\n");
	}else{
		printf("%s\n", "False\n" );
	}

	if (3-(2+1)) {
		printf("%s\n", "True\n");
	}else{
		printf("%s\n", "False\n" );
	}

	if ('d') {
		printf("%s\n", "True\n");
	}else{
		printf("%s\n", "False\n" );
	}
	if (9%3) {
		printf("%s\n", "True\n");
	}else{
		printf("%s\n", "False\n" );
	}
	if ((3>2)-1) {
		printf("%s\n", "True\n");
	}else{
		printf("%s\n", "False\n" );
	}
	return 0;
}
