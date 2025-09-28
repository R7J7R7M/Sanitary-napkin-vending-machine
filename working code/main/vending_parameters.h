#ifndef VENDING_PARAMETERS_H
#define VENDING_PARAMETERS_H
#include <stdbool.h>


#ifdef __cplusplus
extern "C" {
#endif

// --------- Public API for vending logic ---------

/**
 * @brief Dispense a product.
 * This function controls motor, LEDs, and timing needed to vend.
 */
bool vend_product(void);
void start_motor(void);



#ifdef __cplusplus
} // extern "C"
#endif

#endif // VENDING_PARAMETERS_H
