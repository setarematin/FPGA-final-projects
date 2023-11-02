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
static const char *ng0 = "C:/Users/User/Desktop/daneshgah/FPGA/project/FPGA_project/safe/safe_with_additional_state/safe/safe.vhd";
extern char *IEEE_P_3620187407;

unsigned char ieee_p_3620187407_sub_4042748798_3965413181(char *, char *, char *, char *, char *);
int ieee_p_3620187407_sub_514432868_3965413181(char *, char *, char *);


static void work_a_2978111684_3212880686_p_0(char *t0)
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
    unsigned char t11;
    char *t12;
    char *t13;
    int t14;
    int t15;

LAB0:    xsi_set_current_line(30, ng0);
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
LAB3:    t1 = (t0 + 5080);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(31, ng0);
    t1 = (t0 + 5176);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(32, ng0);
    t1 = (t0 + 5240);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((int *)t7) = 0;
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

LAB5:    xsi_set_current_line(34, ng0);
    t2 = (t0 + 1832U);
    t6 = *((char **)t2);
    t11 = *((unsigned char *)t6);
    t2 = (t0 + 5176);
    t7 = (t2 + 56U);
    t8 = *((char **)t7);
    t12 = (t8 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = t11;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(35, ng0);
    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB10;

LAB12:    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB16;

LAB17:
LAB11:    goto LAB3;

LAB7:    t2 = (t0 + 1192U);
    t5 = *((char **)t2);
    t9 = *((unsigned char *)t5);
    t10 = (t9 == (unsigned char)3);
    t3 = t10;
    goto LAB9;

LAB10:    xsi_set_current_line(36, ng0);
    t1 = (t0 + 2472U);
    t5 = *((char **)t1);
    t14 = *((int *)t5);
    t15 = (t14 + 1);
    t1 = (t0 + 5240);
    t6 = (t1 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t12 = *((char **)t8);
    *((int *)t12) = t15;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(37, ng0);
    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t14 = *((int *)t2);
    t3 = (t14 >= 30000);
    if (t3 != 0)
        goto LAB13;

LAB15:
LAB14:    goto LAB11;

LAB13:    xsi_set_current_line(38, ng0);
    t1 = (t0 + 5240);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((int *)t8) = 0;
    xsi_driver_first_trans_fast(t1);
    goto LAB14;

LAB16:    xsi_set_current_line(41, ng0);
    t1 = (t0 + 5240);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((int *)t8) = 0;
    xsi_driver_first_trans_fast(t1);
    goto LAB11;

}

static void work_a_2978111684_3212880686_p_1(char *t0)
{
    char t9[16];
    char t26[16];
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
    char *t12;
    char *t13;
    char *t14;
    int t15;
    int t16;
    unsigned int t17;
    unsigned int t18;
    int t19;
    int t20;
    unsigned int t21;
    int t22;
    int t23;
    unsigned int t24;
    unsigned int t25;
    char *t27;
    int t28;
    unsigned int t29;
    char *t30;
    unsigned char t31;
    static char *nl0[] = {&&LAB3, &&LAB4, &&LAB5, &&LAB7, &&LAB8, &&LAB6};

LAB0:    xsi_set_current_line(54, ng0);
    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (char *)((nl0) + t3);
    goto **((char **)t1);

LAB2:    xsi_set_current_line(157, ng0);
    t1 = (t0 + 3408U);
    t2 = *((char **)t1);
    t10 = *((int *)t2);
    t1 = (t0 + 5624);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((int *)t7) = t10;
    xsi_driver_first_trans_fast(t1);
    t1 = (t0 + 5096);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(58, ng0);
    t4 = (t0 + 5304);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(59, ng0);
    t1 = (t0 + 3408U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((int *)t1) = 0;
    xsi_set_current_line(60, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t1 = (t0 + 10012U);
    t4 = (t0 + 10181);
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
    t3 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t2, t1, t4, t9);
    if (t3 != 0)
        goto LAB9;

LAB11:    xsi_set_current_line(65, ng0);
    t1 = (t0 + 5368);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(66, ng0);
    t1 = (t0 + 5432);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);

LAB10:    goto LAB2;

LAB4:    xsi_set_current_line(71, ng0);
    t1 = (t0 + 5304);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(72, ng0);
    t1 = (t0 + 3408U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((int *)t1) = 0;
    xsi_set_current_line(73, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t1 = (t0 + 10012U);
    t4 = (t0 + 10185);
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
    t3 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t2, t1, t4, t9);
    if (t3 != 0)
        goto LAB12;

LAB14:    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t1 = (t0 + 10012U);
    t4 = (t0 + 10189);
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
    t3 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t2, t1, t4, t9);
    if (t3 != 0)
        goto LAB15;

LAB16:    xsi_set_current_line(80, ng0);
    t1 = (t0 + 5368);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);

LAB13:    goto LAB2;

LAB5:    xsi_set_current_line(85, ng0);
    t1 = (t0 + 5304);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(86, ng0);
    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t10 = *((int *)t2);
    t3 = (t10 >= 30000);
    if (t3 != 0)
        goto LAB17;

LAB19:    xsi_set_current_line(90, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t1 = (t0 + 10012U);
    t10 = ieee_p_3620187407_sub_514432868_3965413181(IEEE_P_3620187407, t2, t1);
    t3 = (t10 < 10);
    if (t3 != 0)
        goto LAB20;

LAB22:    xsi_set_current_line(101, ng0);
    t1 = (t0 + 5368);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);

LAB21:
LAB18:    goto LAB2;

LAB6:    xsi_set_current_line(106, ng0);
    t1 = (t0 + 5304);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(107, ng0);
    t1 = (t0 + 3528U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((unsigned char *)t1) = (unsigned char)3;
    xsi_set_current_line(108, ng0);
    t1 = (t0 + 10193);
    *((int *)t1) = 1;
    t2 = (t0 + 10197);
    *((int *)t2) = 4;
    t10 = 1;
    t15 = 4;

LAB28:    if (t10 <= t15)
        goto LAB29;

LAB31:    xsi_set_current_line(114, ng0);
    t1 = (t0 + 3528U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t31 = (t3 == (unsigned char)3);
    if (t31 != 0)
        goto LAB38;

LAB40:    t1 = (t0 + 3528U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t31 = (t3 == (unsigned char)2);
    if (t31 != 0)
        goto LAB41;

LAB42:
LAB39:    goto LAB2;

LAB7:    xsi_set_current_line(122, ng0);
    t1 = (t0 + 5304);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(123, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t1 = (t0 + 10012U);
    t10 = ieee_p_3620187407_sub_514432868_3965413181(IEEE_P_3620187407, t2, t1);
    t3 = (t10 < 10);
    if (t3 != 0)
        goto LAB43;

LAB45:    xsi_set_current_line(133, ng0);
    t1 = (t0 + 5368);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);

LAB44:    goto LAB2;

LAB8:    xsi_set_current_line(140, ng0);
    t1 = (t0 + 5304);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(141, ng0);
    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t10 = *((int *)t2);
    t3 = (t10 >= 30000);
    if (t3 != 0)
        goto LAB51;

LAB53:    xsi_set_current_line(146, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t1 = (t0 + 10012U);
    t4 = (t0 + 10205);
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
    t3 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t2, t1, t4, t9);
    if (t3 != 0)
        goto LAB54;

LAB56:    xsi_set_current_line(149, ng0);
    t1 = (t0 + 5368);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)4;
    xsi_driver_first_trans_fast(t1);

LAB55:
LAB52:    goto LAB2;

LAB9:    xsi_set_current_line(61, ng0);
    t7 = (t0 + 5368);
    t8 = (t7 + 56U);
    t12 = *((char **)t8);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)4;
    xsi_driver_first_trans_fast(t7);
    xsi_set_current_line(62, ng0);
    t1 = (t0 + 3288U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((unsigned char *)t1) = (unsigned char)2;
    xsi_set_current_line(63, ng0);
    t1 = (t0 + 5432);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB10;

LAB12:    xsi_set_current_line(74, ng0);
    t7 = (t0 + 5368);
    t8 = (t7 + 56U);
    t12 = *((char **)t8);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)4;
    xsi_driver_first_trans_fast(t7);
    xsi_set_current_line(75, ng0);
    t1 = (t0 + 3288U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((unsigned char *)t1) = (unsigned char)3;
    goto LAB13;

LAB15:    xsi_set_current_line(77, ng0);
    t7 = (t0 + 5368);
    t8 = (t7 + 56U);
    t12 = *((char **)t8);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)4;
    xsi_driver_first_trans_fast(t7);
    xsi_set_current_line(78, ng0);
    t1 = (t0 + 3288U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((unsigned char *)t1) = (unsigned char)0;
    goto LAB13;

LAB17:    xsi_set_current_line(87, ng0);
    t1 = (t0 + 5368);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(88, ng0);
    t1 = (t0 + 5432);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB18;

LAB20:    xsi_set_current_line(91, ng0);
    t4 = (t0 + 3408U);
    t5 = *((char **)t4);
    t15 = *((int *)t5);
    t16 = (t15 + 1);
    t4 = (t0 + 3408U);
    t6 = *((char **)t4);
    t4 = (t6 + 0);
    *((int *)t4) = t16;
    xsi_set_current_line(92, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t1 = (t0 + 3408U);
    t4 = *((char **)t1);
    t10 = *((int *)t4);
    t15 = (t10 - 1);
    t11 = (t15 * 1);
    t17 = (4U * t11);
    t18 = (0U + t17);
    t1 = (t0 + 5496);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 4U);
    xsi_driver_first_trans_delta(t1, t18, 4U, 0LL);
    xsi_set_current_line(93, ng0);
    t1 = (t0 + 5368);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)4;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(94, ng0);
    t1 = (t0 + 3408U);
    t2 = *((char **)t1);
    t10 = *((int *)t2);
    t3 = (t10 < 4);
    if (t3 != 0)
        goto LAB23;

LAB25:    t1 = (t0 + 3408U);
    t2 = *((char **)t1);
    t10 = *((int *)t2);
    t3 = (t10 == 4);
    if (t3 != 0)
        goto LAB26;

LAB27:
LAB24:    goto LAB21;

LAB23:    xsi_set_current_line(95, ng0);
    t1 = (t0 + 3288U);
    t4 = *((char **)t1);
    t1 = (t4 + 0);
    *((unsigned char *)t1) = (unsigned char)2;
    goto LAB24;

LAB26:    xsi_set_current_line(97, ng0);
    t1 = (t0 + 3288U);
    t4 = *((char **)t1);
    t1 = (t4 + 0);
    *((unsigned char *)t1) = (unsigned char)5;
    xsi_set_current_line(98, ng0);
    t1 = (t0 + 5432);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB24;

LAB29:    xsi_set_current_line(109, ng0);
    t4 = (t0 + 2152U);
    t5 = *((char **)t4);
    t4 = (t0 + 10193);
    t16 = *((int *)t4);
    t19 = (t16 - 1);
    t11 = (t19 * 1);
    xsi_vhdl_check_range_of_index(1, 4, 1, *((int *)t4));
    t17 = (4U * t11);
    t18 = (0 + t17);
    t6 = (t5 + t18);
    t7 = (t9 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 3;
    t8 = (t7 + 4U);
    *((int *)t8) = 0;
    t8 = (t7 + 8U);
    *((int *)t8) = -1;
    t20 = (0 - 3);
    t21 = (t20 * -1);
    t21 = (t21 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t21;
    t8 = (t0 + 1992U);
    t12 = *((char **)t8);
    t8 = (t0 + 10193);
    t22 = *((int *)t8);
    t23 = (t22 - 1);
    t21 = (t23 * 1);
    xsi_vhdl_check_range_of_index(1, 4, 1, *((int *)t8));
    t24 = (4U * t21);
    t25 = (0 + t24);
    t13 = (t12 + t25);
    t14 = (t26 + 0U);
    t27 = (t14 + 0U);
    *((int *)t27) = 3;
    t27 = (t14 + 4U);
    *((int *)t27) = 0;
    t27 = (t14 + 8U);
    *((int *)t27) = -1;
    t28 = (0 - 3);
    t29 = (t28 * -1);
    t29 = (t29 + 1);
    t27 = (t14 + 12U);
    *((unsigned int *)t27) = t29;
    t3 = ieee_p_3620187407_sub_4042748798_3965413181(IEEE_P_3620187407, t6, t9, t13, t26);
    if (t3 != 0)
        goto LAB32;

LAB34:
LAB33:    xsi_set_current_line(112, ng0);
    t1 = (t0 + 10201);
    t3 = (4U != 4U);
    if (t3 == 1)
        goto LAB35;

LAB36:    t4 = (t0 + 10193);
    t16 = *((int *)t4);
    t19 = (t16 - 1);
    t11 = (t19 * 1);
    t17 = (4U * t11);
    t18 = (0U + t17);
    t5 = (t0 + 5496);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t12 = *((char **)t8);
    memcpy(t12, t1, 4U);
    xsi_driver_first_trans_delta(t5, t18, 4U, 0LL);

LAB30:    t1 = (t0 + 10193);
    t10 = *((int *)t1);
    t2 = (t0 + 10197);
    t15 = *((int *)t2);
    if (t10 == t15)
        goto LAB31;

LAB37:    t16 = (t10 + 1);
    t10 = t16;
    t4 = (t0 + 10193);
    *((int *)t4) = t10;
    goto LAB28;

LAB32:    xsi_set_current_line(110, ng0);
    t27 = (t0 + 3528U);
    t30 = *((char **)t27);
    t27 = (t30 + 0);
    *((unsigned char *)t27) = (unsigned char)2;
    goto LAB33;

LAB35:    xsi_size_not_matching(4U, 4U, 0);
    goto LAB36;

LAB38:    xsi_set_current_line(115, ng0);
    t1 = (t0 + 5368);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);
    goto LAB39;

LAB41:    xsi_set_current_line(117, ng0);
    t1 = (t0 + 5368);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB39;

LAB43:    xsi_set_current_line(124, ng0);
    t4 = (t0 + 3408U);
    t5 = *((char **)t4);
    t15 = *((int *)t5);
    t16 = (t15 + 1);
    t4 = (t0 + 3408U);
    t6 = *((char **)t4);
    t4 = (t6 + 0);
    *((int *)t4) = t16;
    xsi_set_current_line(125, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t1 = (t0 + 3408U);
    t4 = *((char **)t1);
    t10 = *((int *)t4);
    t15 = (t10 - 1);
    t11 = (t15 * 1);
    t17 = (4U * t11);
    t18 = (0U + t17);
    t1 = (t0 + 5560);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 4U);
    xsi_driver_first_trans_delta(t1, t18, 4U, 0LL);
    xsi_set_current_line(126, ng0);
    t1 = (t0 + 5368);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)4;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(127, ng0);
    t1 = (t0 + 3408U);
    t2 = *((char **)t1);
    t10 = *((int *)t2);
    t3 = (t10 < 4);
    if (t3 != 0)
        goto LAB46;

LAB48:    t1 = (t0 + 3408U);
    t2 = *((char **)t1);
    t10 = *((int *)t2);
    t3 = (t10 == 4);
    if (t3 != 0)
        goto LAB49;

LAB50:
LAB47:    goto LAB44;

LAB46:    xsi_set_current_line(128, ng0);
    t1 = (t0 + 3288U);
    t4 = *((char **)t1);
    t1 = (t4 + 0);
    *((unsigned char *)t1) = (unsigned char)3;
    goto LAB47;

LAB49:    xsi_set_current_line(130, ng0);
    t1 = (t0 + 3288U);
    t4 = *((char **)t1);
    t1 = (t4 + 0);
    *((unsigned char *)t1) = (unsigned char)1;
    goto LAB47;

LAB51:    xsi_set_current_line(142, ng0);
    t1 = (t0 + 5368);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(143, ng0);
    t1 = (t0 + 5432);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB52;

LAB54:    xsi_set_current_line(147, ng0);
    t7 = (t0 + 3288U);
    t8 = *((char **)t7);
    t31 = *((unsigned char *)t8);
    t7 = (t0 + 5368);
    t12 = (t7 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t27 = *((char **)t14);
    *((unsigned char *)t27) = t31;
    xsi_driver_first_trans_fast(t7);
    goto LAB55;

}


extern void work_a_2978111684_3212880686_init()
{
	static char *pe[] = {(void *)work_a_2978111684_3212880686_p_0,(void *)work_a_2978111684_3212880686_p_1};
	xsi_register_didat("work_a_2978111684_3212880686", "isim/safe_isim_beh.exe.sim/work/a_2978111684_3212880686.didat");
	xsi_register_executes(pe);
}
