#include <stdbool.h>

extern void __static_parse_error(char *msg);
extern void __static_type_error(char *msg);
extern void __static_renaming(char *renaming, char *original);
extern void __static_condition_renaming(char *expression, char *renaming);

void __static_initializer_default();

void __static_initializer_default() {
__static_renaming("__x_0", "x");
__static_renaming("__len_1", "len");
__static_renaming("__main_2", "main");


};

signed char  __x_0[]= "55555";// L1
int  (__main_2) () {

{
{



int  __len_1= sizeof(signed char*) / sizeof(signed char);// L5

return 0 ;// L6
}
}


}

