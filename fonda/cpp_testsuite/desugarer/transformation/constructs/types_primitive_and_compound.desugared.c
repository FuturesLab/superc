#include <stdbool.h>

extern void __static_type_error(char *msg);
extern void __static_renaming(char *renaming, char *original);
extern void __static_condition_renaming(char *expression, char *renaming);

void __static_initializer_default();

extern const bool __static_condition_default_4;
extern const bool __static_condition_default_5;
void __static_initializer_default() {
__static_renaming("__var_2", "var");
__static_renaming("__var_3", "var");
__static_renaming("__main_6", "main");

__static_condition_renaming("__static_condition_default_4", "(defined A)");
__static_condition_renaming("__static_condition_default_5", "!(defined A)");

};
struct __test_0 {
int  __x_1;
};

struct __test_0 ;
int  __main_6 () {
{
struct __test_0  __var_2;
int  __var_3;

{
if (__static_condition_default_4) {
 __var_2  . __x_1 = 1 ;

}

if (__static_condition_default_5) {
__static_type_error("type error") ;

}

}}


}

