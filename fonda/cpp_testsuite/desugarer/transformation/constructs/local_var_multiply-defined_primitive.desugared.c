#include <stdbool.h>

extern void __static_type_error(char *msg);
extern void __static_renaming(char *renaming, char *original);
extern void __static_condition_renaming(char *expression, char *renaming);

void __static_initializer_default();

extern const bool __static_condition_default_4;
extern const bool __static_condition_default_3;
void __static_initializer_default() {
__static_renaming("__main_0", "main");
__static_renaming("__x_1", "x");
__static_renaming("__x_2", "x");

__static_condition_renaming("__static_condition_default_3", "(declare-fun |(defined CONFIG_A)| () Bool)(assert |(defined CONFIG_A)|)");
__static_condition_renaming("__static_condition_default_4", "(declare-fun |(defined CONFIG_A)| () Bool)(assert (not |(defined CONFIG_A)|))");

};

int  __main_0 () {
{
int  __x_1;
char  __x_2;

{
if (__static_condition_default_3) {
 __x_1  ++ ;

}

if (__static_condition_default_4) {
 __x_2  ++ ;

}

}
{
if (__static_condition_default_3) {
return  __x_1  ;

}

if (__static_condition_default_4) {
return  __x_2  ;

}

}}


}

