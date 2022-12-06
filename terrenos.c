#include <stdio.h>

void main()
{
	
	int acum, acum1, acum2,i,n,j;
	printf("cuantos casos son\n");
	scanf("%d", &n);
	
	char caso [20][n];
	int dato[n][j];
	for (i=0;i<n;i++)
	{
	for (j=0;j<4;j++)
	{
	
printf("dame el dato %d del terreno %d \n",j+1, i+1);	
scanf("%d", &dato[j]);

}printf("dame el nombre del propietario\n");
scanf("%s", &caso[i]);

}
int acum3 [n];

	for (i=0;i<n;i++)
	{
		acum =0;
	for (j=0;j<4;j++)
	{
	acum =dato[j]+acum;
//printf("dame el dato %d del terreno %d \n",j+1, i+1);	
//scanf("%d", &dato[j]);

}//printf("dame el nombre del propietario\n");
//scanf("%s", &caso[i]);
acum3 [i] = acum;


//printf("propietario %s \n", caso[i+1]);
}

printf("propietario %s \n", caso[0]);


}
