#include <stdbool.h>

extern void __static_type_error(char *msg);
extern void __static_renaming(char *renaming, char *original);
extern void __static_condition_renaming(char *expression, char *renaming);

void __static_initializer_default();

extern const bool __static_condition_default_5;
extern const bool __static_condition_default_8;
void __static_initializer_default() {
__static_renaming("__bob_3", "bob");
__static_renaming("__bobStruct_4", "bobStruct");
__static_renaming("__main_6", "main");
__static_renaming("__main_7", "main");

__static_condition_renaming("__static_condition_default_5", "(defined A)");
__static_condition_renaming("__static_condition_default_8", "!(defined A)");

};
struct __bob_0 {
int  __val_1;
char  __otherVal_2;
};
typedef struct __bob_0  __bob_3;

// typedef moved to top of scope
int  __main_6 (void  ) {

{
if (__static_condition_default_8) {
{
__bob_3  __bobStruct_4;
}

}

}
}
int  __main_7 (void  ) {

{
if (__static_condition_default_5) {
{
__bob_3  __bobStruct_4;

if (__static_condition_default_5) {
 __bobStruct_4  . __val_1 = 1 ;

}
}

}

}
}

