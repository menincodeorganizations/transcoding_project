#include <stdio.h>

int main(int argc, char* argv[]){

	char Full_Opcode_1[200];
	char Full_Opcode_2[200];
	char Full_Opcode_3[200];

	char *opcode = "gcc";
	char *code_1 = "-g";
	char *code_2 = "-o";


	char *input_1080  = "ffmpeg-1080";
	char *input2_1080 = "ffmpeg_lib_encoding_1080p.c";

	char *input_720  = "ffmpeg-720";
	char *input2_720 = "ffmpeg_lib_encoding_720p.c";

	char *input_480  = "ffmpeg-480";
	char *input2_480 = "ffmpeg_lib_encoding_480p.c";


	char *code_3 = "-I\"./ffmpeg-3.2.4\"";
	char *code_4 = "$(pkg-config --libs libavformat libavcodec libavutil libavfilter);";


	
	sprintf(Full_Opcode_1,"%s %s %s %s %s %s %s %s %s",opcode,code_1,code_2,input_1080,input2_1080,code_3,code_4);
	sprintf(Full_Opcode_2,"%s %s %s %s %s %s %s %s %s",opcode,code_1,code_2,input_720,input2_720,code_3,code_4);
	sprintf(Full_Opcode_3,"%s %s %s %s %s %s %s %s %s",opcode,code_1,code_2,input_480,input2_480,code_3,code_4);


	system(Full_Opcode_1);

	system(Full_Opcode_2);

	system(Full_Opcode_3);

	return 0;
}
