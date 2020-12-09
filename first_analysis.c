#include "extFunc.h"	

signed char a[3] = {1,};
signed char b[4] = {1,};

signed char firstAnalysis(void)
{
	signed char x = 1;
	signed char y;
	signed char res;
	signed char z;

	y = x + 5;

	z = extFunc(y);

	if (z <= 123)
	{
#ifdef FAULTY_CODE
		res = z + 5;
#else
		res = z + 4;
#endif
	}
	else
	{
		res = (z + 6);
		res = res / 2;
	}
	
	y = a[2]; 
	if(z = 6)
	{
		y = b[3];
	}
	else if(z == 7)
	{
		y = b[4];
	}

	return res/z;  
}

int main(void) {

	firstAnalysis();

}


