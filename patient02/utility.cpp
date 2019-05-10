bool isOdd(int x) { 
	return (x%2);
}
bool isEven(int x) 
{
	return !(x%2);	
}
bool isPrime(int x) {
	if(x <= 1)
		return false;

       for(int i = 2; i < x; i++)
       {
		if(x%i == 0)
		{
			return false;
		}
       }	       
       return true;
}
