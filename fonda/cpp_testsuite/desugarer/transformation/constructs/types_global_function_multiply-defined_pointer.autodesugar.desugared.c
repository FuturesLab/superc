#include <stdbool.h>

extern void __static_parse_error(char *msg);
extern void __static_type_error(char *msg);
extern void __static_renaming(char *renaming, char *original);
extern void __static_condition_renaming(char *expression, char *renaming);

void __static_initializer_default();

extern const bool __static_condition_default_3;
extern const bool __static_condition_default_9;
void __static_initializer_default() {
__static_renaming("___C_40496_0", "_C_40496");
__static_renaming("___C_40496_DEFINED_1", "_C_40496_DEFINED");
__static_renaming("___F058Niv_x_2", "_F058Niv_x");
__static_renaming("___F1HJ7pu_x_4", "_F1HJ7pu_x");
__static_renaming("___F2GLV8v_main_5", "_F2GLV8v_main");
__static_renaming("__main_8", "main");

__static_condition_renaming("__static_condition_default_3", "!(defined __cplusplus)");
__static_condition_renaming("__static_condition_default_9", "(defined __cplusplus)");

if (__static_condition_default_9)
{
__static_parse_error("Unable to parse");
}
};

extern _Bool  ___C_40496_0;// L3:L33
extern _Bool  ___C_40496_DEFINED_1;// L4:L33
int  (___F058Niv_x_2) () {

{
{



if (__static_condition_default_3) {
if (  ___C_40496_DEFINED_1  )// L7
{

{
{




{
{



if (  ___C_40496_DEFINED_1  )// L8
{

{
{



return 1 ;// L9
}
}
}
}
}
}
}
}
}
}
}


}
char  (___F1HJ7pu_x_4) () {

{
{



if (__static_condition_default_3) {
if ( !  ___C_40496_DEFINED_1  )// L17
{

{
{




{
{



if ( !  ___C_40496_DEFINED_1  )// L18
{

{
{



return 2 ;// L19
}
}
}
}
}
}
}
}
}
}
}


}
int  (___F2GLV8v_main_5) () {

{
{



if ( 1 )// L27
{

{
{




{
{



}
}
}
}
}
}
}


}
int  (__main_8) (int  __argc_6, char  * (* (__argv_7))) {

{
{



if ( 1 )// L33
{

{
{



__static_type_error("type error : no valid expression"); // L34
}
}
}
}
}


}

