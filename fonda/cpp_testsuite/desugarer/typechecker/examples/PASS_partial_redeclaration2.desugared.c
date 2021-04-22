#include <stdbool.h>

extern void __static_parse_error(char *msg);
extern void __static_type_error(char *msg);
extern void __static_renaming(char *renaming, char *original);
extern void __static_condition_renaming(char *expression, char *renaming);

void __static_initializer_default();

extern const bool __static_condition_default_2;
extern const bool __static_condition_default_5;
extern const bool __static_condition_default_4;
void __static_initializer_default() {
__static_renaming("__x_0", "x");
__static_renaming("__x_3", "x");
__static_renaming("__main_6", "main");

__static_condition_renaming("__static_condition_default_2", "(defined A) && (defined OKAY)");
__static_condition_renaming("__static_condition_default_4", "!(defined OKAY)");
__static_condition_renaming("__static_condition_default_5", "(defined OKAY)");

if (0)
{
__static_parse_error("Unable to parse");
}
};

int  __main_6 () {
{
int  __x_0;
if (__static_condition_default_2) {
__static_type_error("redeclaration of local symbol: x");
}

int  __x_3;

{
if (__static_condition_default_4) {
return 0 ;

}

if (__static_condition_default_5) {
return 0 ;

}

}}


}

