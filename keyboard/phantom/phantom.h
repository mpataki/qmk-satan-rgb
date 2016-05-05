#ifndef PHANTOM_H
#define PHANTOM_H

#include "matrix.h"
#include "keymap_common.h"
#include "backlight.h"
#include "rgblight.h"
#include <stddef.h>

// This a shortcut to help you visually see your layout.
// The following is an example using the Planck MIT layout
// The first section contains all of the arguements
// The second converts the arguments into a two-dimensional array
#define KEYMAP( \
	k00,   k01, k02, k03, k04,   k05, k06, k07, k08,  k09, k0a, k0b, k0c, 	k0d, k0e, k0f, \
	k10, k11, k12, k13, k14, k15, k16, k17, k18, k19, k1a, k1b, k1c, k1d, 	k1e, k1f, k1g, \
	k20, k21, k22, k23, k24, k25, k26, k27, k28, k29, k2a, k2b, k2c, k2d, 	k2e, k2f, k2g, \
	k30, k31, k32, k33, k34, k35, k36, k37, k38, k39, k3a, k3b,      k3c, 				   \
	k40, k41, k42, k43, k44, k45, k46, k47, k48, k49, k4a,           k4b,		 k4c, 	   \
	k50, k51, k52, 				  k53,				  k54, k55, k56, k57,	k58, k59, k5a \
) \
{ \
		{k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, k0a, k0b, k0c, k0d, k0e, k0f}, \
		{k10, k11, k12, k13, k14, k15, k16, k17, k18, k19, k1a, k1b, k1c, k1d, k1e, k1f, k1g}, \
		{k20, k21, k22, k23, k24, k25, k26, k27, k28, k29, k2a, k2b, k2c, k2d, k2e, k2f, k2g}, \
		{k30, k31, k32, k33, k34, k35, k36, k37, k38, k39, k3a, k3b, k3c}, \
		{k40, k41, k42, k43, k44, k45, k46, k47, k48, k49, k4a, k4b, k4c},  \
		{k50, k51, k52, k53, k54, k55, k56, k57, k58, k59, k5a} \
}

void * matrix_init_user(void);
void * matrix_scan_user(void);

#endif
