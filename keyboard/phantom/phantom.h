#ifndef PHANTOM_H
#define PHANTOM_H

#include "matrix.h"
#include "keymap_common.h"
#include "backlight.h"
#include "rgblight.h"
#include <stddef.h>

// This a shortcut to help you visually see your layout.
// The first section contains all of the arguements
// The second converts the arguments into a two-dimensional array
// Please note the following remaps specific to the Phantom:
// Tilde is physically on row 1, logically on row 0.
// There is an alternate row 0 layout (7bit?) that puts 3, 6, and 9 from row 5 onto row 0.
// Row 3 has a set of three keys in line with the arrow cluster which can be utilized (7bit layout)
// Supports a short left shift plus a 1u key on row 4. Supports a short right shift plus a 1u key.
//  has support for two additional 1u keys to the left and right of the Up arrow.
// Multiple options regarding space bar/bottom row layout. Again, 7bit. Plus keys physically located on row 0.
#define KEYMAP( \
	k00, k02, k03, k04, k05, k06, k07, k08, k09, k0a, k0b, k0c, k0d, k0e, k0f, k0g, \
	k01, k10, k11, k12, k13, k14, k15, k16, k17, k18, k19, k1a, k1b, k1d, k1e, k1f, k1g, \
	k20, k21, k22, k23, k24, k25, k26, k27, k28, k29, k2a, k2b, k2c, k2d, k2e, k2f, k2g, \
	k30, k31, k32, k33, k34, k35, k36, k37, k38, k39, k3a, k3b, k3d, \
	k40, k42, k43, k44, k45, k46, k47, k48, k49, k4a, k4b, k4d, k4f, \
	k50, k51, k52, k57, k5b, k5c, k5d, k5e, k5f, k5g  \
) \
{ \
		{k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, k0a, k0b, k0c, k0d, k0e, k0f, k0g}, \
		{k10, k11, k12, k13, k14, k15, k16, k17, k18, k19, k1a, k1b, k1d, k1d, k1e, k1f, k1g}, \
		{k20, k21, k22, k23, k24, k25, k26, k27, k28, k29, k2a, k2b, k2c, k2d, k2e, k2f, k2g}, \
		{k30, k31, k32, k33, k34, k35, k36, k37, k38, k39, k3a, k3b, k3d, k3d, k3d, k3d, k3d}, \
		{k40, k40, k42, k43, k44, k45, k46, k47, k48, k49, k4a, k4b, k4d, k4d, k4f, k4f, k4f},  \
		{k50, k51, k52, k57, k57, k57, k57, k57, k57, k57, k57, k5b, k5c, k5d, k5e, k5f, k5g} \
}

void * matrix_init_user(void);
void * matrix_scan_user(void);

#endif
