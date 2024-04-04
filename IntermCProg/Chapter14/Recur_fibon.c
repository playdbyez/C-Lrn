//The Fibonacci relationship is :
//                          f(n) = 1                   if n  is 1 or 2
//                          f(n) = f(n-1) + f(n-2)     if n > 2



//Recursive function
long int fib1(int n)
{
  if ((n== 1) || (n==2)){return 1;}
  return (fib1(n - 1) + fib1(n - 2));
}







//Iterative function
long int fib2(int n)
{
  if ((n== 1) || (n==2)) {return 1;}
  long int fna = 1;
  long int fnb = 1;
  long int fnc;
      while (n>2){
                  fnc = fnb+fna;
                  fna = fnb;
                  fnb = fnc;
        n--;
      }
  return fnc;
}
