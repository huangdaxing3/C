# include <stdio.h>
# include <stdbool.h>

bool isPalindrome(int x){
    int a,t = x;
    long k=0;
    if(x<0)
        return false;
    else{
        while(t>0){
            t = t/10;
            a = t%10;
            k = k*10+a;
        }
        if(k==x)
            return true;
        else 
            return false;
    }
}

int main()
{
    int x;
    scanf("%d",&x);
    isPalindrome(x);
    return 0;
}