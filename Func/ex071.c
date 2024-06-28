#include<stdio.h>
int gokei(int a,int b,int c);
float heikin(int a, int b, int c);
main()
{
	int a, b, c, g ;
	float h;
	printf("®”‚ğ‚R‚Â“ü—Í");
	scanf("%d%d%d", &a, &b, &c);
	g = gokei(a, b, c);
	h = heikin(a, b, c );
	printf("‡Œv‚Í%d‚Å‚·\n•½‹Ï‚Í%.2f",g,h );
	
	
}
int gokei(int a, int b, int c)
{
	int g2;
	g2 = a + b + c;
	return(g2);

}
float heikin(int a, int b, int c)
{
	float h2;
	h2 = (a + b + c) / 3.0;
	return(h2);
}