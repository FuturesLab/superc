#include <stdbool.h>

extern void __static_type_error(char *msg);
extern void __static_renaming(char *renaming, char *original);
extern void __static_condition_renaming(char *expression, char *renaming);

void __static_initializer_default();

extern const bool __static_condition_default_7;
extern const bool __static_condition_default_6;
void __static_initializer_default() {
__static_renaming("__num_0", "num");
__static_renaming("__main_1", "main");
__static_renaming("__x_4", "x");
__static_renaming("__x_5", "x");

__static_condition_renaming("__static_condition_default_6", "!(defined A)");
__static_condition_renaming("__static_condition_default_7", "(defined A)");

};

int  __num_0= 5;
int  __main_1 () {
{struct __anonymous_tag_2 {
int  __field1_3;
};

int  (* __x_4);
struct __anonymous_tag_2  __x_5;

{
if (__static_condition_default_6) {
 __x_5  . __field1_3 ;

}

if (__static_condition_default_7) {
__static_type_error("type error") ;

}

}return 0 ;

}


}

