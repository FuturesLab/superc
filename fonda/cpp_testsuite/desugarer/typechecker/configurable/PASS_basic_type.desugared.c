#include <stdbool.h>

extern void __static_parse_error(char *msg);
extern void __static_type_error(char *msg);
extern void __static_renaming(char *renaming, char *original);
extern void __static_condition_renaming(char *expression, char *renaming);

void __static_initializer_default();

void __static_initializer_default() {
__static_renaming("__a_0", "a");
__static_renaming("__a_1", "a");
__static_renaming("__main_2", "main");


};

int  __main_2 () {

{
{



int  __a_0= 0;// L4:L8

char  __a_1= 0;// L4:L8

return 0 ;// L10
}
}



}

