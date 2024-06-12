/*
zarifi mohamed abd elhadi.                                   groupe2.
sadoune fadjr.
*/
#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
#include<stdbool.h>
#include<time.h>
int t,l,m,p,x,n,p1,p2,p3,p4,a,i,i2,j,n,win,r,y,v[10][10],stg1[1][1],stg2[5],stg3[5],ck[25],ck1,ii,jj,mmn,xx,pp,xxx,ppp,i1,j2,nom,r1,r2,check1,check2,ii1,jj1,jj2,condi1,condi2,jj3,jj4,w;
int interme[10],q,diffuclty;
void SetColorAndBackground(int ForgC, int BackC);
//this function will be very handy in our programme
   int swap(int *a,int *b){
   t=*a;
   *a=*b;
   *b=t;
   }
// this function was made to a specified operation in this programme
   int swap2(int *c,int *d,int *e,int *f){
   p1=*c;
   p3=*d;
   p4=*e;
   p2=*f;
   *d=p1;
   *e=p3;
   *f=p4;
   *c=p2;
   }
int main(){
 SetColorAndBackground(2,0);
//this is somthing we add to go wit the vibe of the game
printf("-------------------------*WELCOME TO THIS GAME*-----------------------\a\n");
printf("if you want help press 1 if no press 0:");
// here we provide the player a choice to read a tutorial of the game or no
scanf("%d",&w);
sleep(1);
switch (w){
case 1:
printf("_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _  _ _ _ _ _ __ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ \n");
       printf("|");
       printf("|now you are playing against the computer\n"); printf(" \t  \t  \n         \n \t  \t");
      printf("\n");
       printf("|to win in this game you must realize the same sum of three lines or in two lines and one column or in two lines and one diagonal \n");
        printf("|you can flip the matrix 90 degree by pressing 0 and switch two elements of the matrix by pressing 1.\n");
       printf("|be carfull!\n");
       printf("|\n");
      printf("|\n");
       printf("|\n");
       break;
 case 0:
 break;}

//this one for the diffuculty
printf("pls choose a diffeclty by nmber\n1=easy \n2=normal\n3=hard\n");
scanf("%d",&diffuclty);
while(diffuclty<1||diffuclty>3){
printf("pls choose a number from this 3\n1=easy \n2=normal\n3=hard\n");
scanf("%d",&diffuclty);
}
printf("|start...\n");
sleep(1);
win=1;

//the random numbers layout
ck1=0;
 int nn=25,ct,r[25];
  bool arr[100]={0};
  srand(time(NULL));
  for(ct=0;ct<nn;++ct)
  {
    r[ct]=(rand()%25)+1;
    if(!arr[r[ct]])
   r[ct];
    else
      ct--;
    arr[r[ct]]=1;
  }
  ct=0;
for(i=0;i<5;i++){
  for(j=0;j<5;j++){
    v[i][j]=r[ct];
     ct++;
     }
   }

    // this one is aa bite complicated but what im trying to do here is calclulate the somme of every line and put it in a spot
      for(ii=0;ii<=4;ii++){
                stg2[ii]=v[ii][0]+v[ii][1]+v[ii][2]+v[ii][3]+v[ii][4];
      }
    //im calclulating the somme of every colimn and put it in a spot in another matrix
      for(jj=0;jj<=4;jj++){
                stg3[jj]=v[0][jj]+v[1][jj]+v[2][jj]+v[3][jj]+v[4][jj];
      }
    // this two here are calculated because of a problem i had in the previos step
      stg1[1][1]=v[0][0]+v[1][1]+v[2][2]+v[3][3]+v[4][4];
     j = (i+1);
     q=0;
      for(i=0;i<5;i++){
       for(j=(i+1);j<5;j++){
        if(stg2[i]==stg2[j]){
        interme[q]=stg2[i];
        q++;
        break;
        }
        if(stg3[i]==stg3[j] || stg3[i]==stg1[1][1]){
        interme[q]=stg3[i];
        q++;
        break;
        }
      }
    }
      for(i=0;i<5;i++){
       for(j=0;j<5;j++){
         if(stg2[i]==stg3[j] || stg2[i]==stg1[1][1]){
         interme[q]=stg2[i];
        q++;
        break;
        }
       }
      }


       for(i=0;i<q;i++){
       SetColorAndBackground(0,4);
       printf("you can't win using this number %d\n",interme[i]);

      }

     SetColorAndBackground(2,0);


            printf("GO!!!\n");



    // the interface of the game
    // a bit complicated but it do the job
SetColorAndBackground(0,15);
printf("    0   1   2   3   4      \n");
 printf("  ---------------------");
 SetColorAndBackground(0,4);printf("    \n");
 SetColorAndBackground(0,15);
 printf("0 |%2d |%2d |%2d |%2d |%2d |",v[0][0],v[0][1],v[0][2],v[0][3],v[0][4]);
SetColorAndBackground(0,4);printf("%3d \n",stg2[0]);
SetColorAndBackground(0,15);
 printf("  ---------------------");
  SetColorAndBackground(0,4);printf("    \n");
  SetColorAndBackground(0,15);
 printf("1 |%2d |%2d |%2d |%2d |%2d |",v[1][0],v[1][1],v[1][2],v[1][3],v[1][4]);
 SetColorAndBackground(0,4);printf("%3d \n",stg2[1]);
 SetColorAndBackground(0,15);
  printf("  ---------------------");
   SetColorAndBackground(0,4);printf("    \n");
   SetColorAndBackground(0,15);
 printf("2 |%2d |%2d |%2d |%2d |%2d |",v[2][0],v[2][1],v[2][2],v[2][3],v[2][4]);
 SetColorAndBackground(0,4);printf("%3d \n",stg2[2]);
 SetColorAndBackground(0,15);
  printf("  ---------------------");
   SetColorAndBackground(0,4);printf("    \n");
   SetColorAndBackground(0,15);
 printf("3 |%2d |%2d |%2d |%2d |%2d |",v[3][0],v[3][1],v[3][2],v[3][3],v[3][4]);
 SetColorAndBackground(0,4);printf("%3d \n",stg2[3]);
 SetColorAndBackground(0,15);
  printf("  ---------------------");
   SetColorAndBackground(0,4);printf("    \n");
   SetColorAndBackground(0,15);
 printf("4 |%2d |%2d |%2d |%2d |%2d |",v[4][0],v[4][1],v[4][2],v[4][3],v[4][4]);
 SetColorAndBackground(0,4);printf("%3d \n",stg2[4]);
 SetColorAndBackground(0,15);
  printf("  ---------------------");
   SetColorAndBackground(0,4);printf("    \n");
 printf("  %3d %3d %3d %3d %3d %3d  \n",stg3[0],stg3[1],stg3[2],stg3[3],stg3[4],stg1[1][1]);
  SetColorAndBackground(2,0);
    // the game continuiti infinite loop
        t=1;
        while(l!=win){

 //my choice
 // this one give you a choice
 SetColorAndBackground(2,0);
 printf ("\n pls chose between 1 and 0 \n");
 printf ("1 will let you choose two celles two swap them and 0 will flip the matrix by 90 degree\n");
 scanf("%d",&a);
 if(a!=0&&a!=1){
  // this one for the player who don't play by the roles
   while(a!=0&&a!=1 ){
   printf ("pls chose between 1 and 0\n");
   printf("%d\n",t);
   scanf("%d",&a);
   }
   }
    if(a==check2&&check2==0){
     printf("you can't flip the matrix again the ps already did\nyou will play the second option");
     a=1;
     }
     printf("my choice=%d \n",a);
  //the choice execution

switch (a){
// case 0 is the 90 degree swap
case 0:
   j=1;
    x=3;
 for(i=1;i<4;i++){
      v[0][i];
      v[i][4];
      //
      v[j][4];
      v[4][x];
      //
      v[4][x];
      v[x][0];
      //
      v[x][0];
      v[0][i];

      swap(&v[4][x],&v[x][0]);
      swap(&v[j][4],&v[4][x]);
      swap(&v[0][i],&v[i][4]);
      j++;
      x--;
      }
 swap2(&v[0][4],&v[4][4],&v[4][0],&v[0][0]);
 swap2(&v[3][1],&v[1][1],&v[1][3],&v[3][3]);
 swap2(&v[1][2],&v[2][3],&v[3][2],&v[2][1]);

 break;
 //case one is the spot chosse part
case 1:
// same as the first turn
     printf("put first cell cordinates\n");
     printf("line number:");
     scanf("%d",&i1);
     printf("column number:");
     scanf("%d",&j2);
     printf("put second cell cordinates\n");
     printf("line number:");
     scanf("%d",&x);
     printf("column number:");
     scanf("%d",&p);

     while(i1==xx&&j2==pp&&x==xxx&& p == ppp || i1==x && j2==p || i1>4||j2>4||x>4||p>4){
     printf("you can't play the same as the pc did choose again or choose the same place twice or choose a place out of the range\n");
     printf("put first cell cordinates\n");
     printf("line number:");
     scanf("%d",&i1);
     printf("column number:");
     scanf("%d",&j2);
     printf("put second cell cordinates\n");
     printf("line number:");
     scanf("%d",&x);
     printf("column number:");
     scanf("%d",&p);
     }

     swap(&v[i1][j2],&v[x][p]);
     break;
     }
    // same as the first turn
     // this one is aa bite complicated but what im trying to do here is calclulate the somme of every line and put it in a spot
      for(ii=0;ii<=4;ii++){
                stg2[ii]=v[ii][0]+v[ii][1]+v[ii][2]+v[ii][3]+v[ii][4];
      }
      for(jj=0;jj<=4;jj++){
                stg3[jj]=v[0][jj]+v[1][jj]+v[2][jj]+v[3][jj]+v[4][jj];
      }
      stg1[1][1]=v[0][0]+v[1][1]+v[2][2]+v[3][3]+v[4][4];

 // this is the game logic this part is explained in the essay
   for(ii=0;(ii<5)&&(l!=1);ii++){

        for(jj=0;(jj<5)&&(l!=1);jj++){
           if(stg2[ii]==stg3[jj]){
              for(mmn=0;mmn<5;mmn++){
                  if(stg2[mmn]==stg3[jj]&& mmn!=ii){
                  for(i=0;i<=q;i++){
                  if(interme[i]==stg2[ii]){
                  w=5;
                  }
                  }
                  if(w==5){
                  break;
                  }
                  printf("you win\n");
                  printf("line[%d]=%d,column[%d]=%d,line[%d]=%d\n",ii,stg2[ii],jj,stg3[jj],mmn,stg2[mmn]);
                  l=1;
                  break;
                  }

              }
            }
         }
}
w=0;
//

 for(ii=0;(ii<5)&&(l!=1);ii++){

        for(jj=0;(jj<5)&&(l!=1);jj++){
           if(stg2[ii]==stg2[jj]&& ii!=jj){
              for(mmn=0;(mmn<5);mmn++){
                  if(stg2[mmn]==stg2[jj]&&mmn!=ii&&mmn!=jj){
                   for(i=0;i<=q;i++){
                  if(interme[i]==stg2[ii]){
                  w=5;
                  }
                  }
                  if(w==5){
                  break;
                  }
                  printf("you win\n");
                  printf("line[%d]=%d,line[%d]=%d,line[%d]=%d\n",ii,stg2[ii],jj,stg2[jj],mmn,stg2[mmn]);
                  l=1;
                  break;
                  }

              }

            }

         }

}
w=0;
//

       for(ii=0;(ii<5)&&(l!=1);ii++){
        if(stg2[ii]==stg1[1][1]){
         for(mmn=0;(mmn<5);mmn++){
          if(stg2[mmn]==stg1[1][1]&&ii!=mmn){
          for(i=0;i<=q;i++){
                  if(interme[i]==stg2[ii]){
                  w=5;
                  }
                  }
                  if(w==5){
                  break;
                  }
          printf("you win\n");
          printf("line[%d]=%d,line[%d]=%d,diagonal=%d\n",ii,stg2[ii],mmn,stg2[mmn],stg1[1][1]);
          l=1;
          break;
          }
          }
        }
       }
  w=0;
   //the second matrix interface was put to see you did  changed and played
 SetColorAndBackground(0,15);
printf("    0   1   2   3   4      \n");
 printf("  ---------------------");
 SetColorAndBackground(0,4);printf("    \n");
 SetColorAndBackground(0,15);
 printf("0 |%2d |%2d |%2d |%2d |%2d |",v[0][0],v[0][1],v[0][2],v[0][3],v[0][4]);
SetColorAndBackground(0,4);printf("%3d \n",stg2[0]);
SetColorAndBackground(0,15);
 printf("  ---------------------");
  SetColorAndBackground(0,4);printf("    \n");
  SetColorAndBackground(0,15);
 printf("1 |%2d |%2d |%2d |%2d |%2d |",v[1][0],v[1][1],v[1][2],v[1][3],v[1][4]);
 SetColorAndBackground(0,4);printf("%3d \n",stg2[1]);
 SetColorAndBackground(0,15);
  printf("  ---------------------");
   SetColorAndBackground(0,4);printf("    \n");
   SetColorAndBackground(0,15);
 printf("2 |%2d |%2d |%2d |%2d |%2d |",v[2][0],v[2][1],v[2][2],v[2][3],v[2][4]);
 SetColorAndBackground(0,4);printf("%3d \n",stg2[2]);
 SetColorAndBackground(0,15);
  printf("  ---------------------");
   SetColorAndBackground(0,4);printf("    \n");
   SetColorAndBackground(0,15);
 printf("3 |%2d |%2d |%2d |%2d |%2d |",v[3][0],v[3][1],v[3][2],v[3][3],v[3][4]);
 SetColorAndBackground(0,4);printf("%3d \n",stg2[3]);
 SetColorAndBackground(0,15);
  printf("  ---------------------");
   SetColorAndBackground(0,4);printf("    \n");
   SetColorAndBackground(0,15);
 printf("4 |%2d |%2d |%2d |%2d |%2d |",v[4][0],v[4][1],v[4][2],v[4][3],v[4][4]);
 SetColorAndBackground(0,4);printf("%3d \n",stg2[4]);
 SetColorAndBackground(0,15);
  printf("  ---------------------");
   SetColorAndBackground(0,4);printf("    \n");
 printf("  %3d %3d %3d %3d %3d %3d  \n",stg3[0],stg3[1],stg3[2],stg3[3],stg3[4],stg1[1][1]);
  SetColorAndBackground(2,0);
      if(l==1){
         break;
        }

        printf ("pc turn ... \n");
sleep(1);
 //ps turn
 //just like me the pc provided by two choicec same as me
 //the normal difficulty
 //the smart pc method is explained in the repport

 if(diffuclty==2||diffuclty==3){
             for(condi1=0;(condi1<5);condi1++){
             w=0;
              for(condi2=0;(condi2<5);condi2++){
                   for(i=0;i<=q;i++){
                  if(interme[i]==stg2[condi1]){
                  w=5;
                  }
                  }
                  if(w==5){
                  break;
                  }


               if(stg2[condi1]==stg2[condi2]&&condi1!=condi2&&l!=5){

                     for(ii1=0;(ii1<5)&&(l!=4);ii1++){
                      for(jj1=0;(jj1<5)&&(l!=4);jj1++){
                       for(jj2=0;(jj2<5)&&(l!=4);jj2++){
                        for(jj3=0;(jj3<5)&&(l!=4);jj3++){

                           check1=v[ii1][jj1]-v[jj3][jj2];

                           if((check1+stg3[jj2])==stg2[condi1]&&ii1!=condi1&&ii1!=condi2&&jj3!=condi1&&jj3!=condi2&&jj1!=jj2&&ii1!=jj3){


                           printf("smart pc choose to swape beetwen[%d,%d]and[%d,%d]\n",ii1,jj1,jj3,jj2);
                           swap(&v[ii1][jj1],&v[jj3][jj2]);
                           l=4;
                           break;
                           }



      }

      }


      }

      }

      if(l==4){
            break;
            }
      }if(stg2[condi1]==stg2[condi2]&&condi1!=condi2){
                    for(ii1=0;(ii1<5)&&(l!=4);ii1++){
                      for(jj1=0;(jj1<5)&&(l!=4);jj1++){
                       for(jj2=0;(jj2<5)&&(l!=4);jj2++){
                        for(jj3=0;(jj3<5)&&(l!=4);jj3++){

                           check1=v[ii1][jj1]-v[jj3][jj2];

                           if((check1+stg2[jj3])==stg2[condi1]&&ii1!=condi1&&ii1!=condi2&&jj3!=condi1&&jj3!=condi2&&jj1!=jj2&&ii1!=jj3){

                           printf("smart pc choose to swape beetwen[%d,%d]and[%d,%d]\n",ii1,jj1,jj3,jj2);
                           swap(&v[ii1][jj1],&v[jj3][jj2]);
                           l=4;
                           break;
                           }
      }

      }

      }
       if(l==4){
            break;
            }
      }
      }

       if(diffuclty==3){
      if(stg2[condi1]==stg3[condi2]){
                     for(ii1=0;(ii1<5)&&(l!=4);ii1++){
                      for(jj1=0;(jj1<5)&&(l!=4);jj1++){
                       for(jj2=0;(jj2<5)&&(l!=4);jj2++){
                        for(jj3=0;(jj3<5)&&(l!=4);jj3++){

                           check1=v[ii1][jj1]-v[jj2][jj3];

                           if((check1+stg2[jj2])==stg2[condi1]&&jj1!=condi1&&jj1!=condi2&&jj2!=condi1&&jj2!=condi2&&jj1!=jj3&&ii1!=jj2 &&jj2!=condi1&&jj2!=condi2&&jj3!=condi2&&ii1!=condi1){

                           printf("smart pc choose to swape beetwen[%d,%d]and[%d,%d]\n",ii1,jj1,jj2,jj3);
                           swap(&v[ii1][jj1],&v[jj2][jj3]);
                           l=4;
                           break;
                           }
       }

       }

       }

       }
       if(l==4){
            break;
            }
          }

          if(stg2[condi2]==stg1[1][1] ){
                     for(ii1=0;(ii1<5)&&(l!=4);ii1++){
                      for(jj1=0;(jj1<5)&&(l!=4);jj1++){
                       for(jj2=0;(jj2<5)&&(l!=4);jj2++){
                        for(jj3=0;(jj3<5)&&(l!=4);jj3++){

                           check1=v[ii1][jj1]-v[jj2][jj3];

                           if((check1+stg2[jj2])==stg2[condi2]&&ii1!=condi2&&jj2!=condi2&&ii1!=jj2&&jj1!=jj3&&jj2!=condi2&&ii1!=jj1&&jj2!=jj3){

                           printf("smart pc choose to swape beetwen[%d,%d]and[%d,%d]\n",ii1,jj1,jj2,jj3);
                           swap(&v[ii1][jj1],&v[jj2][jj3]);
                           l=4;
                           break;
                           }
                           if(l==4){
                           break;
                           }
          }

          }

          }

          }
          if(l==4){
            break;
            }

          }if(stg2[condi1]==stg2[condi2]&&condi1!=condi2){

                for(ii1=0;(ii1<5)&&(l!=4);ii1++){
                      for(jj1=0;(jj1<5)&&(l!=4);jj1++){
                       for(jj2=0;(jj2<5)&&(l!=4);jj2++){
                       jj4=jj2;
                        check1=v[ii1][jj1]-v[jj4][jj2];

                           if((check1+stg1[1][1])==stg2[condi1]&&ii1!=condi1&&ii1!=condi2&&jj2!=condi1&&jj2!=condi2&&jj1!=jj2&&ii1!=jj2){

                           printf("smart pc choose to swape beetwen[%d,%d]and[%d,%d]\n",ii1,jj1,jj4,jj2);
                           swap(&v[ii1][jj1],&v[jj4][jj2]);
                           l=4;
                           break;
                           }

          }

          }

          }
           if(l==4){
            break;
            }
          }


          if(l==4){
            break;
            }
          }

            if(l==4){
            break;
            }

         }



          }
          }
  w=0;
//pc choice
       srand(time(NULL));
       t=rand()%2;
       if(t==a&&t==0){
       t=1;
       }
     check2=t;


switch (t){
// same as my 90 degree flip
      case 0:
        if(l==4){
         break;
         }
    j=1;
    x=3;
 for(i=1;i<4;i++){
      v[0][i];
      v[i][4];
      //
      v[j][4];
      v[4][x];
      //
      v[4][x];
      v[x][0];
      //
      v[x][0];
      v[0][i];

      swap(&v[4][x],&v[x][0]);
      swap(&v[j][4],&v[4][x]);
      swap(&v[0][i],&v[i][4]);
      j++;
      x--;
      }
 swap2(&v[0][4],&v[4][4],&v[4][0],&v[0][0]);
 swap2(&v[3][1],&v[1][1],&v[1][3],&v[3][3]);
 swap2(&v[1][2],&v[2][3],&v[3][2],&v[2][1]);
  printf("pc choose to flip 90 deegree\n");
 break;
 case 1:
      if(l==4){
      break;
      }
 // same as my game play
            srand(time(NULL));
            xx = rand()%5;
            pp = rand()%5;
            xxx = rand()%5;
            ppp = rand()%5;
 //he can't use some number's because it's against the rules
            while(xx==xxx&&pp==ppp||xx==i1&&pp==j2&&xxx==x&&&ppp==&p){
            xx = rand()%5;
            pp = rand()%5;
            xxx = rand()%5;
            ppp = rand()%5;
            }
            swap(&v[xx][pp],&v[xxx][ppp]);
            printf("pc choose swap beetween (%d,%d)and(%d,%d)\n",xx,pp,xxx,ppp);

     }
 //pc logique same as mine
     for(ii=0;ii<=4;ii++){
                stg2[ii]=v[ii][0]+v[ii][1]+v[ii][2]+v[ii][3]+v[ii][4];
      }
      for(jj=0;jj<=4;jj++){
                stg3[jj]=v[0][jj]+v[1][jj]+v[2][jj]+v[3][jj]+v[4][jj];
      }
      stg1[1][1]=v[0][0]+v[1][1]+v[2][2]+v[3][3]+v[4][4];

 // this is the game logic this part is explained in the essay
   for(ii=0;(ii<5)&&(l!=1);ii++){
        for(jj=0;(jj<5)&&(l!=1);jj++){
           if(stg2[ii]==stg3[jj]){
              for(mmn=0;mmn<5;mmn++){
                  if(stg2[mmn]==stg3[jj]&&mmn!=ii){
                  for(i=0;i<=q;i++){
                  if(interme[i]==stg2[ii]){
                  w=5;
                  }
                  }
                  if(w==5){
                  break;
                  }
                  printf("computer win\n");
                  printf("line[%d]=%d,column[%d]=%d,line[%d]=%d\n",ii,stg2[ii],jj,stg3[jj],mmn,stg2[mmn]);
                  l=1;
                  break;
                  }

              }
            }
         }
}
w=0;
 for(ii=0;(ii<5)&&(l!=1);ii++){

        for(jj=0;(jj<5)&&(l!=1);jj++){
           if(stg2[ii]==stg2[jj]&& ii!=jj){
              for(mmn=0;mmn<5;mmn++){
                  if(stg2[mmn]==stg2[jj]&& mmn!=ii&&mmn!=jj){
                  for(i=0;i<=q;i++){
                  if(interme[i]==stg2[ii]){
                  w=5;
                  }
                  }
                  if(w==5){
                  break;
                  }
                  printf("computer win\n");
                  printf("line[%d]=%d,line[%d]=%d,line[%d]=%d\n",ii,stg2[ii],jj,stg2[jj],mmn,stg2[mmn]);
                  l=1;
                  break;
                  }

              }

            }

         }

}
w=0;
//
       for(ii=0;(ii<5)&&(l!=1);ii++){
        if(stg2[ii]==stg1[1][1]){
         for(mmn=0;mmn<5;mmn++){
          if(stg2[mmn]==stg1[1][1]&& ii!=mmn){
          for(i=0;i<=q;i++){
                  if(interme[i]==stg2[ii]){
                  w=5;
                  }
                  }
                  if(w==5){
                  break;
                  }
          printf("computer win\n");
          printf("line[%d]=%d,line[%d]=%d,diagonal=%d\n",ii,stg2[ii],mmn,stg2[mmn],stg1[1][1]);
          l=1;
          break;
          }
          }
        }
       }
       w=0;
 //the third matrix interface was put to see what the pc did chooce and what changed
 SetColorAndBackground(0,15);
printf("    0   1   2   3   4      \n");
 printf("  ---------------------");
 SetColorAndBackground(0,4);printf("    \n");
 SetColorAndBackground(0,15);
 printf("0 |%2d |%2d |%2d |%2d |%2d |",v[0][0],v[0][1],v[0][2],v[0][3],v[0][4]);
SetColorAndBackground(0,4);printf("%3d \n",stg2[0]);
SetColorAndBackground(0,15);
 printf("  ---------------------");
  SetColorAndBackground(0,4);printf("    \n");
  SetColorAndBackground(0,15);
 printf("1 |%2d |%2d |%2d |%2d |%2d |",v[1][0],v[1][1],v[1][2],v[1][3],v[1][4]);
 SetColorAndBackground(0,4);printf("%3d \n",stg2[1]);
 SetColorAndBackground(0,15);
  printf("  ---------------------");
   SetColorAndBackground(0,4);printf("    \n");
   SetColorAndBackground(0,15);
 printf("2 |%2d |%2d |%2d |%2d |%2d |",v[2][0],v[2][1],v[2][2],v[2][3],v[2][4]);
 SetColorAndBackground(0,4);printf("%3d \n",stg2[2]);
 SetColorAndBackground(0,15);
  printf("  ---------------------");
   SetColorAndBackground(0,4);printf("    \n");
   SetColorAndBackground(0,15);
 printf("3 |%2d |%2d |%2d |%2d |%2d |",v[3][0],v[3][1],v[3][2],v[3][3],v[3][4]);
 SetColorAndBackground(0,4);printf("%3d \n",stg2[3]);
 SetColorAndBackground(0,15);
  printf("  ---------------------");
   SetColorAndBackground(0,4);printf("    \n");
   SetColorAndBackground(0,15);
 printf("4 |%2d |%2d |%2d |%2d |%2d |",v[4][0],v[4][1],v[4][2],v[4][3],v[4][4]);
 SetColorAndBackground(0,4);printf("%3d \n",stg2[4]);
 SetColorAndBackground(0,15);
  printf("  ---------------------");
   SetColorAndBackground(0,4);printf("    \n");
 printf("  %3d %3d %3d %3d %3d %3d  \n",stg3[0],stg3[1],stg3[2],stg3[3],stg3[4],stg1[1][1]);
  SetColorAndBackground(2,0);
       }
        SetColorAndBackground(2,0);
   // i know it can be done in a very better way but i was sick the whole vaccation so this is everything i have to offer
   // i hope you enjoy playing sir and thanks for you courses explanation it was very helpfull and for the td proof ideas in controlling tables .
  return 0;
  }
  void SetColorAndBackground(int ForgC, int BackC)
{
     WORD wColor = ((BackC & 0x0F) << 4) + (ForgC & 0x0F);
     SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), wColor);
     return;
}
