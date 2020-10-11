#include <stdio.h>
int main(void) 
{
 int i, j;
 int temp[7][2];
 //int temp[7][2]={40,30,39,28,38,27,37,26,36,25,35,24,42,23};
 int Max, Min;
 int midH[7], midL[7];
 float SumH, SumL;
 float AvgH, AvgL;
 char name[100];
   
 
 printf("Enter your name : ");
 scanf(" %s",name);
 printf("Hello %s\n",name);
 char day[7][20] =
        {
           "Monday    :",
           "Tuesday   :",
           "Wednesday :",
           "Thursday  :",
           "Friday    :",
           "Saturday  :",
           "Sunday    :"
        };
 
   
printf("******************************** \n");
  for(i=0; i<7; i++){
      for(j=0;j<2;j++){
        if(j==0){
         printf("High Temp %s%d%d ",day[i],i,j);
         scanf("%d", &temp[i][j]);
         midH[i]= temp[i][j];
         
          }
         else{
         printf("Low  Temp %s%d%d ",day[i],i,j);
         scanf("%d", &temp[i][j]);
         midL[i] = temp[i][j];
         
         }
      }
    }
  
printf("******************************** \n");
 
  for (i=0; i<7; i++)
    for (j=0; j<2; j++){
        if(temp[i][j]> Max)
         Max= temp[i][j];
         if(temp[i][j]<Min)
         Min= temp[i][j]; 
          }



  SumH=temp[0][0]+temp[1][0]+temp[2][0]+temp[3][0]+temp[4][0]+temp[5][0]+temp[6][0];
  SumL=(temp[0][1]+temp[1][1]+temp[2][1]+temp[3][1]+temp[4][1]+temp[5][1]+temp[6][1]);
  AvgH=SumH/7;
  AvgL=SumL/7;
  
  printf("Average High Temperature is %d C\n",Max);
  printf("Average Low  Temperature is %d C\n",Min);

  printf("Average High Temperature is %f C\n",AvgH);
  printf("Average Low  Temperature is %f C\n",AvgL);
   
   int swap;
for(i=0; i<7; i++){
		for(j=i+1; j<7; j++){
			if(midH[i]>midH[j]) //Swap
				swap = midH[i];
				midH[i] = midH[j];
				midH[j] = swap;
			
		}
	}
  

  //High temp[0][0] temp[1][0] temp[2][0] temp[3][0] temp[4][0] temp[5][0] temp[6][0] 
  //low  temp[0][1] temp[1][1] temp[2][1] temp[3][1] temp[4][1] temp[5][1] temp[6][1]

 
  return 0;
}
