#include <stdlib.h>
#include <stdio.h>
enum{
	Char_A=0x41,
	Char_a=0x61,
	Char_b,
	Char_c,
	Char_d,
	Char_e,
};
long i=0;
long filelen;
unsigned short*filedata,dp;
int main(int argc,char*argv[]){
	if(sizeof(argv)==sizeof(char*))
	{
		printf("Error:\tNo input file!");
		return 0;
	}
	FILE*fp=fopen(argv[1],"rb");
	if(!fp){
		printf("Error:\tNo such file!");
		return 0;
	}
	fseek(fp,0,SEEK_END);
	filelen=ftell(fp);
	rewind(fp);
	filedata=(unsigned short*)malloc(filelen);
	fread(filedata,filelen,1,fp);
	if(!filelen){
		printf("Error:\tEmpty file!");
		return 0;
	}
	if(!filedata){
		printf("Error:\tCan't get memory!");
	}
	dp=filedata;
	while(i<filelen){
		_panduan();
	}
}
int _panduan(){
	if((*dp)==Char_i){
		if((*(dp+2))==Char_f){_if();}
		else{_var();}
	}
	else if((*dp)==Char_e){
		if(((*(dp+2))==Char_l)&&((*(dp+4))==Char_s)&&((*(dp+6))==Char_e)){
			_else();
		}
	}
	else if((*dp)==Char_w){}
	else if((*dp)==Char_d){}
	else if((*dp)==Char_a){}
	else if((*dp)==Char_b){}
	else if((*dp)==Char_s){}
	else{}
}
int _var(){}
int _if(){}
int _else(){}