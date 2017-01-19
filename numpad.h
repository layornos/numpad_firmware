#ifndef NUMPAD_H
#define NUMPAD_H

#ifdef SUBPROJECT_rev3
    #include "rev3.h"
#endif
#ifdef SUBPROJECT_rev4
    #include "rev4.h"
#endif

#include "quantum.h"

#define PLANCK_MIT( \
	k00, k01, k02, k03, \
	k10, k11, k12, k13, \
    k21, k22, k23,      \
	k30, k31, k32, k33, \
    k40, k41, k42       \
) \
{ \
	{ k00, k01, k02, k03 }, \
	{ k10, k11, k12, k13 }, \
	{ k21, k22, k23      }, \
	{ k30, k31, k32, k33 }, \
    { k40, k41, k42      }  \
}

#define PLANCK_GRID( \
    k00, k01, k02, k03, \
    k10, k11, k12, k13, \
    k21, k22, k23,      \
    k30, k31, k32, k33, \
    k40, k41, k42       \
) \
{ \
    { k00, k01, k02, k03 }, \
    { k10, k11, k12, k13 }, \
    { k21, k22, k23      }, \
    { k30, k31, k32, k33 }, \
    { k40, k41, k42      }  \
}

#endif