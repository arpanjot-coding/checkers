#include <stdio.h>
#include <stdlib.h>
#include <termios.h>
#include <unistd.h>
#include "getch.h"

int xPos=0,yPos=0,score=0,randC=0,randR=0;
//Blocks location
int blockName[20][2]={{13,7},{13,17},{13,27},{13,37},{13,47},
                        {15,2},{15,12},{15,22},{15,32},{15,42},
                       {17,7},{17,17},{17,27},{17,37},{17,47},
                       {19,2},{19,12},{19,22},{19,32},{19,42}};




void playerComads()
{ 
  printf("Please enter block");
  int blockNumb=getch()-48;
  printf("Please enter block move (a or d) ");
  char blockMove=getch();
  
  
  //Left right comands
  switch (blockMove)
  {
  case 'a':
  blockName[blockNumb][0]=blockName[blockNumb][0]-2;//increment the coloums  
  //-5
  if((blockName[blockNumb][1]-5)%10==7)
  { 
    blockName[blockNumb][1]-=5;   
  }
  break;
  case 'd':
  blockName[blockNumb][0]=blockName[blockNumb][0]-2;//increment the coloums   
   //+5
   if((blockName[blockNumb][1]+5)%10==7)
  {
    blockName[blockNumb][1]+=5;
  }
  break;
  }





  
  if(blockName[blockNumb][0]>0&&blockName[blockNumb][0]<19&&blockName[blockNumb][1]>1&&blockName[blockNumb][1]<48)
  { 

  }

  //Player location 
  
}





void grid(void)
{

//DO NOT TOUCH
/*

//Appraoch n3
int j=0,cP=0,c=0; //cP=count player & c=count
for(int i=0;i<21;i++)
   {for(j=0;j<60;j++)
    { if(i%2==0)      
        {printf("*");}      
       if((i%2!=0&&c==5&&j<52)||(j==0))      
        {printf("*");c=0;}        
         if(i%2!=0&&c!=5&&j<52)
         {printf(" ");cP++;c++;}
    }
      printf("\n");
   }

*/





//Appraoch n3
int j=0,cP=0,c=0; //cP=count player & c=count asterisc
for(int i=0;i<21;i++)
   {for(j=0;j<60;j++)
    { if(i%2==0)  //condition to print streight    
        {printf("*");}  //*    
       
      if((i%2!=0&&c==5&&j<52)||(j==0))//Condition that prints asteris in the line of asteris    
        {printf("*");c=0;} //*       

      //I need to make some changes the print has to be subsituted with something else   
      if(i%2!=0&&c!=5&&j<52)//Condition that prints the white spaces
           {         
              if(cP==2)
               {  for(int aa=0;aa<20;aa++) //Loop iterating arr storing location
                  {if(blockName[aa][0]==i&&blockName[aa][1]==j) //using the coloum and rows method to compare the stored locatin in array
                   {printf("@");}
                  }//No else

               }else{printf(" ");}//" "
              
              if(cP==5){cP=0;}            
            cP++;c++;
           }      
    }
      cP=0;
      printf("\n");
      
   }

  




//Function END
}













int main() {
 printf("1\n\n");
grid();






}