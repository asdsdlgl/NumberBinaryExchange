#include<stdio.h>
#include<stdlib.h>
typedef union{//union
        float flo;
        int ii;
        struct{//32個bitfield
                unsigned int a1:1;
                unsigned int a2:1;
                unsigned int a3:1;
                unsigned int a4:1;
                unsigned int a5:1;
                unsigned int a6:1;
                unsigned int a7:1;
                unsigned int a8:1;
                unsigned int a9:1;
                unsigned int a10:1;
                unsigned int a11:1;
                unsigned int a12:1;
                unsigned int a13:1;
                unsigned int a14:1;
                unsigned int a15:1;
                unsigned int a16:1;
                unsigned int a17:1;
                unsigned int a18:1;
                unsigned int a19:1;
                unsigned int a20:1;
                unsigned int a21:1;
                unsigned int a22:1;
                unsigned int a23:1;
                unsigned int a24:1;
                unsigned int a25:1;
                unsigned int a26:1;
                unsigned int a27:1;
                unsigned int a28:1;
                unsigned int a29:1;
                unsigned int a30:1;
                unsigned int a31:1;
                unsigned int a32:1;
        }ptr;
}Union;
int main(int argc,char* argv[]){
        Union u;
        if(argv[1][0]=='1'){//當為1時給予值整數
                u.ii = atoi(argv[2]);
               //不用bitwise的動作，而是利用struct中每一個bit printf("%d%d%d%d%d%d%d%d",u.ptr.a32,u.ptr.a31,u.ptr.a30,u.ptr.a29,u.ptr.a28,u.ptr.a27,u.ptr.a26,u.ptr.a25);
                printf("%d%d%d%d%d%d%d%d",u.ptr.a24,u.ptr.a23,u.ptr.a22,u.ptr.a21,u.ptr.a20,u.ptr.a19,u.ptr.a18,u.ptr.a17);
                printf("%d%d%d%d%d%d%d%d",u.ptr.a16,u.ptr.a15,u.ptr.a14,u.ptr.a13,u.ptr.a12,u.ptr.a11,u.ptr.a10,u.ptr.a9);
                printf("%d%d%d%d%d%d%d%d\n",u.ptr.a8,u.ptr.a7,u.ptr.a6,u.ptr.a5,u.ptr.a4,u.ptr.a3,u.ptr.a2,u.ptr.a1);
        }else if(argv[1][0]=='2'){
                u.flo = atof(argv[2]);//當為2時浮點數
		//利用struct中一個一個bitfield將float中32bit都印出來               printf("%d%d%d%d%d%d%d%d",u.ptr.a32,u.ptr.a31,u.ptr.a30,u.ptr.a29,u.ptr.a28,u.ptr.a27,u.ptr.a26,u.ptr.a25);
                printf("%d%d%d%d%d%d%d%d",u.ptr.a24,u.ptr.a23,u.ptr.a22,u.ptr.a21,u.ptr.a20,u.ptr.a19,u.ptr.a18,u.ptr.a17);
                printf("%d%d%d%d%d%d%d%d",u.ptr.a16,u.ptr.a15,u.ptr.a14,u.ptr.a13,u.ptr.a12,u.ptr.a11,u.ptr.a10,u.ptr.a9);
                printf("%d%d%d%d%d%d%d%d\n",u.ptr.a8,u.ptr.a7,u.ptr.a6,u.ptr.a5,u.ptr.a4,u.ptr.a3,u.ptr.a2,u.ptr.a1);
        }else if(argv[1][0]=='3'){//為三時
                u.ptr.a32 = argv[2][0]-'0';
                u.ptr.a31 = argv[2][1]-'0';
                u.ptr.a30 = argv[2][2]-'0';
                u.ptr.a29 = argv[2][3]-'0';
                u.ptr.a28 = argv[2][4]-'0';
                u.ptr.a27 = argv[2][5]-'0';
                u.ptr.a26 = argv[2][6]-'0';
                u.ptr.a25 = argv[2][7]-'0';
                u.ptr.a24 = argv[2][8]-'0';
                u.ptr.a23 = argv[2][9]-'0';
                u.ptr.a22 = argv[2][10]-'0';
                u.ptr.a21 = argv[2][11]-'0';
                u.ptr.a20 = argv[2][12]-'0';
                u.ptr.a19 = argv[2][13]-'0';
                u.ptr.a18 = argv[2][14]-'0';
                u.ptr.a17 = argv[2][15]-'0';
                u.ptr.a16 = argv[2][16]-'0';
                u.ptr.a15 = argv[2][17]-'0';
                u.ptr.a14 = argv[2][18]-'0';
                u.ptr.a13 = argv[2][19]-'0';
                u.ptr.a12 = argv[2][20]-'0';
                u.ptr.a11 = argv[2][21]-'0';
                u.ptr.a10 = argv[2][22]-'0';
                u.ptr.a9 = argv[2][23]-'0';
                u.ptr.a8 = argv[2][24]-'0';
                u.ptr.a7 = argv[2][25]-'0';
                u.ptr.a6 = argv[2][26]-'0';
                u.ptr.a5 = argv[2][27]-'0';
                u.ptr.a4 = argv[2][28]-'0';
                u.ptr.a3 = argv[2][29]-'0';
                u.ptr.a2 = argv[2][30]-'0';
                u.ptr.a1 = argv[2][31]-'0';
                printf("%.23e\n",u.flo);
        }
	//將bit一個一個放入相對印struct中的bitfield
	//因為記憶體相同，再將u.flo印出即可
}                         

