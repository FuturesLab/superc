#include <stdbool.h>

extern void __static_type_error(char *msg);
extern void __static_renaming(char *renaming, char *original);
extern void __static_condition_renaming(char *expression, char *renaming);

void __static_initializer_default();

extern const bool __static_condition_default_6;
extern const bool __static_condition_default_9;
extern const bool __static_condition_default_4;
extern const bool __static_condition_default_8;
extern const bool __static_condition_default_7;
extern const bool __static_condition_default_3;
extern const bool __static_condition_default_5;
void __static_initializer_default() {
__static_renaming("__main_0", "main");
__static_renaming("__x_1", "x");
__static_renaming("__y_2", "y");

__static_condition_renaming("__static_condition_default_3", "(declare-fun |(defined CONFIG_C)| () Bool)(declare-fun |(defined CONFIG_B)| () Bool)(declare-fun |(defined CONFIG_A)| () Bool)(assert (let ((a!1 (or (and |(defined CONFIG_B)|                    (not (and |(defined CONFIG_B)| |(defined CONFIG_A)|))                    (not (and |(defined CONFIG_B)| |(defined CONFIG_C)|)))               (and |(defined CONFIG_B)|                    (not (and |(defined CONFIG_B)| |(defined CONFIG_A)|))                    |(defined CONFIG_C)|))))  (or (and |(defined CONFIG_B)|           |(defined CONFIG_A)|           (not (and |(defined CONFIG_B)| |(defined CONFIG_C)|)))      (and |(defined CONFIG_B)| |(defined CONFIG_A)| |(defined CONFIG_C)|)      (and a!1 (not (and |(defined CONFIG_B)| |(defined CONFIG_C)|)))      (and a!1 |(defined CONFIG_B)| |(defined CONFIG_C)|))))(assert (not (and |(defined CONFIG_B)| |(defined CONFIG_C)|)))(assert (let ((a!1 (or (and |(defined CONFIG_B)|                    (not (and |(defined CONFIG_B)| |(defined CONFIG_A)|))                    (not (and |(defined CONFIG_B)| |(defined CONFIG_C)|)))               (and |(defined CONFIG_B)|                    (not (and |(defined CONFIG_B)| |(defined CONFIG_A)|))                    |(defined CONFIG_C)|))))(let ((a!2 (or (and |(defined CONFIG_B)|                    |(defined CONFIG_A)|                    (not (and |(defined CONFIG_B)| |(defined CONFIG_C)|)))               (and |(defined CONFIG_B)|                    |(defined CONFIG_A)|                    |(defined CONFIG_C)|)               (and a!1 (not (and |(defined CONFIG_B)| |(defined CONFIG_C)|)))               (and a!1 |(defined CONFIG_B)| |(defined CONFIG_C)|))))  (or (and a!2 (not (and |(defined CONFIG_B)| |(defined CONFIG_C)|)))      (and a!2 |(defined CONFIG_B)| |(defined CONFIG_C)|)))))");
__static_condition_renaming("__static_condition_default_4", "(declare-fun |(defined CONFIG_C)| () Bool)(declare-fun |(defined CONFIG_B)| () Bool)(declare-fun |(defined CONFIG_A)| () Bool)(assert (let ((a!1 (or (and |(defined CONFIG_B)|                    (not (and |(defined CONFIG_B)| |(defined CONFIG_A)|))                    (not (and |(defined CONFIG_B)| |(defined CONFIG_C)|)))               (and |(defined CONFIG_B)|                    (not (and |(defined CONFIG_B)| |(defined CONFIG_A)|))                    |(defined CONFIG_C)|))))  (or (and |(defined CONFIG_B)|           |(defined CONFIG_A)|           (not (and |(defined CONFIG_B)| |(defined CONFIG_C)|)))      (and |(defined CONFIG_B)| |(defined CONFIG_A)| |(defined CONFIG_C)|)      (and a!1 (not (and |(defined CONFIG_B)| |(defined CONFIG_C)|)))      (and a!1 |(defined CONFIG_B)| |(defined CONFIG_C)|))))(assert |(defined CONFIG_B)|)(assert |(defined CONFIG_C)|)(assert (let ((a!1 (or (and |(defined CONFIG_B)|                    (not (and |(defined CONFIG_B)| |(defined CONFIG_A)|))                    (not (and |(defined CONFIG_B)| |(defined CONFIG_C)|)))               (and |(defined CONFIG_B)|                    (not (and |(defined CONFIG_B)| |(defined CONFIG_A)|))                    |(defined CONFIG_C)|))))(let ((a!2 (or (and |(defined CONFIG_B)|                    |(defined CONFIG_A)|                    (not (and |(defined CONFIG_B)| |(defined CONFIG_C)|)))               (and |(defined CONFIG_B)|                    |(defined CONFIG_A)|                    |(defined CONFIG_C)|)               (and a!1 (not (and |(defined CONFIG_B)| |(defined CONFIG_C)|)))               (and a!1 |(defined CONFIG_B)| |(defined CONFIG_C)|))))  (or (and a!2 (not (and |(defined CONFIG_B)| |(defined CONFIG_C)|)))      (and a!2 |(defined CONFIG_B)| |(defined CONFIG_C)|)))))");
__static_condition_renaming("__static_condition_default_5", "(declare-fun |(defined CONFIG_C)| () Bool)(declare-fun |(defined CONFIG_A)| () Bool)(declare-fun |(defined CONFIG_B)| () Bool)(assert (or (and |(defined CONFIG_B)|         |(defined CONFIG_A)|         (not (and |(defined CONFIG_B)| |(defined CONFIG_C)|)))    (and |(defined CONFIG_B)| |(defined CONFIG_A)| |(defined CONFIG_C)|)))(assert (let ((a!1 (or (and |(defined CONFIG_B)|                    (not (and |(defined CONFIG_B)| |(defined CONFIG_A)|))                    (not (and |(defined CONFIG_B)| |(defined CONFIG_C)|)))               (and |(defined CONFIG_B)|                    (not (and |(defined CONFIG_B)| |(defined CONFIG_A)|))                    |(defined CONFIG_C)|))))(let ((a!2 (or (and |(defined CONFIG_B)|                    |(defined CONFIG_A)|                    (not (and |(defined CONFIG_B)| |(defined CONFIG_C)|)))               (and |(defined CONFIG_B)|                    |(defined CONFIG_A)|                    |(defined CONFIG_C)|)               (and a!1 (not (and |(defined CONFIG_B)| |(defined CONFIG_C)|)))               (and a!1 |(defined CONFIG_B)| |(defined CONFIG_C)|))))  (or (and a!2 (not (and |(defined CONFIG_B)| |(defined CONFIG_C)|)))      (and a!2 |(defined CONFIG_B)| |(defined CONFIG_C)|)))))(assert (let ((a!1 (or (and |(defined CONFIG_B)|                    (not (and |(defined CONFIG_B)| |(defined CONFIG_A)|))                    (not (and |(defined CONFIG_B)| |(defined CONFIG_C)|)))               (and |(defined CONFIG_B)|                    (not (and |(defined CONFIG_B)| |(defined CONFIG_A)|))                    |(defined CONFIG_C)|))))  (or (and |(defined CONFIG_B)|           |(defined CONFIG_A)|           (not (and |(defined CONFIG_B)| |(defined CONFIG_C)|)))      (and |(defined CONFIG_B)| |(defined CONFIG_A)| |(defined CONFIG_C)|)      (and a!1 (not (and |(defined CONFIG_B)| |(defined CONFIG_C)|)))      (and a!1 |(defined CONFIG_B)| |(defined CONFIG_C)|))))(assert |(defined CONFIG_B)|)(assert |(defined CONFIG_C)|)(assert (let ((a!1 (or (and |(defined CONFIG_B)|                    (not (and |(defined CONFIG_B)| |(defined CONFIG_A)|))                    (not (and |(defined CONFIG_B)| |(defined CONFIG_C)|)))               (and |(defined CONFIG_B)|                    (not (and |(defined CONFIG_B)| |(defined CONFIG_A)|))                    |(defined CONFIG_C)|)))      (a!4 (or (and |(defined CONFIG_B)|                    |(defined CONFIG_A)|                    (not (and |(defined CONFIG_B)| |(defined CONFIG_C)|)))               (and |(defined CONFIG_B)|                    |(defined CONFIG_A)|                    |(defined CONFIG_C)|))))(let ((a!2 (or (and |(defined CONFIG_B)|                    |(defined CONFIG_A)|                    (not (and |(defined CONFIG_B)| |(defined CONFIG_C)|)))               (and |(defined CONFIG_B)|                    |(defined CONFIG_A)|                    |(defined CONFIG_C)|)               (and a!1 (not (and |(defined CONFIG_B)| |(defined CONFIG_C)|)))               (and a!1 |(defined CONFIG_B)| |(defined CONFIG_C)|))))(let ((a!3 (or (and a!2 (not (and |(defined CONFIG_B)| |(defined CONFIG_C)|)))               (and a!2 |(defined CONFIG_B)| |(defined CONFIG_C)|))))  (not (and a!3 (not (and a!2 |(defined CONFIG_B)| |(defined CONFIG_C)|)) a!4))))))(assert (let ((a!1 (or (and |(defined CONFIG_B)|                    (not (and |(defined CONFIG_B)| |(defined CONFIG_A)|))                    (not (and |(defined CONFIG_B)| |(defined CONFIG_C)|)))               (and |(defined CONFIG_B)|                    (not (and |(defined CONFIG_B)| |(defined CONFIG_A)|))                    |(defined CONFIG_C)|)))      (a!4 (or (and |(defined CONFIG_B)|                    |(defined CONFIG_A)|                    (not (and |(defined CONFIG_B)| |(defined CONFIG_C)|)))               (and |(defined CONFIG_B)|                    |(defined CONFIG_A)|                    |(defined CONFIG_C)|))))(let ((a!2 (or (and |(defined CONFIG_B)|                    |(defined CONFIG_A)|                    (not (and |(defined CONFIG_B)| |(defined CONFIG_C)|)))               (and |(defined CONFIG_B)|                    |(defined CONFIG_A)|                    |(defined CONFIG_C)|)               (and a!1 (not (and |(defined CONFIG_B)| |(defined CONFIG_C)|)))               (and a!1 |(defined CONFIG_B)| |(defined CONFIG_C)|))))(let ((a!3 (or (and a!2 (not (and |(defined CONFIG_B)| |(defined CONFIG_C)|)))               (and a!2 |(defined CONFIG_B)| |(defined CONFIG_C)|))))  (not (and a!3 a!2 |(defined CONFIG_B)| |(defined CONFIG_C)| (not a!4)))))))(assert (let ((a!1 (or (and |(defined CONFIG_B)|                    (not (and |(defined CONFIG_B)| |(defined CONFIG_A)|))                    (not (and |(defined CONFIG_B)| |(defined CONFIG_C)|)))               (and |(defined CONFIG_B)|                    (not (and |(defined CONFIG_B)| |(defined CONFIG_A)|))                    |(defined CONFIG_C)|)))      (a!4 (or (and |(defined CONFIG_B)|                    |(defined CONFIG_A)|                    (not (and |(defined CONFIG_B)| |(defined CONFIG_C)|)))               (and |(defined CONFIG_B)|                    |(defined CONFIG_A)|                    |(defined CONFIG_C)|))))(let ((a!2 (or (and |(defined CONFIG_B)|                    |(defined CONFIG_A)|                    (not (and |(defined CONFIG_B)| |(defined CONFIG_C)|)))               (and |(defined CONFIG_B)|                    |(defined CONFIG_A)|                    |(defined CONFIG_C)|)               (and a!1 (not (and |(defined CONFIG_B)| |(defined CONFIG_C)|)))               (and a!1 |(defined CONFIG_B)| |(defined CONFIG_C)|))))(let ((a!3 (or (and a!2 (not (and |(defined CONFIG_B)| |(defined CONFIG_C)|)))               (and a!2 |(defined CONFIG_B)| |(defined CONFIG_C)|))))  (not (and a!3            (not (and a!2 |(defined CONFIG_B)| |(defined CONFIG_C)|))            (not a!4)))))))");
__static_condition_renaming("__static_condition_default_6", "(declare-fun |(defined CONFIG_C)| () Bool)(declare-fun |(defined CONFIG_A)| () Bool)(declare-fun |(defined CONFIG_B)| () Bool)(assert (or (and |(defined CONFIG_B)|         |(defined CONFIG_A)|         (not (and |(defined CONFIG_B)| |(defined CONFIG_C)|)))    (and |(defined CONFIG_B)| |(defined CONFIG_A)| |(defined CONFIG_C)|)))(assert (let ((a!1 (or (and |(defined CONFIG_B)|                    (not (and |(defined CONFIG_B)| |(defined CONFIG_A)|))                    (not (and |(defined CONFIG_B)| |(defined CONFIG_C)|)))               (and |(defined CONFIG_B)|                    (not (and |(defined CONFIG_B)| |(defined CONFIG_A)|))                    |(defined CONFIG_C)|))))(let ((a!2 (or (and |(defined CONFIG_B)|                    |(defined CONFIG_A)|                    (not (and |(defined CONFIG_B)| |(defined CONFIG_C)|)))               (and |(defined CONFIG_B)|                    |(defined CONFIG_A)|                    |(defined CONFIG_C)|)               (and a!1 (not (and |(defined CONFIG_B)| |(defined CONFIG_C)|)))               (and a!1 |(defined CONFIG_B)| |(defined CONFIG_C)|))))  (or (and a!2 (not (and |(defined CONFIG_B)| |(defined CONFIG_C)|)))      (and a!2 |(defined CONFIG_B)| |(defined CONFIG_C)|)))))");
__static_condition_renaming("__static_condition_default_7", "(declare-fun |(defined CONFIG_C)| () Bool)(declare-fun |(defined CONFIG_A)| () Bool)(declare-fun |(defined CONFIG_B)| () Bool)(assert (or (and |(defined CONFIG_B)|         |(defined CONFIG_A)|         (not (and |(defined CONFIG_B)| |(defined CONFIG_C)|)))    (and |(defined CONFIG_B)| |(defined CONFIG_A)| |(defined CONFIG_C)|)))(assert (let ((a!1 (or (and |(defined CONFIG_B)|                    (not (and |(defined CONFIG_B)| |(defined CONFIG_A)|))                    (not (and |(defined CONFIG_B)| |(defined CONFIG_C)|)))               (and |(defined CONFIG_B)|                    (not (and |(defined CONFIG_B)| |(defined CONFIG_A)|))                    |(defined CONFIG_C)|))))(let ((a!2 (or (and |(defined CONFIG_B)|                    |(defined CONFIG_A)|                    (not (and |(defined CONFIG_B)| |(defined CONFIG_C)|)))               (and |(defined CONFIG_B)|                    |(defined CONFIG_A)|                    |(defined CONFIG_C)|)               (and a!1 (not (and |(defined CONFIG_B)| |(defined CONFIG_C)|)))               (and a!1 |(defined CONFIG_B)| |(defined CONFIG_C)|))))  (or (and a!2 (not (and |(defined CONFIG_B)| |(defined CONFIG_C)|)))      (and a!2 |(defined CONFIG_B)| |(defined CONFIG_C)|)))))");
__static_condition_renaming("__static_condition_default_8", "(declare-fun |(defined CONFIG_C)| () Bool)(declare-fun |(defined CONFIG_B)| () Bool)(declare-fun |(defined CONFIG_A)| () Bool)(assert (let ((a!1 (or (and |(defined CONFIG_B)|                    (not (and |(defined CONFIG_B)| |(defined CONFIG_A)|))                    (not (and |(defined CONFIG_B)| |(defined CONFIG_C)|)))               (and |(defined CONFIG_B)|                    (not (and |(defined CONFIG_B)| |(defined CONFIG_A)|))                    |(defined CONFIG_C)|))))(let ((a!2 (or (and |(defined CONFIG_B)|                    |(defined CONFIG_A)|                    (not (and |(defined CONFIG_B)| |(defined CONFIG_C)|)))               (and |(defined CONFIG_B)|                    |(defined CONFIG_A)|                    |(defined CONFIG_C)|)               (and a!1 (not (and |(defined CONFIG_B)| |(defined CONFIG_C)|)))               (and a!1 |(defined CONFIG_B)| |(defined CONFIG_C)|))))  (or (and a!2 (not (and |(defined CONFIG_B)| |(defined CONFIG_C)|)))      (and a!2 |(defined CONFIG_B)| |(defined CONFIG_C)|)))))(assert (let ((a!1 (or (and |(defined CONFIG_B)|                    |(defined CONFIG_A)|                    (not (and |(defined CONFIG_B)| |(defined CONFIG_C)|)))               (and |(defined CONFIG_B)|                    |(defined CONFIG_A)|                    |(defined CONFIG_C)|)))      (a!2 (or (and |(defined CONFIG_B)|                    (not (and |(defined CONFIG_B)| |(defined CONFIG_A)|))                    (not (and |(defined CONFIG_B)| |(defined CONFIG_C)|)))               (and |(defined CONFIG_B)|                    (not (and |(defined CONFIG_B)| |(defined CONFIG_A)|))                    |(defined CONFIG_C)|))))(let ((a!3 (or (and |(defined CONFIG_B)|                    |(defined CONFIG_A)|                    (not (and |(defined CONFIG_B)| |(defined CONFIG_C)|)))               (and |(defined CONFIG_B)|                    |(defined CONFIG_A)|                    |(defined CONFIG_C)|)               (and a!2 (not (and |(defined CONFIG_B)| |(defined CONFIG_C)|)))               (and a!2 |(defined CONFIG_B)| |(defined CONFIG_C)|))))(let ((a!4 (or (and a!3 (not (and |(defined CONFIG_B)| |(defined CONFIG_C)|)))               (and a!3 |(defined CONFIG_B)| |(defined CONFIG_C)|))))  (not (and a!1 a!4))))))");
__static_condition_renaming("__static_condition_default_9", "(declare-fun |(defined CONFIG_C)| () Bool)(declare-fun |(defined CONFIG_B)| () Bool)(declare-fun |(defined CONFIG_A)| () Bool)(assert (let ((a!1 (or (and |(defined CONFIG_B)|                    (not (and |(defined CONFIG_B)| |(defined CONFIG_A)|))                    (not (and |(defined CONFIG_B)| |(defined CONFIG_C)|)))               (and |(defined CONFIG_B)|                    (not (and |(defined CONFIG_B)| |(defined CONFIG_A)|))                    |(defined CONFIG_C)|))))(let ((a!2 (or (and |(defined CONFIG_B)|                    |(defined CONFIG_A)|                    (not (and |(defined CONFIG_B)| |(defined CONFIG_C)|)))               (and |(defined CONFIG_B)|                    |(defined CONFIG_A)|                    |(defined CONFIG_C)|)               (and a!1 (not (and |(defined CONFIG_B)| |(defined CONFIG_C)|)))               (and a!1 |(defined CONFIG_B)| |(defined CONFIG_C)|))))  (or (and a!2 (not (and |(defined CONFIG_B)| |(defined CONFIG_C)|)))      (and a!2 |(defined CONFIG_B)| |(defined CONFIG_C)|)))))");

};

int  __main_0 () {

if (__static_condition_default_9) {
{
int  __x_1;
int  __y_2;

{
if (__static_condition_default_3) {
__static_type_error("type error");

}

if (__static_condition_default_4) {
 __y_2  = 4 ;

}

}
if (__static_condition_default_5) {
 __x_1  =  __y_2  ;

}

if (__static_condition_default_6) {
 __x_1  ++ ;

}

{
if (__static_condition_default_7) {
return  __x_1  ;

}

if (__static_condition_default_8) {
__static_type_error("invalid type found in return expression");

}

}}

}

}

