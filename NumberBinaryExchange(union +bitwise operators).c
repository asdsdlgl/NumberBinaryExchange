#include<stdio.h>
#include<stdlib.h>
typedef union{
        float flo;			//union
        int ii;
}Union;
int main(int argc,char* argv[]){
        Union u;
        int i,a[32],j=1;
        if(argv[1][0]=='1'){//當為1時
                u.ii = atoi(argv[2]);//整數傳給u.ii
                for(i=0;i<32;i++){//將每一個bit放入array中
                        a[i] = u.ii&0x00000001;
                        u.ii>>=1;
                }
                for(i=31;i>=0;i--){//印出
                        printf("%d",a[i]);
                }
                printf("\n");
        }else if(argv[1][0]=='2'){//為2時
                u.flo = atof(argv[2]);//浮點數傳入u.flo
                for(i=0;i<32;i++){//利用u.ii做bitwise
                        a[i] = u.ii&0x00000001;
                        u.ii>>=1;
                }
                for(i=31;i>=0;i--){//印出
                        printf("%d",a[i]);
                }
                printf("\n");
        }else{
                u.ii = 0;
                for(i=0;i<32;i++){//將每一個bit轉成整數放入陣列
                        a[31-i] = argv[2][i]-'0';
                }
                for(i=0;i<32;i++){
                        u.ii = u.ii+a[31-i];
                        if(i<31)u.ii<<=1;
                }//利用u.ii做bitwise並將bit放入相對應的位置
                printf("%.23e\n",u.flo);//用u.flo將值印出
        }
}

