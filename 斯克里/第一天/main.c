enum{
	Symbol_N=0x0a,
	Symbol_R=0x0d,
	WIN_N=0x0d0a,
	Unix_N=0x0a,
	Mac_N=0x0d,
	Char_a=0x61,
	Char_b,
	Char_c,
	Char_d,
	Char_e,
	Char_f,
	Char_g,
	Char_h,
	Char_i,
	Char_j,
	Char_k,
	Char_l,
	Char_m,Char_n,
	Char_o,Char_p,Char_q,Char_r,Char_s,Char_t
	Char_u,Char_v,Char_w,Char_x,Char_y,Char_z,
	Char_Symbol1=0x20,//空格
	Char_Symbol2=0x2b,//+
	Char_Symbol3=0x2d,//-
	Char_Symbol4=0x2a,//*
	Char_Symbol5=0x2f,// /
	Char_Symbol6=0x3d,//=
	Char_Symbol7=0x3c,//<
	Char_Symbol8=0x3e,//>
	Char_Symbol9=0x28,//(
	Char_Symbol10=0x29,//)
	Char_Symbol11=0x5b,//[
	Char_Symbol12=0x5d,//]
	Char_Symbol13=0x7b,//{
	Char_Symbol14=0x7d,//}
	Char_Symbol15=0x5c,// "\"
	Char_Symbol16=0x2e,//.
	Char_Symbol17=0x09,//tab
	Char_A=0x41,
	Char_B,
	Char_C,
	Char_D,
	Char_E,
	Char_F,
	Char_G,
	Char_H,
	Char_I,
	Char_J,
	Char_K,
	Char_L,
	Char_M,
	Char_N,
	Char_O,Char_P,Char_Q,Char_R,Char_S,Char_T,Char_U,Char_V,Char_W,Char_X,Char_Y,Char_Z
}
#include <stdio.h>
#include <stdlib.h>
unsigned short*utf8_char;
long LEN;
int main(int argc,char*argv[]){
	FILE*fp=fopen(argv[1],"rb");
	fseek(fp,0,SEEK_END);
	LEN=ftell(fp);
	rewind(fp);
	utf8_char=malloc(LEN);
	fread(utf8_char,1,LEN/2,fp);
	fclose(fp);
	//暂缺
}
//此处为实例
//注意：此代码不可直接食用!
int _if(){
	if(utf8_char[0]==Char_i){
		if(utf8_char[1]==Char_f){
			int i=2;
			while((utf8_char[i]==Char_Symbol17)||(utf8_char[i]==Char_Symbol1)){
				i=i+1;
			}
			if (!(utf8_char[i]==Char_Symbol9)){
				int i2=i;
				while(!(utf8_char[i]==Char_Symbol10)){
					i=i+1;
				}
				int i3=i;
				i=i+1;
				while(!(utf8_char[i]==Char_Symbol13)){
					i=i+1;
				}
				int i4=i;
				while(!(utf8_char[i]==Char_Symbol14)){
					i=i+1;
				}
				int i5=i;
			}
		}
	}
}
//不装了，摊牌了，我是注释. ^_^