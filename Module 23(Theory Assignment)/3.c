#include<stdio.h>
#include<stdbool.h>

void find1(int n){

    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == 1)
        {
            return 
        }

int main(){
    

    char s[213];
    gets(s);
  

    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i]== 1 || s[i]== 9 || s[i]== 7)
        {
         for ( i = 0; s[i] != '\0'; i++)
         {
            if (s[i]==1)
            {
                for (int i = 0; s[i] != '\0'; i++)
                {
                    if (s[i]== 9)
                    {
                        for (int i = 0; s[i] != '\0'; i++)
                        {
                            if (s[i]== 7)
                            {
                                printf("YES");
                                break;
                            }
                            
                        }
                        
                    }
                    
                }
                
            }
            
         }
           
        }
        

        else
            printf("NO");
    }


    return 0;
}



/*
bool includes(char s[], char length, int value){

    for (int i = 0; s[i] != length; i++)
    {
        if (s[i]== value)
        {
            return true;
        }
        return false;
    }
    
    
}

int main(void){
    int length= 123;
    char s[length];
    gets(s);
    

    if  (includes(s, length, 1))
    printf("Found %d");

    else
     printf("Could not find");
    
    
}

*/