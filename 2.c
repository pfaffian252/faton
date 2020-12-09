#include <stdio.h>
#include <stdlib.h>
const int n=4;
int NOD(int n1, int n2)
{
  int div;
  if (n1 == n2)
    return n1;
  int d = n1 - n2;
  if (d < 0)
  {
    d = -d;
    div = NOD(n1, d);
  }
  else
  {
    div = NOD(n2, d);
  }
  return div;
}
void cd(int *a,int *b)
{
    int p=NOD(*a,*b);
    *a=*a/p;
    *b=*b/p;
}
int main ()
{
    int a, b, c, d, p, q;
    printf("enter four numbers (two fractions 1/2 3/4)\n");
    scanf("%d%d%d%d", &a, &b, &c, &d);
    p=a*d+c*b;
    q=b*d;
    cd(&p, &q);
    printf("sum of fractions\n");
    printf("%d/%d", p, q);
   return 0;

}
