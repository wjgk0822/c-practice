#include <stdio.h>

typedef struct{
double real;
double imaginary;

} complex;

complex add_complex();

int main(void)
{
  complex a;
  complex b;
  complex c;

  a.real=1.0;
  a.imaginary=1.0;

  b.real=1.0;
  b.imaginary=1.0;

  c=add_complex(a,b);

  printf("Values of:\nReal: %.2f\nImaginary: %.2f\n", c.real, c.imaginary);

  return 0;
}

complex add_complex(complex a,complex b)
{
  complex c1;

  c1.real=a.real+b.real;
  c1.imaginary=b.imaginary+b.imaginary;

  return c1;
}

/*complex make_complex();

int main(void)
{
  complex c;

  c=make_complex();

  printf("Values of:\nReal:%.2f\nImaginary:%.2f\n",c.real,c.imaginary);

  return 0;
}

complex make_complex()
{
  complex c1;

  c1.real=1.0;
  c1.imaginary=2.0;

  return c1;
}
*/



/*struct complex{
double real;
double imaginary;
};

struct complex add_complex();

int main(void)
{
  struct complex a;
  struct complex b;
  struct complex c;

  a.real=1.0;
  a.imaginary=1.0;

  b.real=1.0;
  b.imaginary=1.0;

  c=add_complex(a,b);

  printf("Values of:\nReal: %.2f\nImaginary: %.2f\n",c.real,c.imaginary);

  return 0;
}

struct complex add_complex(struct complex a,struct complex b)
{
  struct complex c1;

  c1.real=a.real+b.real;
  c1.imaginary=b.imaginary+b.imaginary;

  return c1;
}
*/
/*struct complex make_complex();

int main(void)
{
  struct complex c;

  c=make_complex();

  printf("Values of:\nReal: %.2f\nImaginary: %.2f\n",c.real,c.imaginary);

  return 0;
}

struct complex make_complex()
{
  struct complex c1;

  c1.real=1.0;
  c1.imaginary=2.0;

  return c1;
}
*/