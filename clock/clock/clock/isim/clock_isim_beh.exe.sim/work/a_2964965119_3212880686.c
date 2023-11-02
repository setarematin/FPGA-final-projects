/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
extern char *IEEE_P_2592010699;
static const char *ng1 = "C:/Users/User/Desktop/daneshgah/FPGA/project/FPGA_project/clock/clock/clock/clock.vhd";
extern char *IEEE_P_3620187407;

unsigned char ieee_p_2592010699_sub_1690584930_503743352(char *, unsigned char );
int ieee_p_3620187407_sub_514432868_3965413181(char *, char *, char *);


char *work_a_2964965119_3212880686_sub_2310700199_3057020925(char *t1, char *t2, int t3)
{
    char t4[128];
    char t5[8];
    char t6[16];
    char t13[8];
    char *t0;
    char *t7;
    char *t8;
    int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t20;
    char *t21;
    int t22;
    int t23;
    int t24;
    unsigned int t25;

LAB0:    t7 = (t6 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 6;
    t8 = (t7 + 4U);
    *((int *)t8) = 0;
    t8 = (t7 + 8U);
    *((int *)t8) = -1;
    t9 = (0 - 6);
    t10 = (t9 * -1);
    t10 = (t10 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t10;
    t8 = (t4 + 4U);
    t11 = ((IEEE_P_2592010699) + 4024);
    t12 = (t8 + 88U);
    *((char **)t12) = t11;
    t14 = (t8 + 56U);
    *((char **)t14) = t13;
    xsi_type_set_default_value(t11, t13, t6);
    t15 = (t8 + 64U);
    *((char **)t15) = t6;
    t16 = (t8 + 80U);
    *((unsigned int *)t16) = 7U;
    t17 = (t5 + 4U);
    *((int *)t17) = t3;
    if (t3 == 0)
        goto LAB3;

LAB14:    if (t3 == 1)
        goto LAB4;

LAB15:    if (t3 == 2)
        goto LAB5;

LAB16:    if (t3 == 3)
        goto LAB6;

LAB17:    if (t3 == 4)
        goto LAB7;

LAB18:    if (t3 == 5)
        goto LAB8;

LAB19:    if (t3 == 6)
        goto LAB9;

LAB20:    if (t3 == 7)
        goto LAB10;

LAB21:    if (t3 == 8)
        goto LAB11;

LAB22:    if (t3 == 9)
        goto LAB12;

LAB23:
LAB13:    t7 = (t1 + 21022);
    t12 = (t8 + 56U);
    t14 = *((char **)t12);
    t12 = (t14 + 0);
    memcpy(t12, t7, 7U);

LAB2:    t7 = (t8 + 56U);
    t11 = *((char **)t7);
    t7 = (t6 + 12U);
    t10 = *((unsigned int *)t7);
    t10 = (t10 * 1U);
    t0 = xsi_get_transient_memory(t10);
    memcpy(t0, t11, t10);
    t12 = (t6 + 0U);
    t9 = *((int *)t12);
    t14 = (t6 + 4U);
    t22 = *((int *)t14);
    t15 = (t6 + 8U);
    t23 = *((int *)t15);
    t16 = (t2 + 0U);
    t18 = (t16 + 0U);
    *((int *)t18) = t9;
    t18 = (t16 + 4U);
    *((int *)t18) = t22;
    t18 = (t16 + 8U);
    *((int *)t18) = t23;
    t24 = (t22 - t9);
    t25 = (t24 * t23);
    t25 = (t25 + 1);
    t18 = (t16 + 12U);
    *((unsigned int *)t18) = t25;

LAB1:    return t0;
LAB3:    t18 = (t1 + 20952);
    t20 = (t8 + 56U);
    t21 = *((char **)t20);
    t20 = (t21 + 0);
    memcpy(t20, t18, 7U);
    goto LAB2;

LAB4:    t7 = (t1 + 20959);
    t12 = (t8 + 56U);
    t14 = *((char **)t12);
    t12 = (t14 + 0);
    memcpy(t12, t7, 7U);
    goto LAB2;

LAB5:    t7 = (t1 + 20966);
    t12 = (t8 + 56U);
    t14 = *((char **)t12);
    t12 = (t14 + 0);
    memcpy(t12, t7, 7U);
    goto LAB2;

LAB6:    t7 = (t1 + 20973);
    t12 = (t8 + 56U);
    t14 = *((char **)t12);
    t12 = (t14 + 0);
    memcpy(t12, t7, 7U);
    goto LAB2;

LAB7:    t7 = (t1 + 20980);
    t12 = (t8 + 56U);
    t14 = *((char **)t12);
    t12 = (t14 + 0);
    memcpy(t12, t7, 7U);
    goto LAB2;

LAB8:    t7 = (t1 + 20987);
    t12 = (t8 + 56U);
    t14 = *((char **)t12);
    t12 = (t14 + 0);
    memcpy(t12, t7, 7U);
    goto LAB2;

LAB9:    t7 = (t1 + 20994);
    t12 = (t8 + 56U);
    t14 = *((char **)t12);
    t12 = (t14 + 0);
    memcpy(t12, t7, 7U);
    goto LAB2;

LAB10:    t7 = (t1 + 21001);
    t12 = (t8 + 56U);
    t14 = *((char **)t12);
    t12 = (t14 + 0);
    memcpy(t12, t7, 7U);
    goto LAB2;

LAB11:    t7 = (t1 + 21008);
    t12 = (t8 + 56U);
    t14 = *((char **)t12);
    t12 = (t14 + 0);
    memcpy(t12, t7, 7U);
    goto LAB2;

LAB12:    t7 = (t1 + 21015);
    t12 = (t8 + 56U);
    t14 = *((char **)t12);
    t12 = (t14 + 0);
    memcpy(t12, t7, 7U);
    goto LAB2;

LAB24:;
LAB25:;
}

static void work_a_2964965119_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;

LAB0:    xsi_set_current_line(59, ng1);

LAB3:    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t1 = (t0 + 20524U);
    t3 = ieee_p_3620187407_sub_514432868_3965413181(IEEE_P_3620187407, t2, t1);
    t4 = (t0 + 10496);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((int *)t8) = t3;
    xsi_driver_first_trans_fast(t4);

LAB2:    t9 = (t0 + 10320);
    *((int *)t9) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_2964965119_3212880686_p_1(char *t0)
{
    unsigned char t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    int t9;
    int t10;
    char *t11;
    char *t12;
    char *t13;

LAB0:    xsi_set_current_line(65, ng1);
    t2 = (t0 + 992U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 10336);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(66, ng1);
    t4 = (t0 + 6448U);
    t8 = *((char **)t4);
    t9 = *((int *)t8);
    t10 = (t9 + 1);
    t4 = (t0 + 6448U);
    t11 = *((char **)t4);
    t4 = (t11 + 0);
    *((int *)t4) = t10;
    xsi_set_current_line(67, ng1);
    t2 = (t0 + 6448U);
    t4 = *((char **)t2);
    t9 = *((int *)t4);
    t10 = (10 / 2);
    t1 = (t9 == t10);
    if (t1 != 0)
        goto LAB8;

LAB10:
LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 1032U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(68, ng1);
    t2 = (t0 + 4392U);
    t5 = *((char **)t2);
    t3 = *((unsigned char *)t5);
    t6 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t3);
    t2 = (t0 + 10560);
    t8 = (t2 + 56U);
    t11 = *((char **)t8);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = t6;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(69, ng1);
    t2 = (t0 + 6448U);
    t4 = *((char **)t2);
    t2 = (t4 + 0);
    *((int *)t2) = 0;
    goto LAB9;

}

static void work_a_2964965119_3212880686_p_2(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    int t6;
    char *t7;
    unsigned char t8;
    unsigned char t9;
    unsigned char t10;
    unsigned char t11;
    char *t12;
    unsigned char t13;
    unsigned char t14;
    char *t15;
    int t16;
    char *t17;
    int t18;
    int t19;
    int t20;
    char *t21;
    int t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;

LAB0:    xsi_set_current_line(82, ng1);
    t1 = (t0 + 4552U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 4552U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB5;

LAB6:
LAB3:    xsi_set_current_line(105, ng1);
    t1 = (t0 + 6568U);
    t2 = *((char **)t1);
    t6 = *((int *)t2);
    t1 = (t0 + 10624);
    t5 = (t1 + 56U);
    t7 = *((char **)t5);
    t12 = (t7 + 56U);
    t15 = *((char **)t12);
    *((int *)t15) = t6;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(105, ng1);
    t1 = (t0 + 6688U);
    t2 = *((char **)t1);
    t6 = *((int *)t2);
    t1 = (t0 + 10688);
    t5 = (t1 + 56U);
    t7 = *((char **)t5);
    t12 = (t7 + 56U);
    t15 = *((char **)t12);
    *((int *)t15) = t6;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(105, ng1);
    t1 = (t0 + 6808U);
    t2 = *((char **)t1);
    t6 = *((int *)t2);
    t1 = (t0 + 10752);
    t5 = (t1 + 56U);
    t7 = *((char **)t5);
    t12 = (t7 + 56U);
    t15 = *((char **)t12);
    *((int *)t15) = t6;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(107, ng1);
    t1 = (t0 + 5032U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB25;

LAB27:    t1 = (t0 + 5032U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB40;

LAB41:
LAB26:    t1 = (t0 + 10352);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(83, ng1);
    t1 = (t0 + 3272U);
    t5 = *((char **)t1);
    t6 = *((int *)t5);
    t1 = (t0 + 6568U);
    t7 = *((char **)t1);
    t1 = (t7 + 0);
    *((int *)t1) = t6;
    xsi_set_current_line(83, ng1);
    t1 = (t0 + 3432U);
    t2 = *((char **)t1);
    t6 = *((int *)t2);
    t1 = (t0 + 6688U);
    t5 = *((char **)t1);
    t1 = (t5 + 0);
    *((int *)t1) = t6;
    xsi_set_current_line(83, ng1);
    t1 = (t0 + 3592U);
    t2 = *((char **)t1);
    t6 = *((int *)t2);
    t1 = (t0 + 6808U);
    t5 = *((char **)t1);
    t1 = (t5 + 0);
    *((int *)t1) = t6;
    goto LAB3;

LAB5:    xsi_set_current_line(86, ng1);
    t1 = (t0 + 4352U);
    t9 = xsi_signal_has_event(t1);
    if (t9 == 1)
        goto LAB10;

LAB11:    t8 = (unsigned char)0;

LAB12:    if (t8 != 0)
        goto LAB7;

LAB9:
LAB8:    goto LAB3;

LAB7:    xsi_set_current_line(88, ng1);
    t5 = (t0 + 4872U);
    t12 = *((char **)t5);
    t13 = *((unsigned char *)t12);
    t14 = (t13 == (unsigned char)3);
    if (t14 != 0)
        goto LAB13;

LAB15:
LAB14:    xsi_set_current_line(90, ng1);
    t1 = (t0 + 6808U);
    t2 = *((char **)t1);
    t6 = *((int *)t2);
    t16 = (t6 + 1);
    t1 = (t0 + 6808U);
    t5 = *((char **)t1);
    t1 = (t5 + 0);
    *((int *)t1) = t16;
    xsi_set_current_line(91, ng1);
    t1 = (t0 + 6808U);
    t2 = *((char **)t1);
    t6 = *((int *)t2);
    t3 = (t6 == 60);
    if (t3 != 0)
        goto LAB16;

LAB18:
LAB17:    goto LAB8;

LAB10:    t5 = (t0 + 4392U);
    t7 = *((char **)t5);
    t10 = *((unsigned char *)t7);
    t11 = (t10 == (unsigned char)3);
    t8 = t11;
    goto LAB12;

LAB13:    xsi_set_current_line(88, ng1);
    t5 = (t0 + 6928U);
    t15 = *((char **)t5);
    t6 = *((int *)t15);
    t16 = (t6 + 1);
    t5 = (t0 + 6928U);
    t17 = *((char **)t5);
    t5 = (t17 + 0);
    *((int *)t5) = t16;
    goto LAB14;

LAB16:    xsi_set_current_line(92, ng1);
    t1 = (t0 + 6808U);
    t5 = *((char **)t1);
    t1 = (t5 + 0);
    *((int *)t1) = 0;
    xsi_set_current_line(93, ng1);
    t1 = (t0 + 6688U);
    t2 = *((char **)t1);
    t6 = *((int *)t2);
    t16 = (t6 + 1);
    t1 = (t0 + 6688U);
    t5 = *((char **)t1);
    t1 = (t5 + 0);
    *((int *)t1) = t16;
    xsi_set_current_line(94, ng1);
    t1 = (t0 + 6688U);
    t2 = *((char **)t1);
    t6 = *((int *)t2);
    t3 = (t6 == 60);
    if (t3 != 0)
        goto LAB19;

LAB21:
LAB20:    goto LAB17;

LAB19:    xsi_set_current_line(95, ng1);
    t1 = (t0 + 6688U);
    t5 = *((char **)t1);
    t1 = (t5 + 0);
    *((int *)t1) = 0;
    xsi_set_current_line(96, ng1);
    t1 = (t0 + 6568U);
    t2 = *((char **)t1);
    t6 = *((int *)t2);
    t16 = (t6 + 1);
    t1 = (t0 + 6568U);
    t5 = *((char **)t1);
    t1 = (t5 + 0);
    *((int *)t1) = t16;
    xsi_set_current_line(97, ng1);
    t1 = (t0 + 6568U);
    t2 = *((char **)t1);
    t6 = *((int *)t2);
    t3 = (t6 == 24);
    if (t3 != 0)
        goto LAB22;

LAB24:
LAB23:    goto LAB20;

LAB22:    xsi_set_current_line(98, ng1);
    t1 = (t0 + 6568U);
    t5 = *((char **)t1);
    t1 = (t5 + 0);
    *((int *)t1) = 0;
    goto LAB23;

LAB25:    xsi_set_current_line(108, ng1);
    t1 = (t0 + 6568U);
    t5 = *((char **)t1);
    t6 = *((int *)t5);
    t1 = (t0 + 3752U);
    t7 = *((char **)t1);
    t16 = *((int *)t7);
    t10 = (t6 == t16);
    if (t10 == 1)
        goto LAB34;

LAB35:    t9 = (unsigned char)0;

LAB36:    if (t9 == 1)
        goto LAB31;

LAB32:    t8 = (unsigned char)0;

LAB33:    if (t8 != 0)
        goto LAB28;

LAB30:
LAB29:    xsi_set_current_line(112, ng1);
    t1 = (t0 + 6928U);
    t2 = *((char **)t1);
    t6 = *((int *)t2);
    t3 = (t6 >= 60);
    if (t3 != 0)
        goto LAB37;

LAB39:
LAB38:    goto LAB26;

LAB28:    xsi_set_current_line(109, ng1);
    t1 = (t0 + 10816);
    t23 = (t1 + 56U);
    t24 = *((char **)t23);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    *((unsigned char *)t26) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(110, ng1);
    t1 = (t0 + 6928U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((int *)t1) = 0;
    goto LAB29;

LAB31:    t1 = (t0 + 6808U);
    t17 = *((char **)t1);
    t20 = *((int *)t17);
    t1 = (t0 + 4072U);
    t21 = *((char **)t1);
    t22 = *((int *)t21);
    t13 = (t20 == t22);
    t8 = t13;
    goto LAB33;

LAB34:    t1 = (t0 + 6688U);
    t12 = *((char **)t1);
    t18 = *((int *)t12);
    t1 = (t0 + 3912U);
    t15 = *((char **)t1);
    t19 = *((int *)t15);
    t11 = (t18 == t19);
    t9 = t11;
    goto LAB36;

LAB37:    xsi_set_current_line(112, ng1);
    t1 = (t0 + 6928U);
    t5 = *((char **)t1);
    t1 = (t5 + 0);
    *((int *)t1) = 0;
    xsi_set_current_line(112, ng1);
    t1 = (t0 + 10816);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t7 = (t5 + 56U);
    t12 = *((char **)t7);
    *((unsigned char *)t12) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB38;

LAB40:    xsi_set_current_line(114, ng1);
    t1 = (t0 + 10816);
    t5 = (t1 + 56U);
    t7 = *((char **)t5);
    t12 = (t7 + 56U);
    t15 = *((char **)t12);
    *((unsigned char *)t15) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(115, ng1);
    t1 = (t0 + 6928U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((int *)t1) = 0;
    goto LAB26;

}

static void work_a_2964965119_3212880686_p_3(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    xsi_set_current_line(123, ng1);
    t1 = (t0 + 4712U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 10368);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(124, ng1);
    t1 = (t0 + 3272U);
    t5 = *((char **)t1);
    t6 = *((int *)t5);
    t1 = (t0 + 10880);
    t7 = (t1 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((int *)t10) = t6;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(124, ng1);
    t1 = (t0 + 3432U);
    t2 = *((char **)t1);
    t6 = *((int *)t2);
    t1 = (t0 + 10944);
    t5 = (t1 + 56U);
    t7 = *((char **)t5);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((int *)t9) = t6;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(124, ng1);
    t1 = (t0 + 3592U);
    t2 = *((char **)t1);
    t6 = *((int *)t2);
    t1 = (t0 + 11008);
    t5 = (t1 + 56U);
    t7 = *((char **)t5);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((int *)t9) = t6;
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

}

static void work_a_2964965119_3212880686_p_4(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;

LAB0:    xsi_set_current_line(128, ng1);
    t1 = (t0 + 4872U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB3;

LAB4:
LAB5:    t9 = (t0 + 11072);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t9);

LAB2:    t14 = (t0 + 10384);
    *((int *)t14) = 1;

LAB1:    return;
LAB3:    t1 = (t0 + 11072);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB2;

LAB6:    goto LAB2;

}

static void work_a_2964965119_3212880686_p_5(char *t0)
{
    unsigned char t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    unsigned char t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;

LAB0:    xsi_set_current_line(132, ng1);
    t2 = (t0 + 992U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 10400);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(133, ng1);
    t4 = (t0 + 2632U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t4 = (t0 + 11136);
    t10 = (t4 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = t9;
    xsi_driver_first_trans_fast(t4);
    goto LAB3;

LAB5:    t4 = (t0 + 1032U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

}

static void work_a_2964965119_3212880686_p_6(char *t0)
{
    char t8[16];
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    int t6;
    unsigned char t7;
    unsigned char t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    int t15;
    unsigned int t16;
    int t17;
    int t18;
    int t19;
    static char *nl0[] = {&&LAB3, &&LAB4, &&LAB5, &&LAB6, &&LAB7};

LAB0:    xsi_set_current_line(143, ng1);
    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (char *)((nl0) + t3);
    goto **((char **)t1);

LAB2:    xsi_set_current_line(279, ng1);
    t1 = (t0 + 7528U);
    t2 = *((char **)t1);
    t6 = *((int *)t2);
    t1 = (t0 + 12032);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t10 = (t5 + 56U);
    t11 = *((char **)t10);
    *((int *)t11) = t6;
    xsi_driver_first_trans_fast(t1);
    t1 = (t0 + 10416);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(147, ng1);
    t4 = (t0 + 2792U);
    t5 = *((char **)t4);
    t6 = *((int *)t5);
    t7 = (t6 < 10);
    if (t7 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(147, ng1);
    t1 = (t0 + 2792U);
    t2 = *((char **)t1);
    t6 = *((int *)t2);
    t15 = (t6 / 10);
    t1 = work_a_2964965119_3212880686_sub_2310700199_3057020925(t0, t8, t15);
    t4 = (t8 + 12U);
    t16 = *((unsigned int *)t4);
    t16 = (t16 * 1U);
    t3 = (7U != t16);
    if (t3 == 1)
        goto LAB13;

LAB14:    t5 = (t0 + 11200);
    t10 = (t5 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t1, 7U);
    xsi_driver_first_trans_fast_port(t5);

LAB9:    xsi_set_current_line(148, ng1);
    t1 = (t0 + 2792U);
    t2 = *((char **)t1);
    t6 = *((int *)t2);
    t15 = xsi_vhdl_mod(t6, 10);
    t1 = work_a_2964965119_3212880686_sub_2310700199_3057020925(t0, t8, t15);
    t4 = (t8 + 12U);
    t16 = *((unsigned int *)t4);
    t16 = (t16 * 1U);
    t3 = (7U != t16);
    if (t3 == 1)
        goto LAB15;

LAB16:    t5 = (t0 + 11264);
    t10 = (t5 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t1, 7U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(149, ng1);
    t1 = (t0 + 2952U);
    t2 = *((char **)t1);
    t6 = *((int *)t2);
    t3 = (t6 < 10);
    if (t3 != 0)
        goto LAB17;

LAB19:    xsi_set_current_line(149, ng1);
    t1 = (t0 + 2952U);
    t2 = *((char **)t1);
    t6 = *((int *)t2);
    t15 = (t6 / 10);
    t1 = work_a_2964965119_3212880686_sub_2310700199_3057020925(t0, t8, t15);
    t4 = (t8 + 12U);
    t16 = *((unsigned int *)t4);
    t16 = (t16 * 1U);
    t3 = (7U != t16);
    if (t3 == 1)
        goto LAB22;

LAB23:    t5 = (t0 + 11328);
    t10 = (t5 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t1, 7U);
    xsi_driver_first_trans_fast_port(t5);

LAB18:    xsi_set_current_line(150, ng1);
    t1 = (t0 + 2952U);
    t2 = *((char **)t1);
    t6 = *((int *)t2);
    t15 = xsi_vhdl_mod(t6, 10);
    t1 = work_a_2964965119_3212880686_sub_2310700199_3057020925(t0, t8, t15);
    t4 = (t8 + 12U);
    t16 = *((unsigned int *)t4);
    t16 = (t16 * 1U);
    t3 = (7U != t16);
    if (t3 == 1)
        goto LAB24;

LAB25:    t5 = (t0 + 11392);
    t10 = (t5 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t1, 7U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(151, ng1);
    t1 = (t0 + 3112U);
    t2 = *((char **)t1);
    t6 = *((int *)t2);
    t3 = (t6 < 10);
    if (t3 != 0)
        goto LAB26;

LAB28:    xsi_set_current_line(151, ng1);
    t1 = (t0 + 3112U);
    t2 = *((char **)t1);
    t6 = *((int *)t2);
    t15 = (t6 / 10);
    t1 = work_a_2964965119_3212880686_sub_2310700199_3057020925(t0, t8, t15);
    t4 = (t8 + 12U);
    t16 = *((unsigned int *)t4);
    t16 = (t16 * 1U);
    t3 = (7U != t16);
    if (t3 == 1)
        goto LAB31;

LAB32:    t5 = (t0 + 11456);
    t10 = (t5 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t1, 7U);
    xsi_driver_first_trans_fast_port(t5);

LAB27:    xsi_set_current_line(152, ng1);
    t1 = (t0 + 3112U);
    t2 = *((char **)t1);
    t6 = *((int *)t2);
    t15 = xsi_vhdl_mod(t6, 10);
    t1 = work_a_2964965119_3212880686_sub_2310700199_3057020925(t0, t8, t15);
    t4 = (t8 + 12U);
    t16 = *((unsigned int *)t4);
    t16 = (t16 * 1U);
    t3 = (7U != t16);
    if (t3 == 1)
        goto LAB33;

LAB34:    t5 = (t0 + 11520);
    t10 = (t5 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t1, 7U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(154, ng1);
    t1 = (t0 + 7528U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((int *)t1) = 0;
    xsi_set_current_line(155, ng1);
    t1 = (t0 + 11584);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t10 = *((char **)t5);
    *((int *)t10) = 0;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(155, ng1);
    t1 = (t0 + 11648);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t10 = *((char **)t5);
    *((int *)t10) = 0;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(155, ng1);
    t1 = (t0 + 11712);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t10 = *((char **)t5);
    *((int *)t10) = 0;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(157, ng1);
    t1 = (t0 + 4232U);
    t2 = *((char **)t1);
    t6 = *((int *)t2);
    t3 = (t6 == 10);
    if (t3 != 0)
        goto LAB35;

LAB37:    xsi_set_current_line(163, ng1);
    t1 = (t0 + 11776);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t10 = *((char **)t5);
    *((unsigned char *)t10) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);

LAB36:    goto LAB2;

LAB4:    xsi_set_current_line(168, ng1);
    t1 = (t0 + 7528U);
    t2 = *((char **)t1);
    t6 = *((int *)t2);
    t3 = (t6 > 0);
    if (t3 != 0)
        goto LAB50;

LAB52:
LAB51:    xsi_set_current_line(177, ng1);
    t1 = (t0 + 4232U);
    t2 = *((char **)t1);
    t6 = *((int *)t2);
    t3 = (t6 < 10);
    if (t3 != 0)
        goto LAB80;

LAB82:    t1 = (t0 + 4232U);
    t2 = *((char **)t1);
    t6 = *((int *)t2);
    t3 = (t6 == 11);
    if (t3 != 0)
        goto LAB107;

LAB108:    t1 = (t0 + 7528U);
    t2 = *((char **)t1);
    t6 = *((int *)t2);
    t7 = (t6 == 0);
    if (t7 == 1)
        goto LAB111;

LAB112:    t3 = (unsigned char)0;

LAB113:    if (t3 != 0)
        goto LAB109;

LAB110:    xsi_set_current_line(203, ng1);
    t1 = (t0 + 11776);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t10 = *((char **)t5);
    *((unsigned char *)t10) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);

LAB81:    goto LAB2;

LAB5:    xsi_set_current_line(210, ng1);
    t1 = (t0 + 4232U);
    t2 = *((char **)t1);
    t6 = *((int *)t2);
    t3 = (t6 == 12);
    if (t3 != 0)
        goto LAB114;

LAB116:    t1 = (t0 + 4232U);
    t2 = *((char **)t1);
    t6 = *((int *)t2);
    t3 = (t6 == 11);
    if (t3 != 0)
        goto LAB117;

LAB118:    xsi_set_current_line(220, ng1);
    t1 = (t0 + 11776);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t10 = *((char **)t5);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);

LAB115:    goto LAB2;

LAB6:    xsi_set_current_line(228, ng1);
    t1 = (t0 + 7528U);
    t2 = *((char **)t1);
    t6 = *((int *)t2);
    t3 = (t6 > 0);
    if (t3 != 0)
        goto LAB119;

LAB121:
LAB120:    xsi_set_current_line(237, ng1);
    t1 = (t0 + 4232U);
    t2 = *((char **)t1);
    t6 = *((int *)t2);
    t3 = (t6 < 10);
    if (t3 != 0)
        goto LAB149;

LAB151:    t1 = (t0 + 4232U);
    t2 = *((char **)t1);
    t6 = *((int *)t2);
    t3 = (t6 == 11);
    if (t3 != 0)
        goto LAB176;

LAB177:    xsi_set_current_line(261, ng1);
    t1 = (t0 + 11776);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t10 = *((char **)t5);
    *((unsigned char *)t10) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);

LAB150:    goto LAB2;

LAB7:    xsi_set_current_line(267, ng1);
    t1 = (t0 + 11840);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t10 = *((char **)t5);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(268, ng1);
    t1 = (t0 + 11968);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t10 = *((char **)t5);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(269, ng1);
    t1 = (t0 + 11904);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t10 = *((char **)t5);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(270, ng1);
    t1 = (t0 + 4232U);
    t2 = *((char **)t1);
    t6 = *((int *)t2);
    t3 = (t6 == 15);
    if (t3 != 0)
        goto LAB178;

LAB180:    xsi_set_current_line(273, ng1);
    t1 = (t0 + 11776);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t10 = *((char **)t5);
    *((unsigned char *)t10) = (unsigned char)4;
    xsi_driver_first_trans_fast(t1);

LAB179:    goto LAB2;

LAB8:    xsi_set_current_line(147, ng1);
    t4 = work_a_2964965119_3212880686_sub_2310700199_3057020925(t0, t8, 10);
    t9 = (7U != 7U);
    if (t9 == 1)
        goto LAB11;

LAB12:    t10 = (t0 + 11200);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t4, 7U);
    xsi_driver_first_trans_fast_port(t10);
    goto LAB9;

LAB11:    xsi_size_not_matching(7U, 7U, 0);
    goto LAB12;

LAB13:    xsi_size_not_matching(7U, t16, 0);
    goto LAB14;

LAB15:    xsi_size_not_matching(7U, t16, 0);
    goto LAB16;

LAB17:    xsi_set_current_line(149, ng1);
    t1 = work_a_2964965119_3212880686_sub_2310700199_3057020925(t0, t8, 10);
    t4 = (t8 + 12U);
    t16 = *((unsigned int *)t4);
    t16 = (t16 * 1U);
    t7 = (7U != t16);
    if (t7 == 1)
        goto LAB20;

LAB21:    t5 = (t0 + 11328);
    t10 = (t5 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t1, 7U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB18;

LAB20:    xsi_size_not_matching(7U, t16, 0);
    goto LAB21;

LAB22:    xsi_size_not_matching(7U, t16, 0);
    goto LAB23;

LAB24:    xsi_size_not_matching(7U, t16, 0);
    goto LAB25;

LAB26:    xsi_set_current_line(151, ng1);
    t1 = work_a_2964965119_3212880686_sub_2310700199_3057020925(t0, t8, 10);
    t4 = (t8 + 12U);
    t16 = *((unsigned int *)t4);
    t16 = (t16 * 1U);
    t7 = (7U != t16);
    if (t7 == 1)
        goto LAB29;

LAB30:    t5 = (t0 + 11456);
    t10 = (t5 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t1, 7U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB27;

LAB29:    xsi_size_not_matching(7U, t16, 0);
    goto LAB30;

LAB31:    xsi_size_not_matching(7U, t16, 0);
    goto LAB32;

LAB33:    xsi_size_not_matching(7U, t16, 0);
    goto LAB34;

LAB35:    xsi_set_current_line(158, ng1);
    t1 = work_a_2964965119_3212880686_sub_2310700199_3057020925(t0, t8, 10);
    t4 = (t8 + 12U);
    t16 = *((unsigned int *)t4);
    t16 = (t16 * 1U);
    t7 = (7U != t16);
    if (t7 == 1)
        goto LAB38;

LAB39:    t5 = (t0 + 11200);
    t10 = (t5 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t1, 7U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(158, ng1);
    t1 = work_a_2964965119_3212880686_sub_2310700199_3057020925(t0, t8, 10);
    t2 = (t8 + 12U);
    t16 = *((unsigned int *)t2);
    t16 = (t16 * 1U);
    t3 = (7U != t16);
    if (t3 == 1)
        goto LAB40;

LAB41:    t4 = (t0 + 11264);
    t5 = (t4 + 56U);
    t10 = *((char **)t5);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t1, 7U);
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(158, ng1);
    t1 = work_a_2964965119_3212880686_sub_2310700199_3057020925(t0, t8, 10);
    t2 = (t8 + 12U);
    t16 = *((unsigned int *)t2);
    t16 = (t16 * 1U);
    t3 = (7U != t16);
    if (t3 == 1)
        goto LAB42;

LAB43:    t4 = (t0 + 11328);
    t5 = (t4 + 56U);
    t10 = *((char **)t5);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t1, 7U);
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(158, ng1);
    t1 = work_a_2964965119_3212880686_sub_2310700199_3057020925(t0, t8, 10);
    t2 = (t8 + 12U);
    t16 = *((unsigned int *)t2);
    t16 = (t16 * 1U);
    t3 = (7U != t16);
    if (t3 == 1)
        goto LAB44;

LAB45:    t4 = (t0 + 11392);
    t5 = (t4 + 56U);
    t10 = *((char **)t5);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t1, 7U);
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(158, ng1);
    t1 = work_a_2964965119_3212880686_sub_2310700199_3057020925(t0, t8, 10);
    t2 = (t8 + 12U);
    t16 = *((unsigned int *)t2);
    t16 = (t16 * 1U);
    t3 = (7U != t16);
    if (t3 == 1)
        goto LAB46;

LAB47:    t4 = (t0 + 11456);
    t5 = (t4 + 56U);
    t10 = *((char **)t5);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t1, 7U);
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(158, ng1);
    t1 = work_a_2964965119_3212880686_sub_2310700199_3057020925(t0, t8, 10);
    t2 = (t8 + 12U);
    t16 = *((unsigned int *)t2);
    t16 = (t16 * 1U);
    t3 = (7U != t16);
    if (t3 == 1)
        goto LAB48;

LAB49:    t4 = (t0 + 11520);
    t5 = (t4 + 56U);
    t10 = *((char **)t5);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t1, 7U);
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(159, ng1);
    t1 = (t0 + 11776);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t10 = *((char **)t5);
    *((unsigned char *)t10) = (unsigned char)4;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(160, ng1);
    t1 = (t0 + 7408U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((unsigned char *)t1) = (unsigned char)1;
    xsi_set_current_line(161, ng1);
    t1 = (t0 + 7048U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((int *)t1) = 0;
    xsi_set_current_line(161, ng1);
    t1 = (t0 + 7168U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((int *)t1) = 0;
    xsi_set_current_line(161, ng1);
    t1 = (t0 + 7288U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((int *)t1) = 0;
    goto LAB36;

LAB38:    xsi_size_not_matching(7U, t16, 0);
    goto LAB39;

LAB40:    xsi_size_not_matching(7U, t16, 0);
    goto LAB41;

LAB42:    xsi_size_not_matching(7U, t16, 0);
    goto LAB43;

LAB44:    xsi_size_not_matching(7U, t16, 0);
    goto LAB45;

LAB46:    xsi_size_not_matching(7U, t16, 0);
    goto LAB47;

LAB48:    xsi_size_not_matching(7U, t16, 0);
    goto LAB49;

LAB50:    xsi_set_current_line(169, ng1);
    t1 = (t0 + 3272U);
    t4 = *((char **)t1);
    t15 = *((int *)t4);
    t7 = (t15 < 10);
    if (t7 != 0)
        goto LAB53;

LAB55:    xsi_set_current_line(169, ng1);
    t1 = (t0 + 3272U);
    t2 = *((char **)t1);
    t6 = *((int *)t2);
    t15 = (t6 / 10);
    t1 = work_a_2964965119_3212880686_sub_2310700199_3057020925(t0, t8, t15);
    t4 = (t8 + 12U);
    t16 = *((unsigned int *)t4);
    t16 = (t16 * 1U);
    t3 = (7U != t16);
    if (t3 == 1)
        goto LAB58;

LAB59:    t5 = (t0 + 11200);
    t10 = (t5 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t1, 7U);
    xsi_driver_first_trans_fast_port(t5);

LAB54:    xsi_set_current_line(170, ng1);
    t1 = (t0 + 3272U);
    t2 = *((char **)t1);
    t6 = *((int *)t2);
    t15 = xsi_vhdl_mod(t6, 10);
    t1 = work_a_2964965119_3212880686_sub_2310700199_3057020925(t0, t8, t15);
    t4 = (t8 + 12U);
    t16 = *((unsigned int *)t4);
    t16 = (t16 * 1U);
    t3 = (7U != t16);
    if (t3 == 1)
        goto LAB60;

LAB61:    t5 = (t0 + 11264);
    t10 = (t5 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t1, 7U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(171, ng1);
    t1 = (t0 + 3432U);
    t2 = *((char **)t1);
    t6 = *((int *)t2);
    t3 = (t6 < 10);
    if (t3 != 0)
        goto LAB62;

LAB64:    xsi_set_current_line(171, ng1);
    t1 = (t0 + 3432U);
    t2 = *((char **)t1);
    t6 = *((int *)t2);
    t15 = (t6 / 10);
    t1 = work_a_2964965119_3212880686_sub_2310700199_3057020925(t0, t8, t15);
    t4 = (t8 + 12U);
    t16 = *((unsigned int *)t4);
    t16 = (t16 * 1U);
    t3 = (7U != t16);
    if (t3 == 1)
        goto LAB67;

LAB68:    t5 = (t0 + 11328);
    t10 = (t5 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t1, 7U);
    xsi_driver_first_trans_fast_port(t5);

LAB63:    xsi_set_current_line(172, ng1);
    t1 = (t0 + 3432U);
    t2 = *((char **)t1);
    t6 = *((int *)t2);
    t15 = xsi_vhdl_mod(t6, 10);
    t1 = work_a_2964965119_3212880686_sub_2310700199_3057020925(t0, t8, t15);
    t4 = (t8 + 12U);
    t16 = *((unsigned int *)t4);
    t16 = (t16 * 1U);
    t3 = (7U != t16);
    if (t3 == 1)
        goto LAB69;

LAB70:    t5 = (t0 + 11392);
    t10 = (t5 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t1, 7U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(173, ng1);
    t1 = (t0 + 3592U);
    t2 = *((char **)t1);
    t6 = *((int *)t2);
    t3 = (t6 < 10);
    if (t3 != 0)
        goto LAB71;

LAB73:    xsi_set_current_line(173, ng1);
    t1 = (t0 + 3592U);
    t2 = *((char **)t1);
    t6 = *((int *)t2);
    t15 = (t6 / 10);
    t1 = work_a_2964965119_3212880686_sub_2310700199_3057020925(t0, t8, t15);
    t4 = (t8 + 12U);
    t16 = *((unsigned int *)t4);
    t16 = (t16 * 1U);
    t3 = (7U != t16);
    if (t3 == 1)
        goto LAB76;

LAB77:    t5 = (t0 + 11456);
    t10 = (t5 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t1, 7U);
    xsi_driver_first_trans_fast_port(t5);

LAB72:    xsi_set_current_line(174, ng1);
    t1 = (t0 + 3592U);
    t2 = *((char **)t1);
    t6 = *((int *)t2);
    t15 = xsi_vhdl_mod(t6, 10);
    t1 = work_a_2964965119_3212880686_sub_2310700199_3057020925(t0, t8, t15);
    t4 = (t8 + 12U);
    t16 = *((unsigned int *)t4);
    t16 = (t16 * 1U);
    t3 = (7U != t16);
    if (t3 == 1)
        goto LAB78;

LAB79:    t5 = (t0 + 11520);
    t10 = (t5 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t1, 7U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB51;

LAB53:    xsi_set_current_line(169, ng1);
    t1 = work_a_2964965119_3212880686_sub_2310700199_3057020925(t0, t8, 10);
    t5 = (t8 + 12U);
    t16 = *((unsigned int *)t5);
    t16 = (t16 * 1U);
    t9 = (7U != t16);
    if (t9 == 1)
        goto LAB56;

LAB57:    t10 = (t0 + 11200);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t1, 7U);
    xsi_driver_first_trans_fast_port(t10);
    goto LAB54;

LAB56:    xsi_size_not_matching(7U, t16, 0);
    goto LAB57;

LAB58:    xsi_size_not_matching(7U, t16, 0);
    goto LAB59;

LAB60:    xsi_size_not_matching(7U, t16, 0);
    goto LAB61;

LAB62:    xsi_set_current_line(171, ng1);
    t1 = work_a_2964965119_3212880686_sub_2310700199_3057020925(t0, t8, 10);
    t4 = (t8 + 12U);
    t16 = *((unsigned int *)t4);
    t16 = (t16 * 1U);
    t7 = (7U != t16);
    if (t7 == 1)
        goto LAB65;

LAB66:    t5 = (t0 + 11328);
    t10 = (t5 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t1, 7U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB63;

LAB65:    xsi_size_not_matching(7U, t16, 0);
    goto LAB66;

LAB67:    xsi_size_not_matching(7U, t16, 0);
    goto LAB68;

LAB69:    xsi_size_not_matching(7U, t16, 0);
    goto LAB70;

LAB71:    xsi_set_current_line(173, ng1);
    t1 = work_a_2964965119_3212880686_sub_2310700199_3057020925(t0, t8, 10);
    t4 = (t8 + 12U);
    t16 = *((unsigned int *)t4);
    t16 = (t16 * 1U);
    t7 = (7U != t16);
    if (t7 == 1)
        goto LAB74;

LAB75:    t5 = (t0 + 11456);
    t10 = (t5 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t1, 7U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB72;

LAB74:    xsi_size_not_matching(7U, t16, 0);
    goto LAB75;

LAB76:    xsi_size_not_matching(7U, t16, 0);
    goto LAB77;

LAB78:    xsi_size_not_matching(7U, t16, 0);
    goto LAB79;

LAB80:    xsi_set_current_line(178, ng1);
    t1 = (t0 + 11776);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t10 = (t5 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = (unsigned char)4;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(179, ng1);
    t1 = (t0 + 7408U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((unsigned char *)t1) = (unsigned char)1;
    xsi_set_current_line(180, ng1);
    t1 = (t0 + 7528U);
    t2 = *((char **)t1);
    t6 = *((int *)t2);
    t15 = (t6 + 1);
    t1 = (t0 + 7528U);
    t4 = *((char **)t1);
    t1 = (t4 + 0);
    *((int *)t1) = t15;
    xsi_set_current_line(181, ng1);
    t1 = (t0 + 7528U);
    t2 = *((char **)t1);
    t6 = *((int *)t2);
    if (t6 == 2)
        goto LAB84;

LAB91:    if (t6 == 1)
        goto LAB85;

LAB92:    if (t6 == 4)
        goto LAB86;

LAB93:    if (t6 == 3)
        goto LAB87;

LAB94:    if (t6 == 6)
        goto LAB88;

LAB95:    if (t6 == 5)
        goto LAB89;

LAB96:
LAB90:    xsi_set_current_line(188, ng1);

LAB83:    xsi_set_current_line(190, ng1);
    t1 = (t0 + 7288U);
    t2 = *((char **)t1);
    t6 = *((int *)t2);
    t3 = (t6 >= 60);
    if (t3 != 0)
        goto LAB98;

LAB100:
LAB99:    xsi_set_current_line(191, ng1);
    t1 = (t0 + 7168U);
    t2 = *((char **)t1);
    t6 = *((int *)t2);
    t3 = (t6 >= 60);
    if (t3 != 0)
        goto LAB101;

LAB103:
LAB102:    xsi_set_current_line(192, ng1);
    t1 = (t0 + 7048U);
    t2 = *((char **)t1);
    t6 = *((int *)t2);
    t3 = (t6 >= 24);
    if (t3 != 0)
        goto LAB104;

LAB106:
LAB105:    xsi_set_current_line(193, ng1);
    t1 = (t0 + 7048U);
    t2 = *((char **)t1);
    t6 = *((int *)t2);
    t1 = (t0 + 11584);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t10 = (t5 + 56U);
    t11 = *((char **)t10);
    *((int *)t11) = t6;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(193, ng1);
    t1 = (t0 + 7168U);
    t2 = *((char **)t1);
    t6 = *((int *)t2);
    t1 = (t0 + 11648);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t10 = (t5 + 56U);
    t11 = *((char **)t10);
    *((int *)t11) = t6;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(193, ng1);
    t1 = (t0 + 7288U);
    t2 = *((char **)t1);
    t6 = *((int *)t2);
    t1 = (t0 + 11712);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t10 = (t5 + 56U);
    t11 = *((char **)t10);
    *((int *)t11) = t6;
    xsi_driver_first_trans_fast(t1);
    goto LAB81;

LAB84:    xsi_set_current_line(182, ng1);
    t1 = (t0 + 7288U);
    t4 = *((char **)t1);
    t15 = *((int *)t4);
    t1 = (t0 + 4232U);
    t5 = *((char **)t1);
    t17 = *((int *)t5);
    t18 = (t17 * 10);
    t19 = (t15 + t18);
    t1 = (t0 + 7288U);
    t10 = *((char **)t1);
    t1 = (t10 + 0);
    *((int *)t1) = t19;
    goto LAB83;

LAB85:    xsi_set_current_line(183, ng1);
    t1 = (t0 + 7288U);
    t2 = *((char **)t1);
    t6 = *((int *)t2);
    t1 = (t0 + 4232U);
    t4 = *((char **)t1);
    t15 = *((int *)t4);
    t17 = (t6 + t15);
    t1 = (t0 + 7288U);
    t5 = *((char **)t1);
    t1 = (t5 + 0);
    *((int *)t1) = t17;
    goto LAB83;

LAB86:    xsi_set_current_line(184, ng1);
    t1 = (t0 + 7168U);
    t2 = *((char **)t1);
    t6 = *((int *)t2);
    t1 = (t0 + 4232U);
    t4 = *((char **)t1);
    t15 = *((int *)t4);
    t17 = (t15 * 10);
    t18 = (t6 + t17);
    t1 = (t0 + 7168U);
    t5 = *((char **)t1);
    t1 = (t5 + 0);
    *((int *)t1) = t18;
    goto LAB83;

LAB87:    xsi_set_current_line(185, ng1);
    t1 = (t0 + 7168U);
    t2 = *((char **)t1);
    t6 = *((int *)t2);
    t1 = (t0 + 4232U);
    t4 = *((char **)t1);
    t15 = *((int *)t4);
    t17 = (t6 + t15);
    t1 = (t0 + 7168U);
    t5 = *((char **)t1);
    t1 = (t5 + 0);
    *((int *)t1) = t17;
    goto LAB83;

LAB88:    xsi_set_current_line(186, ng1);
    t1 = (t0 + 7048U);
    t2 = *((char **)t1);
    t6 = *((int *)t2);
    t1 = (t0 + 4232U);
    t4 = *((char **)t1);
    t15 = *((int *)t4);
    t17 = (t15 * 10);
    t18 = (t6 + t17);
    t1 = (t0 + 7048U);
    t5 = *((char **)t1);
    t1 = (t5 + 0);
    *((int *)t1) = t18;
    goto LAB83;

LAB89:    xsi_set_current_line(187, ng1);
    t1 = (t0 + 7048U);
    t2 = *((char **)t1);
    t6 = *((int *)t2);
    t1 = (t0 + 4232U);
    t4 = *((char **)t1);
    t15 = *((int *)t4);
    t17 = (t6 + t15);
    t1 = (t0 + 7048U);
    t5 = *((char **)t1);
    t1 = (t5 + 0);
    *((int *)t1) = t17;
    goto LAB83;

LAB97:;
LAB98:    xsi_set_current_line(190, ng1);
    t1 = (t0 + 7288U);
    t4 = *((char **)t1);
    t1 = (t4 + 0);
    *((int *)t1) = 59;
    goto LAB99;

LAB101:    xsi_set_current_line(191, ng1);
    t1 = (t0 + 7168U);
    t4 = *((char **)t1);
    t1 = (t4 + 0);
    *((int *)t1) = 59;
    goto LAB102;

LAB104:    xsi_set_current_line(192, ng1);
    t1 = (t0 + 7048U);
    t4 = *((char **)t1);
    t1 = (t4 + 0);
    *((int *)t1) = 23;
    goto LAB105;

LAB107:    xsi_set_current_line(196, ng1);
    t1 = (t0 + 11776);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t10 = (t5 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = (unsigned char)4;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(197, ng1);
    t1 = (t0 + 7408U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((unsigned char *)t1) = (unsigned char)0;
    xsi_set_current_line(198, ng1);
    t1 = (t0 + 11840);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t10 = *((char **)t5);
    *((unsigned char *)t10) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB81;

LAB109:    xsi_set_current_line(200, ng1);
    t1 = (t0 + 11776);
    t5 = (t1 + 56U);
    t10 = *((char **)t5);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)4;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(200, ng1);
    t1 = (t0 + 7408U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((unsigned char *)t1) = (unsigned char)2;
    goto LAB81;

LAB111:    t1 = (t0 + 4232U);
    t4 = *((char **)t1);
    t15 = *((int *)t4);
    t9 = (t15 == 10);
    t3 = t9;
    goto LAB113;

LAB114:    xsi_set_current_line(211, ng1);
    t1 = (t0 + 11904);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t10 = (t5 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(212, ng1);
    t1 = (t0 + 11776);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t10 = *((char **)t5);
    *((unsigned char *)t10) = (unsigned char)4;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(213, ng1);
    t1 = (t0 + 7408U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((unsigned char *)t1) = (unsigned char)0;
    goto LAB115;

LAB117:    xsi_set_current_line(215, ng1);
    t1 = (t0 + 11776);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t10 = (t5 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = (unsigned char)4;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(216, ng1);
    t1 = (t0 + 7408U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((unsigned char *)t1) = (unsigned char)3;
    xsi_set_current_line(217, ng1);
    t1 = (t0 + 7048U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((int *)t1) = 0;
    xsi_set_current_line(217, ng1);
    t1 = (t0 + 7168U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((int *)t1) = 0;
    xsi_set_current_line(217, ng1);
    t1 = (t0 + 7288U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((int *)t1) = 0;
    goto LAB115;

LAB119:    xsi_set_current_line(229, ng1);
    t1 = (t0 + 3272U);
    t4 = *((char **)t1);
    t15 = *((int *)t4);
    t7 = (t15 < 10);
    if (t7 != 0)
        goto LAB122;

LAB124:    xsi_set_current_line(229, ng1);
    t1 = (t0 + 3272U);
    t2 = *((char **)t1);
    t6 = *((int *)t2);
    t15 = (t6 / 10);
    t1 = work_a_2964965119_3212880686_sub_2310700199_3057020925(t0, t8, t15);
    t4 = (t8 + 12U);
    t16 = *((unsigned int *)t4);
    t16 = (t16 * 1U);
    t3 = (7U != t16);
    if (t3 == 1)
        goto LAB127;

LAB128:    t5 = (t0 + 11200);
    t10 = (t5 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t1, 7U);
    xsi_driver_first_trans_fast_port(t5);

LAB123:    xsi_set_current_line(230, ng1);
    t1 = (t0 + 3272U);
    t2 = *((char **)t1);
    t6 = *((int *)t2);
    t15 = xsi_vhdl_mod(t6, 10);
    t1 = work_a_2964965119_3212880686_sub_2310700199_3057020925(t0, t8, t15);
    t4 = (t8 + 12U);
    t16 = *((unsigned int *)t4);
    t16 = (t16 * 1U);
    t3 = (7U != t16);
    if (t3 == 1)
        goto LAB129;

LAB130:    t5 = (t0 + 11264);
    t10 = (t5 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t1, 7U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(231, ng1);
    t1 = (t0 + 3432U);
    t2 = *((char **)t1);
    t6 = *((int *)t2);
    t3 = (t6 < 10);
    if (t3 != 0)
        goto LAB131;

LAB133:    xsi_set_current_line(231, ng1);
    t1 = (t0 + 3432U);
    t2 = *((char **)t1);
    t6 = *((int *)t2);
    t15 = (t6 / 10);
    t1 = work_a_2964965119_3212880686_sub_2310700199_3057020925(t0, t8, t15);
    t4 = (t8 + 12U);
    t16 = *((unsigned int *)t4);
    t16 = (t16 * 1U);
    t3 = (7U != t16);
    if (t3 == 1)
        goto LAB136;

LAB137:    t5 = (t0 + 11328);
    t10 = (t5 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t1, 7U);
    xsi_driver_first_trans_fast_port(t5);

LAB132:    xsi_set_current_line(232, ng1);
    t1 = (t0 + 3432U);
    t2 = *((char **)t1);
    t6 = *((int *)t2);
    t15 = xsi_vhdl_mod(t6, 10);
    t1 = work_a_2964965119_3212880686_sub_2310700199_3057020925(t0, t8, t15);
    t4 = (t8 + 12U);
    t16 = *((unsigned int *)t4);
    t16 = (t16 * 1U);
    t3 = (7U != t16);
    if (t3 == 1)
        goto LAB138;

LAB139:    t5 = (t0 + 11392);
    t10 = (t5 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t1, 7U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(233, ng1);
    t1 = (t0 + 3592U);
    t2 = *((char **)t1);
    t6 = *((int *)t2);
    t3 = (t6 < 10);
    if (t3 != 0)
        goto LAB140;

LAB142:    xsi_set_current_line(233, ng1);
    t1 = (t0 + 3592U);
    t2 = *((char **)t1);
    t6 = *((int *)t2);
    t15 = (t6 / 10);
    t1 = work_a_2964965119_3212880686_sub_2310700199_3057020925(t0, t8, t15);
    t4 = (t8 + 12U);
    t16 = *((unsigned int *)t4);
    t16 = (t16 * 1U);
    t3 = (7U != t16);
    if (t3 == 1)
        goto LAB145;

LAB146:    t5 = (t0 + 11456);
    t10 = (t5 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t1, 7U);
    xsi_driver_first_trans_fast_port(t5);

LAB141:    xsi_set_current_line(234, ng1);
    t1 = (t0 + 3592U);
    t2 = *((char **)t1);
    t6 = *((int *)t2);
    t15 = xsi_vhdl_mod(t6, 10);
    t1 = work_a_2964965119_3212880686_sub_2310700199_3057020925(t0, t8, t15);
    t4 = (t8 + 12U);
    t16 = *((unsigned int *)t4);
    t16 = (t16 * 1U);
    t3 = (7U != t16);
    if (t3 == 1)
        goto LAB147;

LAB148:    t5 = (t0 + 11520);
    t10 = (t5 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t1, 7U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB120;

LAB122:    xsi_set_current_line(229, ng1);
    t1 = work_a_2964965119_3212880686_sub_2310700199_3057020925(t0, t8, 10);
    t5 = (t8 + 12U);
    t16 = *((unsigned int *)t5);
    t16 = (t16 * 1U);
    t9 = (7U != t16);
    if (t9 == 1)
        goto LAB125;

LAB126:    t10 = (t0 + 11200);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t1, 7U);
    xsi_driver_first_trans_fast_port(t10);
    goto LAB123;

LAB125:    xsi_size_not_matching(7U, t16, 0);
    goto LAB126;

LAB127:    xsi_size_not_matching(7U, t16, 0);
    goto LAB128;

LAB129:    xsi_size_not_matching(7U, t16, 0);
    goto LAB130;

LAB131:    xsi_set_current_line(231, ng1);
    t1 = work_a_2964965119_3212880686_sub_2310700199_3057020925(t0, t8, 10);
    t4 = (t8 + 12U);
    t16 = *((unsigned int *)t4);
    t16 = (t16 * 1U);
    t7 = (7U != t16);
    if (t7 == 1)
        goto LAB134;

LAB135:    t5 = (t0 + 11328);
    t10 = (t5 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t1, 7U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB132;

LAB134:    xsi_size_not_matching(7U, t16, 0);
    goto LAB135;

LAB136:    xsi_size_not_matching(7U, t16, 0);
    goto LAB137;

LAB138:    xsi_size_not_matching(7U, t16, 0);
    goto LAB139;

LAB140:    xsi_set_current_line(233, ng1);
    t1 = work_a_2964965119_3212880686_sub_2310700199_3057020925(t0, t8, 10);
    t4 = (t8 + 12U);
    t16 = *((unsigned int *)t4);
    t16 = (t16 * 1U);
    t7 = (7U != t16);
    if (t7 == 1)
        goto LAB143;

LAB144:    t5 = (t0 + 11456);
    t10 = (t5 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t1, 7U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB141;

LAB143:    xsi_size_not_matching(7U, t16, 0);
    goto LAB144;

LAB145:    xsi_size_not_matching(7U, t16, 0);
    goto LAB146;

LAB147:    xsi_size_not_matching(7U, t16, 0);
    goto LAB148;

LAB149:    xsi_set_current_line(238, ng1);
    t1 = (t0 + 11776);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t10 = (t5 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = (unsigned char)4;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(239, ng1);
    t1 = (t0 + 7408U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((unsigned char *)t1) = (unsigned char)3;
    xsi_set_current_line(240, ng1);
    t1 = (t0 + 7528U);
    t2 = *((char **)t1);
    t6 = *((int *)t2);
    t15 = (t6 + 1);
    t1 = (t0 + 7528U);
    t4 = *((char **)t1);
    t1 = (t4 + 0);
    *((int *)t1) = t15;
    xsi_set_current_line(241, ng1);
    t1 = (t0 + 7528U);
    t2 = *((char **)t1);
    t6 = *((int *)t2);
    if (t6 == 2)
        goto LAB153;

LAB160:    if (t6 == 1)
        goto LAB154;

LAB161:    if (t6 == 4)
        goto LAB155;

LAB162:    if (t6 == 3)
        goto LAB156;

LAB163:    if (t6 == 6)
        goto LAB157;

LAB164:    if (t6 == 5)
        goto LAB158;

LAB165:
LAB159:    xsi_set_current_line(248, ng1);

LAB152:    xsi_set_current_line(250, ng1);
    t1 = (t0 + 7288U);
    t2 = *((char **)t1);
    t6 = *((int *)t2);
    t3 = (t6 >= 60);
    if (t3 != 0)
        goto LAB167;

LAB169:
LAB168:    xsi_set_current_line(251, ng1);
    t1 = (t0 + 7168U);
    t2 = *((char **)t1);
    t6 = *((int *)t2);
    t3 = (t6 >= 60);
    if (t3 != 0)
        goto LAB170;

LAB172:
LAB171:    xsi_set_current_line(252, ng1);
    t1 = (t0 + 7048U);
    t2 = *((char **)t1);
    t6 = *((int *)t2);
    t3 = (t6 >= 24);
    if (t3 != 0)
        goto LAB173;

LAB175:
LAB174:    xsi_set_current_line(253, ng1);
    t1 = (t0 + 7048U);
    t2 = *((char **)t1);
    t6 = *((int *)t2);
    t1 = (t0 + 11584);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t10 = (t5 + 56U);
    t11 = *((char **)t10);
    *((int *)t11) = t6;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(253, ng1);
    t1 = (t0 + 7168U);
    t2 = *((char **)t1);
    t6 = *((int *)t2);
    t1 = (t0 + 11648);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t10 = (t5 + 56U);
    t11 = *((char **)t10);
    *((int *)t11) = t6;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(253, ng1);
    t1 = (t0 + 7288U);
    t2 = *((char **)t1);
    t6 = *((int *)t2);
    t1 = (t0 + 11712);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t10 = (t5 + 56U);
    t11 = *((char **)t10);
    *((int *)t11) = t6;
    xsi_driver_first_trans_fast(t1);
    goto LAB150;

LAB153:    xsi_set_current_line(242, ng1);
    t1 = (t0 + 7288U);
    t4 = *((char **)t1);
    t15 = *((int *)t4);
    t1 = (t0 + 4232U);
    t5 = *((char **)t1);
    t17 = *((int *)t5);
    t18 = (t17 * 10);
    t19 = (t15 + t18);
    t1 = (t0 + 7288U);
    t10 = *((char **)t1);
    t1 = (t10 + 0);
    *((int *)t1) = t19;
    goto LAB152;

LAB154:    xsi_set_current_line(243, ng1);
    t1 = (t0 + 7288U);
    t2 = *((char **)t1);
    t6 = *((int *)t2);
    t1 = (t0 + 4232U);
    t4 = *((char **)t1);
    t15 = *((int *)t4);
    t17 = (t6 + t15);
    t1 = (t0 + 7288U);
    t5 = *((char **)t1);
    t1 = (t5 + 0);
    *((int *)t1) = t17;
    goto LAB152;

LAB155:    xsi_set_current_line(244, ng1);
    t1 = (t0 + 7168U);
    t2 = *((char **)t1);
    t6 = *((int *)t2);
    t1 = (t0 + 4232U);
    t4 = *((char **)t1);
    t15 = *((int *)t4);
    t17 = (t15 * 10);
    t18 = (t6 + t17);
    t1 = (t0 + 7168U);
    t5 = *((char **)t1);
    t1 = (t5 + 0);
    *((int *)t1) = t18;
    goto LAB152;

LAB156:    xsi_set_current_line(245, ng1);
    t1 = (t0 + 7168U);
    t2 = *((char **)t1);
    t6 = *((int *)t2);
    t1 = (t0 + 4232U);
    t4 = *((char **)t1);
    t15 = *((int *)t4);
    t17 = (t6 + t15);
    t1 = (t0 + 7168U);
    t5 = *((char **)t1);
    t1 = (t5 + 0);
    *((int *)t1) = t17;
    goto LAB152;

LAB157:    xsi_set_current_line(246, ng1);
    t1 = (t0 + 7048U);
    t2 = *((char **)t1);
    t6 = *((int *)t2);
    t1 = (t0 + 4232U);
    t4 = *((char **)t1);
    t15 = *((int *)t4);
    t17 = (t15 * 10);
    t18 = (t6 + t17);
    t1 = (t0 + 7048U);
    t5 = *((char **)t1);
    t1 = (t5 + 0);
    *((int *)t1) = t18;
    goto LAB152;

LAB158:    xsi_set_current_line(247, ng1);
    t1 = (t0 + 7048U);
    t2 = *((char **)t1);
    t6 = *((int *)t2);
    t1 = (t0 + 4232U);
    t4 = *((char **)t1);
    t15 = *((int *)t4);
    t17 = (t6 + t15);
    t1 = (t0 + 7048U);
    t5 = *((char **)t1);
    t1 = (t5 + 0);
    *((int *)t1) = t17;
    goto LAB152;

LAB166:;
LAB167:    xsi_set_current_line(250, ng1);
    t1 = (t0 + 7288U);
    t4 = *((char **)t1);
    t1 = (t4 + 0);
    *((int *)t1) = 59;
    goto LAB168;

LAB170:    xsi_set_current_line(251, ng1);
    t1 = (t0 + 7168U);
    t4 = *((char **)t1);
    t1 = (t4 + 0);
    *((int *)t1) = 59;
    goto LAB171;

LAB173:    xsi_set_current_line(252, ng1);
    t1 = (t0 + 7048U);
    t4 = *((char **)t1);
    t1 = (t4 + 0);
    *((int *)t1) = 23;
    goto LAB174;

LAB176:    xsi_set_current_line(256, ng1);
    t1 = (t0 + 11776);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t10 = (t5 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = (unsigned char)4;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(257, ng1);
    t1 = (t0 + 7408U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((unsigned char *)t1) = (unsigned char)0;
    xsi_set_current_line(258, ng1);
    t1 = (t0 + 11968);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t10 = *((char **)t5);
    *((unsigned char *)t10) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB150;

LAB178:    xsi_set_current_line(271, ng1);
    t1 = (t0 + 7408U);
    t4 = *((char **)t1);
    t7 = *((unsigned char *)t4);
    t1 = (t0 + 11776);
    t5 = (t1 + 56U);
    t10 = *((char **)t5);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t7;
    xsi_driver_first_trans_fast(t1);
    goto LAB179;

}


extern void work_a_2964965119_3212880686_init()
{
	static char *pe[] = {(void *)work_a_2964965119_3212880686_p_0,(void *)work_a_2964965119_3212880686_p_1,(void *)work_a_2964965119_3212880686_p_2,(void *)work_a_2964965119_3212880686_p_3,(void *)work_a_2964965119_3212880686_p_4,(void *)work_a_2964965119_3212880686_p_5,(void *)work_a_2964965119_3212880686_p_6};
	static char *se[] = {(void *)work_a_2964965119_3212880686_sub_2310700199_3057020925};
	xsi_register_didat("work_a_2964965119_3212880686", "isim/clock_isim_beh.exe.sim/work/a_2964965119_3212880686.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
