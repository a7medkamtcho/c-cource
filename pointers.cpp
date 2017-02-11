#include <cstdio>

using namespace std;

int main()
{
int x = 100;
int *p = &x;
int &y = x //ده لو انا عاوز اخلى متغير زى متغير
printf("x = %d \n" ,x);
printf("p = %d \n" , p);
printf("*p = %d \n" ,*p);
}
