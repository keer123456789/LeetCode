//
// Created by keer on 2020/2/13.
//

int isPalindrome(int x){
    long sum=0;
    long flag=x;
    if(x<0){
        return 0;
    }
    for(;x!=0;){
        int a=x%10;
        x=x/10;

        sum=sum*10+a;
    }
    if(sum!=flag){
        return 0;
    }else{
        return 1;
    }
}

