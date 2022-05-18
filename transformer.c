# include <stdio.h>
int main(){
    float pt, st,pv,sv;
    printf("/nEnter the value of pt " );
    scanf("%f",&pt );
    printf("/nEnter the value of st " );
    scanf("%f",&st);
    printf("/nEnter the value of pv " );
    scanf("%f",&pv);
    sv=pv*st/pt;
    printf("The value of sv %f",sv);
    return 0;
  }    

