#include <stdbool.h>

extern void __static_type_error(char *msg);
extern void __static_renaming(char *renaming, char *original);
extern void __static_condition_renaming(char *expression, char *renaming);

void __static_initializer_default();

extern const bool __static_condition_default_5;
void __static_initializer_default() {
__static_renaming("__main_2", "main");
__static_renaming("__var_3", "var");
__static_renaming("__var_4", "var");

__static_condition_renaming("__static_condition_default_5", "(declare-fun |(defined A)| () Bool)(assert |(defined A)|)");

};
struct __test_0 {
int  __x_1;
};

struct __test_0 ;
int  __main_2 () {
{
struct __test_0  __var_3;
int  __var_4;

if (__static_condition_default_5) {
 __var_3  . __x_1 = 1 ;

}
}


}

