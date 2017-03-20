#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[]){

	char Full_Opcode_1[200];
	char Full_Opcode_2[200];
	char Full_Opcode_3[200];


	char *p1080 = "./ffmpeg-1080";
	char *p720 = "./ffmpeg-720";
	char *p480 = "./ffmpeg-480";

	char name[20];
	char abk[10];
	strcpy(abk,argv[1]);
	char *hak = strtok(abk,".");
	char *outname;
	int count = 0;
	strcpy(name,hak);	
	while(hak != NULL)
	{
		//printf("%s\n",hak);
		hak = strtok(NULL,".");
		
		break;
	}
	printf("%s\n",name);

	


	char *out_name480  = "./480p/";
	char *out_name720  = "./720p/";
	char *out_name1080 = "./1080p/";

	char *mp4 = ".mp4";

	//printf("%s %s %s%s%s",p480,argv[1],out_name480,outname,mp4);
	
	sprintf(Full_Opcode_1,"%s %s %s%s%s%s",p480,argv[1],out_name480,name,hak,mp4);
	sprintf(Full_Opcode_2,"%s %s %s%s%s",p720,argv[1],out_name720,hak,mp4);
	sprintf(Full_Opcode_3,"%s %s %s%s%s",p1080,argv[1],out_name1080,hak,mp4);

	//system("sleep 10");
	system(Full_Opcode_1);
	system("sleep 3");
	system(Full_Opcode_2);
	system("sleep 3");	
	system(Full_Opcode_3);

	return 0;
}
