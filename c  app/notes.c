#include <stdio.h>
#include <unistd.h>
#include <string.h>

 void start_animation();
 void load_screen();
 void new_note();
 void open_note();
 void edit_note();
 void delete_note();
 void encrypt_note();
 void decrypt_note();

 int main(){

	int selection;

	start_animation();
	printf("Hello user\n");
	sleep(2);
	printf("What would you like to do?\n\n");
	sleep(2);

	//selection table
	printf("1.New note.\n");
	sleep(2);
	printf("2.Open note.\n");
	sleep(2);
	printf("3.Edit note.\n");
	sleep(2);
	printf("4.Delete note.\n");
	sleep(2);
	printf("5.Encrypt note.\n");
	sleep(2);
	printf("6.Decrypt note.\n\n");
	sleep(2);

	printf("I choose no : ");
	scanf("%d", &selection);

	if(selection == 1){
		sleep(2);
		printf("Creating a new note");
		sleep(3);
		load_screen();
		sleep(1);
		new_note();
		
	}

 	return 0;
 }

 void start_animation(){
 	printf("             ===\n");
 	usleep(100000);
 	printf("           =  =  =\n");
 	usleep(90000);
 	printf("         =         =\n");
 	usleep(80000);
 	printf("        =   |    |   =\n");
 	usleep(70000);
 	printf("        =  -       - =\n");
 	usleep(60000);
 	printf("         =  =    =  =\n");
 	usleep(50000);
 	printf("           =  ==  =\n");
 	usleep(40000);
 	printf("             =  =\n\n");
 	usleep(100000);
 }

 void load_screen(){
 	for(int i=0; i<5; i++){
 		printf(".");
 		sleep(2);
 	}
 	printf("\n\n");
 	sleep(1);
 }

 void new_note(){
 	FILE *fptr;

 	fptr = fopen("note1.txt", "w");

 	if(fptr == NULL){
 		printf("Enter note name: ");
 		scanf("%s", Note_name);
 		printf("Creating note...");
 		sleep(1);
 		fptr = fopen("note1.txt", "w");
 		sleep(1);
 		printf("Note created!");

 	}else if(fptr != Note_name ){
 		printf("File already exists");
 	}
 	
 }
