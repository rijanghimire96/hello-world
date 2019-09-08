#include<stdio.h>
void main()
{
    int y,m,d;
    printf("enter a date [yyyy-mm-dd] ;:");
    scanf("%d-%d-%d",&y,&m,&d);
     if (y>=1000 && y<10000)
     {
        if (m>=1 && m<13)
          {
            if(m=1) { if(d>=1 && d<=31) {printf("the date you entered is valid");}    }
       else if(m=2) { if(d>=1 && d<=28) {printf("the date you entered is valid");}    }
       else if(m=3) { if(d>=1 && d<=31) {printf("the date you entered is valid");}    }
       else if(m=4) { if(d>=1 && d<=30) {printf("the date you entered is valid");}    }
       else if(m=5) { if(d>=1 && d<=31) {printf("the date you entered is valid");}    }
       else if(m=6) { if(d>=1 && d<=30) {printf("the date you entered is valid");}    }
       else if(m=7) { if(d>=1 && d<=31) {printf("the date you entered is valid");}    }
       else if(m=8) { if(d>=1 && d<=31) {printf("the date you entered is valid");}    }
       else if(m=9) { if(d>=1 && d<=30) {printf("the date you entered is valid");}    }
       else if(m=10) { if(d>=1 && d<=31) {printf("the date you entered is valid");}    }
       else if(m=11) { if(d>=1 && d<=30) {printf("the date you entered is valid");}    }
       else if(m=12) { if(d>=1 && d<=31) {printf("the date you entered is valid");}    }
             else
             {
                 printf("the day is invalid");
             }
          }
          else
          {
              printf("the month is invalid");
          }
     }
     else{
        printf("the year is invalid");
     }

}
