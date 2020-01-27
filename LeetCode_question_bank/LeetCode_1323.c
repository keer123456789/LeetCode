//
// Created by keer on 2020/1/27.
//


int maximum69Number (int num){
    int a[4];
    a[0]=num/1000;
    a[1]=(num%1000)/100;
    a[2]=(num-a[0]*1000-a[1]*100)/10;
    a[3]=num%10;
    for(int i=0;i<4;i++){
        if(a[i]==6){
            a[i]=9;
            break;
        }
    }
    return a[0]*1000+a[1]*100+a[2]*10+a[3];

}