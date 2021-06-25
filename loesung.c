#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#define MAX_FILE_NAME 100

int MARK=0;
//MODE 1= Off, 0= On
bool DEBUG_MODE=0; 

struct node {
	int ID;
	int* neighbours;
	int mark;
};

void debug_line(char *text){
	if (!DEBUG_MODE){
		 printf("%s\n", text);
	}else{
		
	}
};


void read_file(){
	FILE *fp;
	char buff[255];
	
	//pwd
	char cwd[1024];
    chdir("/path/to/change/directory/to");
    getcwd(cwd, sizeof(cwd));
    printf("Current working dir: %s\n", cwd);
	
    int count = 0;  // Line counter (result)
    char filename[MAX_FILE_NAME];
    char c;  // To store a character read from file
    
    // Get file name from user. The file should be
    // either in current folder or complete path should be provided
    printf("Enter file name: ");
    scanf("%s", filename);
  
    // Open the file
    fp = fopen(filename, "r");
  
    // Check if file exists
    if (fp == NULL)
    {
        printf("Could not open file %s", filename);
        return 0;
    }
  
    // Extract characters from file and store in character c
    for (c = getc(fp); c != EOF; c = getc(fp))
        if (c == '\n') // Increment count if this character is newline
            count = count + 1;
  
    // Close the file
    fclose(fp);
    printf("The file %s has %d lines\n ", filename, count);

}



int select_neighbour(int* initial_node){
	
	return 0;
}

int next_node(struct node input_node){
	int next_neighbour = input_node.ID;
	return next_neighbour;
}

void testsuite(struct node *init){
	//make local copy
	struct node test = *init;
	int i=0;
	test.ID= 0;
    test.neighbours= (int*) malloc(sizeof (int)*4);
    for ( i=0 ;i < 4 ;i++){
    	test.neighbours[i]=rand() %10;
    	printf("%d\n",test.neighbours[i]);
	}
    debug_line("Exit: Finished testsuite();");
    
    test.mark= 0;
    //make changes to referenced struct
    *init= test;
    free(test.neighbours);
    debug_line("Step: Freed space.");
    
    for ( i=0 ;i < 4 ;i++){
    	printf("%d\n",test.neighbours[i]);
	}
    
}


int main(void) 
{
    struct node init;
    printf("1st: Enter testsuite();\n");
    
    testsuite(&init);
    read_file();
    //scanf("%s", &name);  - deprecated
    printf("Thomas is the best summoner.");
    return 0;
}
