#include <cstdio>

using namespace std;
int main()
{
float FL;
char CH;
short SH;
long int LI;
int IN;
IN = 100;
LI = 10000;
SH = 3335;
CH = 6;
FL = 5648;
printf("INT = %d" ,IN);
puts("");
printf("LONG INT = %ld" ,LI);
puts("");
printf("SHORT = %d" ,SH);
puts("");
printf("CHAR = %c" ,CH);
puts("");
printf("FLOAT = %f" ,FL);
puts("");
printf("float = %d" ,sizeof(float));
puts("byts");
printf("char = %d" ,sizeof(char));
puts("byts");
printf("short = %d" ,sizeof(short));
puts("byts");
printf("long int = %d" ,sizeof(long int));
puts("byts");
printf("int = %d" ,sizeof(int));
puts("byts");
return 0;
}
