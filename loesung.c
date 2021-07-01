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


void read_input(){
	int count;

 
	// give some prompt...
	printf("Enter a line of text:\n");
	printf("EOF to stop.\n");
 

	// get character from standard input store in variable count
	count = getchar();
 

	// while the End Of File is not encountered...
	while(count != EOF)

	{	
		// put character on the standard output
		putchar(count);
		// carry on getting character from the standard input
		count = getchar();
	}	


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
    //read_file();
    //scanf("%s", &name);  - deprecated
    printf("Thomas is the best summoner.");
    return 0;
}
