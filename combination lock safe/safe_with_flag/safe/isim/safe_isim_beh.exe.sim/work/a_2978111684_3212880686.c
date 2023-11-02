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
static const char *ng0 = "C:/Users/User/Desktop/daneshgah/FPGA/safe/safe/safe.vhd";
extern char *IEEE_P_3620187407;

unsigned char ieee_p_3620187407_sub_4042748798_3965413181(char *, char *, char *, char *, char *);
int ieee_p_3620187407_sub_514432868_3965413181(char *, char *, char *);


static void work_a_2978111684_3212880686_p_0(char *t0)
{
    char t11[16];
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned char t9;
    unsigned char t10;
    char *t12;
    char *t13;
    int t14;
    unsigned int t15;
    unsigned char t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;

LAB0:    xsi_set_current_line(28, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 1152U);
    t4 = xsi_signal_has_event(t1);
    if (t4 == 1)
        goto LAB7;

LAB8:    t3 = (unsigned char)0;

LAB9:    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 5328);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(29, ng0);
    t1 = (t0 + 5440);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

LAB5:    xsi_set_current_line(31, ng0);
    t2 = (t0 + 1352U);
    t6 = *((char **)t2);
    t2 = (t0 + 9504U);
    t7 = (t0 + 9709);
    t12 = (t11 + 0U);
    t13 = (t12 + 0U);
    *((int *)t13) = 0;
    t13 = (t12 + 4U);
    *((int *)t13) = 3;
    t13 = (t12 + 8U);
    *((int *)t13) = 1;
    t14 = (3 - 0);
    t15 = (t14 * 1);
    t15 = (t15 + 1);
    t13 = (t12 + 12U);
    *((unsigned int *)t13) = t15;
    t16 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t6, t2, t7, t11);
    if (t16 != 0)
        goto LAB10;

LAB12:    xsi_set_current_line(34, ng0);
    t1 = (t0 + 5440);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);

LAB11:    goto LAB3;

LAB7:    t2 = (t0 + 1192U);
    t5 = *((char **)t2);
    t9 = *((unsigned char *)t5);
    t10 = (t9 == (unsigned char)3);
    t3 = t10;
    goto LAB9;

LAB10:    xsi_set_current_line(32, ng0);
    t13 = (t0 + 5440);
    t17 = (t13 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    *((unsigned char *)t20) = (unsigned char)3;
    xsi_driver_first_trans_fast(t13);
    goto LAB11;

}

static void work_a_2978111684_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned char t9;
    unsigned char t10;
    int t11;
    int t12;
    char *t13;
    char *t14;

LAB0:    xsi_set_current_line(42, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 1152U);
    t4 = xsi_signal_has_event(t1);
    if (t4 == 1)
        goto LAB7;

LAB8:    t3 = (unsigned char)0;

LAB9:    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 5344);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(43, ng0);
    t1 = (t0 + 5504);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(44, ng0);
    t1 = (t0 + 3288U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((int *)t1) = 0;
    goto LAB3;

LAB5:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 3288U);
    t6 = *((char **)t2);
    t11 = *((int *)t6);
    t12 = (t11 + 1);
    t2 = (t0 + 3288U);
    t7 = *((char **)t2);
    t2 = (t7 + 0);
    *((int *)t2) = t12;
    xsi_set_current_line(47, ng0);
    t1 = (t0 + 3288U);
    t2 = *((char **)t1);
    t11 = *((int *)t2);
    t1 = (t0 + 2472U);
    t5 = *((char **)t1);
    t12 = *((int *)t5);
    t3 = (t11 >= t12);
    if (t3 != 0)
        goto LAB10;

LAB12:
LAB11:    goto LAB3;

LAB7:    t2 = (t0 + 1192U);
    t5 = *((char **)t2);
    t9 = *((unsigned char *)t5);
    t10 = (t9 == (unsigned char)3);
    t3 = t10;
    goto LAB9;

LAB10:    xsi_set_current_line(48, ng0);
    t1 = (t0 + 1832U);
    t6 = *((char **)t1);
    t4 = *((unsigned char *)t6);
    t1 = (t0 + 5504);
    t7 = (t1 + 56U);
    t8 = *((char **)t7);
    t13 = (t8 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = t4;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(49, ng0);
    t1 = (t0 + 3288U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((int *)t1) = 0;
    goto LAB11;

}

static void work_a_2978111684_3212880686_p_2(char *t0)
{
    char t9[16];
    char t30[16];
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    int t10;
    unsigned int t11;
    unsigned char t12;
    unsigned char t13;
    unsigned char t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    int t19;
    int t20;
    unsigned int t21;
    unsigned int t22;
    int t23;
    int t24;
    unsigned int t25;
    int t26;
    int t27;
    unsigned int t28;
    unsigned int t29;
    int t31;
    unsigned int t32;
    char *t33;
    static char *nl0[] = {&&LAB3, &&LAB4, &&LAB5, &&LAB6, &&LAB7};

LAB0:    xsi_set_current_line(58, ng0);
    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (char *)((nl0) + t3);
    goto **((char **)t1);

LAB2:    xsi_set_current_line(133, ng0);
    t1 = (t0 + 3408U);
    t2 = *((char **)t1);
    t10 = *((int *)t2);
    t1 = (t0 + 5888);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((int *)t7) = t10;
    xsi_driver_first_trans_fast(t1);
    t1 = (t0 + 5360);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(61, ng0);
    t4 = (t0 + 5568);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(62, ng0);
    t1 = (t0 + 5632);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((int *)t6) = 1;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(63, ng0);
    t1 = (t0 + 3408U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((int *)t1) = 0;
    xsi_set_current_line(64, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t1 = (t0 + 9504U);
    t4 = (t0 + 9713);
    t6 = (t9 + 0U);
    t7 = (t6 + 0U);
    *((int *)t7) = 0;
    t7 = (t6 + 4U);
    *((int *)t7) = 3;
    t7 = (t6 + 8U);
    *((int *)t7) = 1;
    t10 = (3 - 0);
    t11 = (t10 * 1);
    t11 = (t11 + 1);
    t7 = (t6 + 12U);
    *((unsigned int *)t7) = t11;
    t12 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t2, t1, t4, t9);
    if (t12 == 1)
        goto LAB11;

LAB12:    t3 = (unsigned char)0;

LAB13:    if (t3 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(67, ng0);
    t1 = (t0 + 5696);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);

LAB9:    goto LAB2;

LAB4:    xsi_set_current_line(71, ng0);
    t1 = (t0 + 5568);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(72, ng0);
    t1 = (t0 + 5632);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((int *)t6) = 1;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(73, ng0);
    t1 = (t0 + 3408U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((int *)t1) = 0;
    xsi_set_current_line(74, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t1 = (t0 + 9504U);
    t4 = (t0 + 9717);
    t6 = (t9 + 0U);
    t7 = (t6 + 0U);
    *((int *)t7) = 0;
    t7 = (t6 + 4U);
    *((int *)t7) = 3;
    t7 = (t6 + 8U);
    *((int *)t7) = 1;
    t10 = (3 - 0);
    t11 = (t10 * 1);
    t11 = (t11 + 1);
    t7 = (t6 + 12U);
    *((unsigned int *)t7) = t11;
    t12 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t2, t1, t4, t9);
    if (t12 == 1)
        goto LAB17;

LAB18:    t3 = (unsigned char)0;

LAB19:    if (t3 != 0)
        goto LAB14;

LAB16:    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t1 = (t0 + 9504U);
    t4 = (t0 + 9721);
    t6 = (t9 + 0U);
    t7 = (t6 + 0U);
    *((int *)t7) = 0;
    t7 = (t6 + 4U);
    *((int *)t7) = 3;
    t7 = (t6 + 8U);
    *((int *)t7) = 1;
    t10 = (3 - 0);
    t11 = (t10 * 1);
    t11 = (t11 + 1);
    t7 = (t6 + 12U);
    *((unsigned int *)t7) = t11;
    t12 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t2, t1, t4, t9);
    if (t12 == 1)
        goto LAB22;

LAB23:    t3 = (unsigned char)0;

LAB24:    if (t3 != 0)
        goto LAB20;

LAB21:    xsi_set_current_line(79, ng0);
    t1 = (t0 + 5696);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);

LAB15:    goto LAB2;

LAB5:    xsi_set_current_line(83, ng0);
    t1 = (t0 + 5568);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(84, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t1 = (t0 + 9504U);
    t10 = ieee_p_3620187407_sub_514432868_3965413181(IEEE_P_3620187407, t2, t1);
    t12 = (t10 < 10);
    if (t12 == 1)
        goto LAB28;

LAB29:    t3 = (unsigned char)0;

LAB30:    if (t3 != 0)
        goto LAB25;

LAB27:    xsi_set_current_line(95, ng0);
    t1 = (t0 + 5632);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((int *)t6) = 30000;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(96, ng0);
    t1 = (t0 + 5696);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);

LAB26:    goto LAB2;

LAB6:    xsi_set_current_line(100, ng0);
    t1 = (t0 + 5568);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(101, ng0);
    t1 = (t0 + 5632);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((int *)t6) = 1;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(102, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t1 = (t0 + 9504U);
    t10 = ieee_p_3620187407_sub_514432868_3965413181(IEEE_P_3620187407, t2, t1);
    t12 = (t10 < 10);
    if (t12 == 1)
        goto LAB39;

LAB40:    t3 = (unsigned char)0;

LAB41:    if (t3 != 0)
        goto LAB36;

LAB38:    xsi_set_current_line(111, ng0);
    t1 = (t0 + 5696);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);

LAB37:    goto LAB2;

LAB7:    xsi_set_current_line(115, ng0);
    t1 = (t0 + 5568);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(116, ng0);
    t1 = (t0 + 5632);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((int *)t6) = 1;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(117, ng0);
    t1 = (t0 + 3528U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((unsigned char *)t1) = (unsigned char)3;
    xsi_set_current_line(118, ng0);
    t1 = (t0 + 9725);
    *((int *)t1) = 1;
    t2 = (t0 + 9729);
    *((int *)t2) = 4;
    t10 = 1;
    t19 = 4;

LAB47:    if (t10 <= t19)
        goto LAB48;

LAB50:    xsi_set_current_line(124, ng0);
    t1 = (t0 + 3528U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t12 = (t3 == (unsigned char)3);
    if (t12 != 0)
        goto LAB57;

LAB59:    t1 = (t0 + 3528U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t12 = (t3 == (unsigned char)2);
    if (t12 != 0)
        goto LAB60;

LAB61:
LAB58:    goto LAB2;

LAB8:    xsi_set_current_line(65, ng0);
    t7 = (t0 + 5696);
    t15 = (t7 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    *((unsigned char *)t18) = (unsigned char)2;
    xsi_driver_first_trans_fast(t7);
    goto LAB9;

LAB11:    t7 = (t0 + 2632U);
    t8 = *((char **)t7);
    t13 = *((unsigned char *)t8);
    t14 = (t13 == (unsigned char)3);
    t3 = t14;
    goto LAB13;

LAB14:    xsi_set_current_line(75, ng0);
    t7 = (t0 + 5696);
    t15 = (t7 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    *((unsigned char *)t18) = (unsigned char)0;
    xsi_driver_first_trans_fast(t7);
    goto LAB15;

LAB17:    t7 = (t0 + 2632U);
    t8 = *((char **)t7);
    t13 = *((unsigned char *)t8);
    t14 = (t13 == (unsigned char)3);
    t3 = t14;
    goto LAB19;

LAB20:    xsi_set_current_line(77, ng0);
    t7 = (t0 + 5696);
    t15 = (t7 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    *((unsigned char *)t18) = (unsigned char)3;
    xsi_driver_first_trans_fast(t7);
    goto LAB15;

LAB22:    t7 = (t0 + 2632U);
    t8 = *((char **)t7);
    t13 = *((unsigned char *)t8);
    t14 = (t13 == (unsigned char)3);
    t3 = t14;
    goto LAB24;

LAB25:    xsi_set_current_line(85, ng0);
    t4 = (t0 + 3408U);
    t6 = *((char **)t4);
    t19 = *((int *)t6);
    t20 = (t19 + 1);
    t4 = (t0 + 3408U);
    t7 = *((char **)t4);
    t4 = (t7 + 0);
    *((int *)t4) = t20;
    xsi_set_current_line(86, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t1 = (t0 + 3408U);
    t4 = *((char **)t1);
    t10 = *((int *)t4);
    t19 = (t10 - 1);
    t11 = (t19 * 1);
    t21 = (4U * t11);
    t22 = (0U + t21);
    t1 = (t0 + 5760);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 4U);
    xsi_driver_first_trans_delta(t1, t22, 4U, 0LL);
    xsi_set_current_line(87, ng0);
    t1 = (t0 + 3408U);
    t2 = *((char **)t1);
    t10 = *((int *)t2);
    t3 = (t10 < 4);
    if (t3 != 0)
        goto LAB31;

LAB33:    t1 = (t0 + 3408U);
    t2 = *((char **)t1);
    t10 = *((int *)t2);
    t3 = (t10 == 4);
    if (t3 != 0)
        goto LAB34;

LAB35:
LAB32:    goto LAB26;

LAB28:    t4 = (t0 + 2632U);
    t5 = *((char **)t4);
    t13 = *((unsigned char *)t5);
    t14 = (t13 == (unsigned char)3);
    t3 = t14;
    goto LAB30;

LAB31:    xsi_set_current_line(88, ng0);
    t1 = (t0 + 5632);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((int *)t7) = 30000;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(89, ng0);
    t1 = (t0 + 5696);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB32;

LAB34:    xsi_set_current_line(91, ng0);
    t1 = (t0 + 5632);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((int *)t7) = 1;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(92, ng0);
    t1 = (t0 + 5696);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)4;
    xsi_driver_first_trans_fast(t1);
    goto LAB32;

LAB36:    xsi_set_current_line(103, ng0);
    t4 = (t0 + 3408U);
    t6 = *((char **)t4);
    t19 = *((int *)t6);
    t20 = (t19 + 1);
    t4 = (t0 + 3408U);
    t7 = *((char **)t4);
    t4 = (t7 + 0);
    *((int *)t4) = t20;
    xsi_set_current_line(104, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t1 = (t0 + 3408U);
    t4 = *((char **)t1);
    t10 = *((int *)t4);
    t19 = (t10 - 1);
    t11 = (t19 * 1);
    t21 = (4U * t11);
    t22 = (0U + t21);
    t1 = (t0 + 5824);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 4U);
    xsi_driver_first_trans_delta(t1, t22, 4U, 0LL);
    xsi_set_current_line(105, ng0);
    t1 = (t0 + 3408U);
    t2 = *((char **)t1);
    t10 = *((int *)t2);
    t3 = (t10 < 4);
    if (t3 != 0)
        goto LAB42;

LAB44:    t1 = (t0 + 3408U);
    t2 = *((char **)t1);
    t10 = *((int *)t2);
    t3 = (t10 == 4);
    if (t3 != 0)
        goto LAB45;

LAB46:
LAB43:    goto LAB37;

LAB39:    t4 = (t0 + 2632U);
    t5 = *((char **)t4);
    t13 = *((unsigned char *)t5);
    t14 = (t13 == (unsigned char)3);
    t3 = t14;
    goto LAB41;

LAB42:    xsi_set_current_line(106, ng0);
    t1 = (t0 + 5696);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB43;

LAB45:    xsi_set_current_line(108, ng0);
    t1 = (t0 + 5696);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);
    goto LAB43;

LAB48:    xsi_set_current_line(119, ng0);
    t4 = (t0 + 2152U);
    t5 = *((char **)t4);
    t4 = (t0 + 9725);
    t20 = *((int *)t4);
    t23 = (t20 - 1);
    t11 = (t23 * 1);
    xsi_vhdl_check_range_of_index(1, 4, 1, *((int *)t4));
    t21 = (4U * t11);
    t22 = (0 + t21);
    t6 = (t5 + t22);
    t7 = (t9 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 3;
    t8 = (t7 + 4U);
    *((int *)t8) = 0;
    t8 = (t7 + 8U);
    *((int *)t8) = -1;
    t24 = (0 - 3);
    t25 = (t24 * -1);
    t25 = (t25 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t25;
    t8 = (t0 + 1992U);
    t15 = *((char **)t8);
    t8 = (t0 + 9725);
    t26 = *((int *)t8);
    t27 = (t26 - 1);
    t25 = (t27 * 1);
    xsi_vhdl_check_range_of_index(1, 4, 1, *((int *)t8));
    t28 = (4U * t25);
    t29 = (0 + t28);
    t16 = (t15 + t29);
    t17 = (t30 + 0U);
    t18 = (t17 + 0U);
    *((int *)t18) = 3;
    t18 = (t17 + 4U);
    *((int *)t18) = 0;
    t18 = (t17 + 8U);
    *((int *)t18) = -1;
    t31 = (0 - 3);
    t32 = (t31 * -1);
    t32 = (t32 + 1);
    t18 = (t17 + 12U);
    *((unsigned int *)t18) = t32;
    t3 = ieee_p_3620187407_sub_4042748798_3965413181(IEEE_P_3620187407, t6, t9, t16, t30);
    if (t3 != 0)
        goto LAB51;

LAB53:
LAB52:
LAB49:    t1 = (t0 + 9725);
    t10 = *((int *)t1);
    t2 = (t0 + 9729);
    t19 = *((int *)t2);
    if (t10 == t19)
        goto LAB50;

LAB56:    t20 = (t10 + 1);
    t10 = t20;
    t4 = (t0 + 9725);
    *((int *)t4) = t10;
    goto LAB47;

LAB51:    xsi_set_current_line(120, ng0);
    t18 = (t0 + 3528U);
    t33 = *((char **)t18);
    t18 = (t33 + 0);
    *((unsigned char *)t18) = (unsigned char)2;
    xsi_set_current_line(121, ng0);
    t1 = (t0 + 9733);
    t3 = (4U != 4U);
    if (t3 == 1)
        goto LAB54;

LAB55:    t4 = (t0 + 9725);
    t20 = *((int *)t4);
    t23 = (t20 - 1);
    t11 = (t23 * 1);
    t21 = (4U * t11);
    t22 = (0U + t21);
    t5 = (t0 + 5760);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t15 = *((char **)t8);
    memcpy(t15, t1, 4U);
    xsi_driver_first_trans_delta(t5, t22, 4U, 0LL);
    goto LAB52;

LAB54:    xsi_size_not_matching(4U, 4U, 0);
    goto LAB55;

LAB57:    xsi_set_current_line(125, ng0);
    t1 = (t0 + 5696);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);
    goto LAB58;

LAB60:    xsi_set_current_line(127, ng0);
    t1 = (t0 + 5696);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB58;

}


extern void work_a_2978111684_3212880686_init()
{
	static char *pe[] = {(void *)work_a_2978111684_3212880686_p_0,(void *)work_a_2978111684_3212880686_p_1,(void *)work_a_2978111684_3212880686_p_2};
	xsi_register_didat("work_a_2978111684_3212880686", "isim/safe_isim_beh.exe.sim/work/a_2978111684_3212880686.didat");
	xsi_register_executes(pe);
}
