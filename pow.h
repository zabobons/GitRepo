double pow(double a,unsigned int b)
{
	double result = 1;
	unsigned int i ;
	for(i = 0;i<b;i++)
	{
		result *=a;
	}
	return result;
}
