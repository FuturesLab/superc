#include <stdbool.h>

extern void __static_type_error(char *msg);
extern void __static_renaming(char *renaming, char *original);
extern void __static_condition_renaming(char *expression, char *renaming);

void __static_initializer_default();

void __static_initializer_default() {
__static_renaming("__f_2", "f");
__static_renaming("__z_3", "z");


};

int  __f_2 (char  __x_0, int  __y_1) {
{
int  __z_3;
 __y_1  =  __x_0  +  __y_1  ;

 __z_3  =  __y_1  ;

return  __z_3  ;

}


}

