#include <iostream>
#include "io.h"
#include "tower.h"
#include "sizeOf.h"




int main()
{
    //=============== PART ONE: MATH ===============//
    std::cout << "Enter two floating point numbers and select an operand:" << std::endl;

    double x = enterDouble();
    double y = enterDouble();

    char o = enterOperand();

    printResult(x, y, o);

    //=============== PART TWO: TOWER ===============//
    const double towerHeight = getTowerHeight();

    calculateAndPrintResults(towerHeight, 1);
    calculateAndPrintResults(towerHeight, 2);
    calculateAndPrintResults(towerHeight, 3);
    calculateAndPrintResults(towerHeight, 4);
    calculateAndPrintResults(towerHeight, 5);

    //=============== PART THREE: SIZES ===============//
    sizeOf();

    return 0;
}



//=============== PART FOUR: CH2 RULES ===============//



//Rule: Favor direct initialization over copy initialization
//Rule: If you’re using a C++11 compatible compiler, favor uniform initialization
//Rule: Avoid defining multiple variables on a single line if initializing any of them.
//Rule: Define variables as close to their first use as you reasonably can.

//Rule: Use an empty parameter list instead of void to indicate no function parameters are expected

//Rule: Favor signed integers over unsigned integers
//Rule: Do not depend on the results of overflow in your program.
//Rule: Be careful when using integer division, as you will lose any fractional parts of the result

//Rule: Avoid int8_t and uint8_t. If you do use them, note that they are often treated like chars.

//Rule: Favor double over float unless space is at a premium, as the lack of precision in a float will often lead to inaccuracies.

//Rule: Don’t use magic numbers in your code.

//Rule: Any variable that should not change values after initialization and whose initializer is known at compile-time should be declared as constexpr.
//Rule: Any variable that should not change values after initialization and whose initializer is not known at compile-time should be declared as const.

//Rule: Avoid using #define to create symbolic constants
//Rule: use const variables to provide a name and context for your magic numbers.

