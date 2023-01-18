#include <stdio.h>
#include <string.h>

char *convert(char *ptrname){
    int i = 0;
    while (ptrname[i] != '\0')
    {
        if(ptrname[i] >= 65 && ptrname[i] <= 90){
            ptrname[i] = ptrname[i] + 32;
        }
        i++;
    }

    return ptrname;
}

void main(){
     /*
    *****************
    strlwr --> this is the predefined function contain in the string.h file
                which is used for switching string case from upper to lower.  
    *****************
    */

   /*
    char name[30] = "OPEYEMI";
    strlwr(name);
   */
     int i=0, j=0;
     char name[30] = "OPEYEMI**";
    //  while(name[i] != '\0'){
    //     if(name[i] >= 'A' && name[i] <= 'Z'){
    //         name[i] = name[i] + 32;
            
    //     }
    //     i++;
    //  }
    //  printf("%s\n", name);
     char *result = convert(name);
     printf("%s\n", result);

     char hubby[20] = "coding123";
     while(hubby[j] != '\0'){
        if(hubby[j] >= 'a' && hubby[j] <= 'z'){
            hubby[j] = hubby[j] - 32;
            
        }
        j++;
     }

     printf("%s\n", hubby);
}