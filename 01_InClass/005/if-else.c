#include <stdio.h>

int main(void)
{
	int testValue = 11;
	int limitValue = 3;
	if(testValue >= limitValue ){
		printf("%d is bigger or equal to %d", testValue, limitValue);
	}
	else{
		printf("%d is less than %d", testValue, limitValue);
	}

return 0;
}
