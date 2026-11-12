#include <stdio.h>
#include <string.h>


//wrong implementation -> buffer overflow with strcpy 
//strcpy does zero bounds checking->takes a source string and blindly copies every single byte 
// into the destination buffer until it hits a null terminator (\0)
// ignores how big the destination buffer actually is, in this case 8
// void copy_name(const char *name)
// {
//     // a size must be provided for local variables 
//     char buffer[8]; 
    
//     //
//     strcpy(buffer, name);
    
//     printf("%s\n", buffer);
// }

// Correct implementation

void copy_name(const char *name)
{
    char buffer[8]; // <-- You MUST provide a size here!
    
    // Safely copies up to 8 bytes (leaving room for the null terminator)
    snprintf(buffer, sizeof(buffer), "%s", name);
    
    printf("%s\n", buffer);
}

	 
int main(void)
{
    copy_name("EmbeddedSoftware");
    return 0;
}