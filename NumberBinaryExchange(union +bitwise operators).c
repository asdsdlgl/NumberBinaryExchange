#include<stdio.h>
#include<stdlib.h>
typedef union{
        float flo;			//union
        int ii;
}Union;
int main(int argc,char* argv[]){
        Union u;
        int i,a[32],j=1;
        if(argv[1][0]=='1'){//��1��
                u.ii = atoi(argv[2]);//��ƶǵ�u.ii
                for(i=0;i<32;i++){//�N�C�@��bit��Jarray��
                        a[i] = u.ii&0x00000001;
                        u.ii>>=1;
                }
                for(i=31;i>=0;i--){//�L�X
                        printf("%d",a[i]);
                }
                printf("\n");
        }else if(argv[1][0]=='2'){//��2��
                u.flo = atof(argv[2]);//�B�I�ƶǤJu.flo
                for(i=0;i<32;i++){//�Q��u.ii��bitwise
                        a[i] = u.ii&0x00000001;
                        u.ii>>=1;
                }
                for(i=31;i>=0;i--){//�L�X
                        printf("%d",a[i]);
                }
                printf("\n");
        }else{
                u.ii = 0;
                for(i=0;i<32;i++){//�N�C�@��bit�ন��Ʃ�J�}�C
                        a[31-i] = argv[2][i]-'0';
                }
                for(i=0;i<32;i++){
                        u.ii = u.ii+a[31-i];
                        if(i<31)u.ii<<=1;
                }//�Q��u.ii��bitwise�ñNbit��J�۹�������m
                printf("%.23e\n",u.flo);//��u.flo�N�ȦL�X
        }
}

