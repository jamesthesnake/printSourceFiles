#include <stdio.h>
int main(int argc, const char *argv[]){
  /*char *filename= char *argv[];*/
  FILE *theInput;
 

  /*  return(EXIT_SUCCESS); */

  FILE *f = fopen(argv[1], "r");
  char buffer[2048];
  int c;
 int  index=0;
  if (f) {
    while (!feof(f)) {
      
      /*   read_until_char(f, '/');*/
      c = fgetc(f);
      if(c=='/'){
	c = fgetc(f);

      if (c == '*') {
        while (!feof(f)) { 
	  putchar(c);
	  c=fgetc(f);
	  //	  printf("%d",index);
	  index++;
	  /*          read_until_char_into(f, '*', buffer); */
           if (c == '*') {
	     //	    putchar(c);
	    continue;
            // consider what to do if c is *
          }
        }
      } else if (c == '/') {
	
	//	putchar(c);
        
	//	read_until_char_into(f, '\n', buffer);
	// print buffer
       
      }
      }
      putchar(c);
      
      
      //      printf("%d",index);
    }
   
    fclose(f);
  }
}



