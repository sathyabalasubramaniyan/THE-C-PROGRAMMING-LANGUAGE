
#include<ctype.h>
#include<stdio.h>

//function declaration
void getint(int* res);

int main(void)
{
  int val=0;
  getint(&val);//passing address of val
  printf("val:%d",val);
  return 0;
}

void getint(int *res)
{
  int ch;
  int sign=1;
  ch=getchar(); //getting first  character
   while(ch!=EOF)
   {
    if(!isdigit(ch)&&(ch!='+')&&(ch!='-')) //character other than  number
    {
    printf("\ninvalid character \n");
    return ;
    }
    else
    {
     if(ch=='+'||ch=='-') //sign
     {
       sign=(ch=='+')?1:-1;
       ch=getchar();
     }
     for(*res=0;isdigit(ch);)//number
     {
      //printf("res=%d",res);
      *res=(*res)*10+(ch-'0');
      ch=getchar();
     }
     *res=(*res)*sign;
    }
    if(ch==EOF)//if it is a end
     printf("EOF");
    else if(ch=='\n') //if it is a enter key
    {
    return ;
    }
    else //or else mismatched character
    {
    printf("invalid character %c ",ch);
   return ;
    }
   
   }
return  ;
}

