#include <stdbool.h>

extern void __static_type_error(char *msg);
extern void __static_renaming(char *renaming, char *original);
extern void __static_condition_renaming(char *expression, char *renaming);

void __static_initializer_default();

extern const bool __static_condition_default_4;
void __static_initializer_default() {
__static_renaming("__a_0", "a");
__static_renaming("__main_1", "main");
__static_renaming("__main_2", "main");
__static_renaming("__first_3", "first");

__static_condition_renaming("__static_condition_default_4", "(declare-fun |(defined A)| () Bool)(assert |(defined A)|)");

};
typedef int  __a_0;

// typedef moved to top of scope
int  __main_2 () {

if (__static_condition_default_4) {
{
int  __first_3;

if (__static_condition_default_4) {
return 0 ;

}
}

}

}

