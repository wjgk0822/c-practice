#include <stdio.h>

struct fraction
{
int numerator;
int denominator;
};

struct fraction reduce_fraction(struct fraction f);
struct fraction add_fraction(struct fraction f1, struct fraction f2);
struct fraction subtract_fraction(struct fraction f1, struct fraction f2);
struct fraction multiply_fraction(struct fraction f1, struct fraction f2);
struct fraction divide_fraction(struct fraction f1, struct fraction f2);

int main(void)
{
  struct fraction f;
  struct fraction first;
  struct fraction second;

  printf("Enter a fraction: ");
  scanf(" %d/%d",&first.numerator, &first.denominator);

  printf("Enter a second fraction: ");
  scanf(" %d/%d",&second.numerator,&second.denominator);

  f=add_fraction(first, second);
  printf("Added: %d/%d\n",f.numerator,f.denominator);

  f=subtract_fraction(first, second);
  printf("Subtracted: %d/%d\n",f.numerator,f.denominator);

  f=multiply_fraction(first, second);
  printf("Multiplied: %d/%d\n",f.numerator,f.denominator);

  f=divide_fraction(first, second);
  printf("Divided: %d/%d\n",f.numerator,f.denominator);

  return 0;
}

struct fraction reduce_fraction(struct fraction f)
{
  int remainder;
  int n=f.numerator,d=f.denominator;

  while(n%d!=0 && n!=d)
    {
      remainder=d;
      d=n%d;
      n=remainder;
    }

  f.numerator/=d;
  f.denominator/=d;

  return f;
}

struct fraction add_fraction(struct fraction f1, struct fraction f2)
{
  struct fraction f;

  if(f1.denominator==f2.denominator)
  {
    f.numerator=f1.numerator+f2.denominator;
    f.denominator=f1.denominator;
  }
  else
  {
    f.numerator=f1.numerator*f2.denominator+f2.numerator*f1.denominator;
    f.denominator=f1.denominator*f2.denominator;
  }

  f=reduce_fraction(f);

  return f;
}

struct fraction subtract_fraction(struct fraction f1, struct fraction f2)
{
  struct fraction f;

  if(f1.denominator==f2.denominator)
  {
    f.numerator=f1.numerator-f2.numerator;
    f.denominator=f1.denominator;
  }
  else
  {
    f.numerator=f1.numerator*f2.denominator-f2.numerator*f1.denominator;
    f.denominator=f1.denominator*f2.denominator;
  }

  f=reduce_fraction(f);

  return f;
}

struct fraction multiply_fraction(struct fraction f1, struct fraction f2)
{
  struct fraction f;

  f.numerator=f1.numerator*f2.denominator;
  f.denominator=f1.denominator*f2.denominator; 

  f=reduce_fraction(f);

  return f;
}

struct fraction divide_fraction(struct fraction f1, struct fraction f2)
{
  struct fraction f;

  f.numerator=f1.numerator*f2.denominator;
  f.denominator=f1.denominator*f2.numerator;

  f=reduce_fraction(f);

  return f;
}

/*
struct time
{
int hours;
int minutes;
int seconds;
};

struct time split_time(long total_seconds);

int main(void)
{
  struct time t;
  int total_seconds;

  printf("Enter number of seconds since midnight: ");
  scanf("%d",&total_seconds);

  t=split_time(total_seconds);

  printf("Equivalent in hours:%d, minutes:%d, and seconds:%d.\n",t.hours,t.minutes,t.seconds);

  return 0;
}

struct time split_time(long total_seconds)
{
  struct time t1;

  t1.hours=total_seconds/3600;
  t1.minutes=(total_seconds%3600)/60;
  t1.seconds=((total_seconds%3600)/60)%60;

  return t1;
}
*/

/*
struct date
{
int month;
int day;
int year;
};

int day_of_year(struct date d);

int main(void)
{
  struct date d;

  d.day=7;
  d.month=11;
  d.year=2008;

  printf("%d.%d.%d was %d day of the year.\n", d.month, d.day, d.year, day_of_year(d));

    return 0;

  
}

int day_of_year(struct date d){
  int res=0,i;
  const int days_month[12]={31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  if(d.month>1&&((d.year%4==0&&d.year%100!=0)||d.year%400==0))
    res++;

  for(i=0;i<d.month;i++)
    res+=days_month[i];
  return res+d.day;
}
*/
/*
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
*/

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