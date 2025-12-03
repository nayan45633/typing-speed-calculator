#include <stdio.h>
#include <unistd.h>
#include <time.h>
#include <string.h>


int main() {
    printf("\t\t\t TEST YOUR TYPING SPEED \t\t\t \n\n\n");

    printf("Get\t");
    fflush(stdout);  
    sleep(1);

    printf("Set\t");
    fflush(stdout);  
    sleep(1);

    printf("Go\t\n\n\n");
    sleep(1);
    
    
    printf("Start Typing:\n\n");
    
    char data[500];
    
    long start = (long)time(NULL); 
    
   fgets(data, sizeof(data), stdin); 

    

    data[strcspn(data, "\n")] = '\0'; 

    
    
    
    long end = (long)time(NULL);
    
    long timeTaken = end-start; 
    
    
    printf("\n\nTime Took %ld seconds \n",timeTaken);
    
    int words =1; 
    
    int letters = strlen(data)-1;
    
    for(int i=0; i<=letters; i++){
        if(data[i] ==' '){
            words++;
        }
    }
    
    printf("You Typed %d Words\n",words);
    
    int WPM = words*60/timeTaken;
    
    printf("Your WPM is %d Approx \n",WPM); 
    
    printf("\t\t\t** Thanks **\t\t\t");
    

    return 0;

}
