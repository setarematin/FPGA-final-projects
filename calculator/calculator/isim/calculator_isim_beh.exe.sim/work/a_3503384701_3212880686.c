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
extern char *IEEE_P_1242562249;
static const char *ng2 = "C:/Users/User/Desktop/daneshgah/FPGA/project/FPGA_project/calculator/calculator/calculator.vhd";

char *ieee_p_1242562249_sub_136421016_1035706684(char *, char *, char *, char *, int );
unsigned char ieee_p_1242562249_sub_2479218856_1035706684(char *, char *, char *, int );
unsigned char ieee_p_1242562249_sub_2479254793_1035706684(char *, char *, char *, int );
char *ieee_p_1242562249_sub_2807594338_1035706684(char *, char *, char *, char *, char *, char *);
char *ieee_p_1242562249_sub_2849293644_1035706684(char *, char *, char *, char *, char *, char *);
char *ieee_p_1242562249_sub_2931867381_1035706684(char *, char *, char *, char *, int );
char *ieee_p_1242562249_sub_3273497107_1035706684(char *, char *, char *, char *, char *, char *);
char *ieee_p_1242562249_sub_3273568981_1035706684(char *, char *, char *, char *, char *, char *);
char *ieee_p_1242562249_sub_3461525680_1035706684(char *, char *, char *, char *, int );
unsigned char ieee_p_1242562249_sub_3823179160_1035706684(char *, char *, char *, int );
unsigned char ieee_p_1242562249_sub_3838596133_1035706684(char *, char *, char *, int );
unsigned char ieee_p_1242562249_sub_3840967975_1035706684(char *, char *, char *, int );
char *ieee_p_1242562249_sub_3869231325_1035706684(char *, char *, char *, char *);


char *work_a_3503384701_3212880686_sub_3430496816_3057020925(char *t1, char *t2, char *t3, char *t4)
{
    char t5[128];
    char t6[24];
    char t7[16];
    char t14[8];
    char *t0;
    char *t8;
    char *t9;
    int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned char t19;
    char *t20;
    unsigned char t21;
    char *t22;
    char *t24;
    char *t25;
    int t26;
    int t27;
    int t28;
    unsigned int t29;

LAB0:    t8 = (t7 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 6;
    t9 = (t8 + 4U);
    *((int *)t9) = 0;
    t9 = (t8 + 8U);
    *((int *)t9) = -1;
    t10 = (0 - 6);
    t11 = (t10 * -1);
    t11 = (t11 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t11;
    t9 = (t5 + 4U);
    t12 = ((IEEE_P_2592010699) + 4024);
    t13 = (t9 + 88U);
    *((char **)t13) = t12;
    t15 = (t9 + 56U);
    *((char **)t15) = t14;
    xsi_type_set_default_value(t12, t14, t7);
    t16 = (t9 + 64U);
    *((char **)t16) = t7;
    t17 = (t9 + 80U);
    *((unsigned int *)t17) = 7U;
    t18 = (t6 + 4U);
    t19 = (t3 != 0);
    if (t19 == 1)
        goto LAB3;

LAB2:    t20 = (t6 + 12U);
    *((char **)t20) = t4;
    t21 = ieee_p_1242562249_sub_2479254793_1035706684(IEEE_P_1242562249, t3, t4, 0);
    if (t21 != 0)
        goto LAB4;

LAB6:    t19 = ieee_p_1242562249_sub_2479254793_1035706684(IEEE_P_1242562249, t3, t4, 1);
    if (t19 != 0)
        goto LAB7;

LAB8:    t19 = ieee_p_1242562249_sub_2479254793_1035706684(IEEE_P_1242562249, t3, t4, 2);
    if (t19 != 0)
        goto LAB9;

LAB10:    t19 = ieee_p_1242562249_sub_2479254793_1035706684(IEEE_P_1242562249, t3, t4, 3);
    if (t19 != 0)
        goto LAB11;

LAB12:    t19 = ieee_p_1242562249_sub_2479254793_1035706684(IEEE_P_1242562249, t3, t4, 4);
    if (t19 != 0)
        goto LAB13;

LAB14:    t19 = ieee_p_1242562249_sub_2479254793_1035706684(IEEE_P_1242562249, t3, t4, 5);
    if (t19 != 0)
        goto LAB15;

LAB16:    t19 = ieee_p_1242562249_sub_2479254793_1035706684(IEEE_P_1242562249, t3, t4, 6);
    if (t19 != 0)
        goto LAB17;

LAB18:    t19 = ieee_p_1242562249_sub_2479254793_1035706684(IEEE_P_1242562249, t3, t4, 7);
    if (t19 != 0)
        goto LAB19;

LAB20:    t19 = ieee_p_1242562249_sub_2479254793_1035706684(IEEE_P_1242562249, t3, t4, 8);
    if (t19 != 0)
        goto LAB21;

LAB22:    t19 = ieee_p_1242562249_sub_2479254793_1035706684(IEEE_P_1242562249, t3, t4, 9);
    if (t19 != 0)
        goto LAB23;

LAB24:    t8 = (t1 + 12122);
    t13 = (t9 + 56U);
    t15 = *((char **)t13);
    t13 = (t15 + 0);
    memcpy(t13, t8, 7U);

LAB5:    t8 = (t9 + 56U);
    t12 = *((char **)t8);
    t8 = (t7 + 12U);
    t11 = *((unsigned int *)t8);
    t11 = (t11 * 1U);
    t0 = xsi_get_transient_memory(t11);
    memcpy(t0, t12, t11);
    t13 = (t7 + 0U);
    t10 = *((int *)t13);
    t15 = (t7 + 4U);
    t26 = *((int *)t15);
    t16 = (t7 + 8U);
    t27 = *((int *)t16);
    t17 = (t2 + 0U);
    t22 = (t17 + 0U);
    *((int *)t22) = t10;
    t22 = (t17 + 4U);
    *((int *)t22) = t26;
    t22 = (t17 + 8U);
    *((int *)t22) = t27;
    t28 = (t26 - t10);
    t29 = (t28 * t27);
    t29 = (t29 + 1);
    t22 = (t17 + 12U);
    *((unsigned int *)t22) = t29;

LAB1:    return t0;
LAB3:    *((char **)t18) = t3;
    goto LAB2;

LAB4:    t22 = (t1 + 12052);
    t24 = (t9 + 56U);
    t25 = *((char **)t24);
    t24 = (t25 + 0);
    memcpy(t24, t22, 7U);
    goto LAB5;

LAB7:    t8 = (t1 + 12059);
    t13 = (t9 + 56U);
    t15 = *((char **)t13);
    t13 = (t15 + 0);
    memcpy(t13, t8, 7U);
    goto LAB5;

LAB9:    t8 = (t1 + 12066);
    t13 = (t9 + 56U);
    t15 = *((char **)t13);
    t13 = (t15 + 0);
    memcpy(t13, t8, 7U);
    goto LAB5;

LAB11:    t8 = (t1 + 12073);
    t13 = (t9 + 56U);
    t15 = *((char **)t13);
    t13 = (t15 + 0);
    memcpy(t13, t8, 7U);
    goto LAB5;

LAB13:    t8 = (t1 + 12080);
    t13 = (t9 + 56U);
    t15 = *((char **)t13);
    t13 = (t15 + 0);
    memcpy(t13, t8, 7U);
    goto LAB5;

LAB15:    t8 = (t1 + 12087);
    t13 = (t9 + 56U);
    t15 = *((char **)t13);
    t13 = (t15 + 0);
    memcpy(t13, t8, 7U);
    goto LAB5;

LAB17:    t8 = (t1 + 12094);
    t13 = (t9 + 56U);
    t15 = *((char **)t13);
    t13 = (t15 + 0);
    memcpy(t13, t8, 7U);
    goto LAB5;

LAB19:    t8 = (t1 + 12101);
    t13 = (t9 + 56U);
    t15 = *((char **)t13);
    t13 = (t15 + 0);
    memcpy(t13, t8, 7U);
    goto LAB5;

LAB21:    t8 = (t1 + 12108);
    t13 = (t9 + 56U);
    t15 = *((char **)t13);
    t13 = (t15 + 0);
    memcpy(t13, t8, 7U);
    goto LAB5;

LAB23:    t8 = (t1 + 12115);
    t13 = (t9 + 56U);
    t15 = *((char **)t13);
    t13 = (t15 + 0);
    memcpy(t13, t8, 7U);
    goto LAB5;

LAB25:;
}

static void work_a_3503384701_3212880686_p_0(char *t0)
{
    char t3[16];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;

LAB0:    xsi_set_current_line(63, ng2);

LAB3:    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t4 = ((IEEE_P_2592010699) + 4024);
    t5 = (t0 + 11732U);
    t1 = xsi_base_array_concat(t1, t3, t4, (char)99, (unsigned char)2, (char)97, t2, t5, (char)101);
    t6 = (t0 + 6552);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 5U);
    xsi_driver_first_trans_fast(t6);

LAB2:    t11 = (t0 + 6392);
    *((int *)t11) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3503384701_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(67, ng2);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t1 = (t0 + 11764U);
    t3 = ieee_p_1242562249_sub_2479254793_1035706684(IEEE_P_1242562249, t2, t1, 15);
    if (t3 != 0)
        goto LAB2;

LAB4:    xsi_set_current_line(70, ng2);
    t1 = (t0 + 6616);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);

LAB3:    t1 = (t0 + 6408);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(68, ng2);
    t4 = (t0 + 6616);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t4);
    goto LAB3;

}

static void work_a_3503384701_3212880686_p_2(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(76, ng2);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB2;

LAB4:    xsi_set_current_line(79, ng2);
    t1 = (t0 + 6680);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);

LAB3:    t1 = (t0 + 6424);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(77, ng2);
    t1 = (t0 + 6680);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

}

static void work_a_3503384701_3212880686_p_3(char *t0)
{
    char t18[16];
    char t21[16];
    unsigned char t1;
    char *t2;
    char *t3;
    unsigned char t4;
    unsigned char t5;
    char *t6;
    unsigned char t7;
    unsigned char t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned char t15;
    unsigned char t16;
    char *t17;
    unsigned int t19;
    unsigned int t20;
    unsigned int t22;
    int t23;
    int t24;
    char *t25;
    char *t26;
    int t27;
    char *t28;
    char *t29;
    int t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    static char *nl0[] = {&&LAB9, &&LAB10};

LAB0:    xsi_set_current_line(89, ng2);
    t2 = (t0 + 1032U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)3);
    if (t5 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    xsi_set_current_line(96, ng2);
    t2 = (t0 + 2472U);
    t3 = *((char **)t2);
    t1 = *((unsigned char *)t3);
    t2 = (char *)((nl0) + t1);
    goto **((char **)t2);

LAB2:    xsi_set_current_line(90, ng2);
    t2 = xsi_get_transient_memory(21U);
    memset(t2, 0, 21U);
    t9 = t2;
    memset(t9, (unsigned char)2, 21U);
    t10 = (t0 + 6744);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t2, 21U);
    xsi_driver_first_trans_fast(t10);
    xsi_set_current_line(90, ng2);
    t2 = xsi_get_transient_memory(21U);
    memset(t2, 0, 21U);
    t3 = t2;
    memset(t3, (unsigned char)2, 21U);
    t6 = (t0 + 6808);
    t9 = (t6 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t2, 21U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(90, ng2);
    t2 = xsi_get_transient_memory(3U);
    memset(t2, 0, 3U);
    t3 = t2;
    memset(t3, (unsigned char)2, 3U);
    t6 = (t0 + 6872);
    t9 = (t6 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t2, 3U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(91, ng2);
    t2 = (t0 + 6936);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t9 = (t6 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(92, ng2);
    t2 = (t0 + 7000);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t9 = (t6 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(93, ng2);
    t2 = (t0 + 7064);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t9 = (t6 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)0;
    xsi_driver_first_trans_fast(t2);
    goto LAB3;

LAB5:    t2 = (t0 + 1832U);
    t6 = *((char **)t2);
    t7 = *((unsigned char *)t6);
    t8 = (t7 == (unsigned char)3);
    t1 = t8;
    goto LAB7;

LAB8:    t2 = (t0 + 6440);
    *((int *)t2) = 1;

LAB1:    return;
LAB9:    xsi_set_current_line(99, ng2);
    t6 = (t0 + 1512U);
    t9 = *((char **)t6);
    t6 = (t0 + 11764U);
    t5 = ieee_p_1242562249_sub_2479218856_1035706684(IEEE_P_1242562249, t9, t6, 10);
    if (t5 == 1)
        goto LAB14;

LAB15:    t4 = (unsigned char)0;

LAB16:    if (t4 != 0)
        goto LAB11;

LAB13:
LAB12:    xsi_set_current_line(111, ng2);
    t2 = (t0 + 1512U);
    t3 = *((char **)t2);
    t2 = (t0 + 11764U);
    t5 = ieee_p_1242562249_sub_3840967975_1035706684(IEEE_P_1242562249, t3, t2, 10);
    if (t5 == 1)
        goto LAB26;

LAB27:    t4 = (unsigned char)0;

LAB28:    if (t4 == 1)
        goto LAB23;

LAB24:    t1 = (unsigned char)0;

LAB25:    if (t1 != 0)
        goto LAB20;

LAB22:
LAB21:    xsi_set_current_line(145, ng2);
    t2 = (t0 + 1512U);
    t3 = *((char **)t2);
    t2 = (t0 + 11764U);
    t4 = ieee_p_1242562249_sub_2479254793_1035706684(IEEE_P_1242562249, t3, t2, 14);
    if (t4 == 1)
        goto LAB66;

LAB67:    t1 = (unsigned char)0;

LAB68:    if (t1 != 0)
        goto LAB63;

LAB65:
LAB64:    goto LAB8;

LAB10:    xsi_set_current_line(175, ng2);
    t2 = (t0 + 1512U);
    t3 = *((char **)t2);
    t2 = (t0 + 11764U);
    t5 = ieee_p_1242562249_sub_3840967975_1035706684(IEEE_P_1242562249, t3, t2, 10);
    if (t5 == 1)
        goto LAB98;

LAB99:    t4 = (unsigned char)0;

LAB100:    if (t4 == 1)
        goto LAB95;

LAB96:    t1 = (unsigned char)0;

LAB97:    if (t1 != 0)
        goto LAB92;

LAB94:
LAB93:    xsi_set_current_line(184, ng2);
    t2 = (t0 + 1512U);
    t3 = *((char **)t2);
    t2 = (t0 + 11764U);
    t4 = ieee_p_1242562249_sub_2479218856_1035706684(IEEE_P_1242562249, t3, t2, 10);
    if (t4 == 1)
        goto LAB115;

LAB116:    t1 = (unsigned char)0;

LAB117:    if (t1 != 0)
        goto LAB112;

LAB114:
LAB113:    xsi_set_current_line(191, ng2);
    t2 = (t0 + 1512U);
    t3 = *((char **)t2);
    t2 = (t0 + 11764U);
    t4 = ieee_p_1242562249_sub_2479254793_1035706684(IEEE_P_1242562249, t3, t2, 14);
    if (t4 == 1)
        goto LAB121;

LAB122:    t1 = (unsigned char)0;

LAB123:    if (t1 != 0)
        goto LAB118;

LAB120:
LAB119:    goto LAB8;

LAB11:    xsi_set_current_line(100, ng2);
    t10 = (t0 + 2632U);
    t12 = *((char **)t10);
    t15 = *((unsigned char *)t12);
    t16 = (t15 == (unsigned char)3);
    if (t16 != 0)
        goto LAB17;

LAB19:    xsi_set_current_line(107, ng2);
    t2 = (t0 + 1992U);
    t3 = *((char **)t2);
    t2 = (t0 + 11780U);
    t6 = ieee_p_1242562249_sub_2931867381_1035706684(IEEE_P_1242562249, t21, t3, t2, 10);
    t9 = (t0 + 1512U);
    t10 = *((char **)t9);
    t9 = (t0 + 11764U);
    t11 = ieee_p_1242562249_sub_3273497107_1035706684(IEEE_P_1242562249, t18, t6, t21, t10, t9);
    t12 = (t0 + 3488U);
    t13 = *((char **)t12);
    t12 = (t13 + 0);
    t14 = (t18 + 12U);
    t19 = *((unsigned int *)t14);
    t20 = (1U * t19);
    memcpy(t12, t11, t20);
    xsi_set_current_line(108, ng2);
    t2 = (t0 + 3488U);
    t3 = *((char **)t2);
    t19 = (41 - 20);
    t20 = (t19 * 1U);
    t22 = (0 + t20);
    t2 = (t3 + t22);
    t6 = (t0 + 6744);
    t9 = (t6 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t2, 21U);
    xsi_driver_first_trans_fast(t6);

LAB18:    goto LAB12;

LAB14:    t10 = (t0 + 1672U);
    t11 = *((char **)t10);
    t7 = *((unsigned char *)t11);
    t8 = (t7 == (unsigned char)3);
    t4 = t8;
    goto LAB16;

LAB17:    xsi_set_current_line(101, ng2);
    t10 = xsi_get_transient_memory(21U);
    memset(t10, 0, 21U);
    t13 = t10;
    memset(t13, (unsigned char)2, 21U);
    t14 = (t0 + 3608U);
    t17 = *((char **)t14);
    t14 = (t17 + 0);
    memcpy(t14, t10, 21U);
    xsi_set_current_line(102, ng2);
    t2 = (t0 + 3608U);
    t3 = *((char **)t2);
    t2 = (t0 + 11844U);
    t6 = (t0 + 1512U);
    t9 = *((char **)t6);
    t6 = (t0 + 11764U);
    t10 = ieee_p_1242562249_sub_3273497107_1035706684(IEEE_P_1242562249, t18, t3, t2, t9, t6);
    t11 = (t0 + 3608U);
    t12 = *((char **)t11);
    t11 = (t12 + 0);
    t13 = (t18 + 12U);
    t19 = *((unsigned int *)t13);
    t20 = (1U * t19);
    memcpy(t11, t10, t20);
    xsi_set_current_line(103, ng2);
    t2 = (t0 + 3608U);
    t3 = *((char **)t2);
    t2 = (t0 + 6744);
    t6 = (t2 + 56U);
    t9 = *((char **)t6);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t3, 21U);
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(104, ng2);
    t2 = (t0 + 6936);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t9 = (t6 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(105, ng2);
    t2 = (t0 + 7000);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t9 = (t6 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    goto LAB18;

LAB20:    xsi_set_current_line(112, ng2);
    t10 = (t0 + 6936);
    t12 = (t10 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t17 = *((char **)t14);
    *((unsigned char *)t17) = (unsigned char)2;
    xsi_driver_first_trans_fast(t10);
    xsi_set_current_line(113, ng2);
    t2 = (t0 + 2312U);
    t3 = *((char **)t2);
    t2 = (t0 + 12129);
    t1 = 1;
    if (3U == 3U)
        goto LAB32;

LAB33:    t1 = 0;

LAB34:    if ((!(t1)) != 0)
        goto LAB29;

LAB31:
LAB30:    xsi_set_current_line(136, ng2);
    t2 = (t0 + 1512U);
    t3 = *((char **)t2);
    t2 = (t0 + 12144);
    t23 = xsi_mem_cmp(t2, t3, 5U);
    if (t23 == 1)
        goto LAB53;

LAB58:    t9 = (t0 + 12149);
    t24 = xsi_mem_cmp(t9, t3, 5U);
    if (t24 == 1)
        goto LAB54;

LAB59:    t11 = (t0 + 12154);
    t27 = xsi_mem_cmp(t11, t3, 5U);
    if (t27 == 1)
        goto LAB55;

LAB60:    t13 = (t0 + 12159);
    t30 = xsi_mem_cmp(t13, t3, 5U);
    if (t30 == 1)
        goto LAB56;

LAB61:
LAB57:    xsi_set_current_line(141, ng2);

LAB52:    xsi_set_current_line(143, ng2);
    t2 = (t0 + 7064);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t9 = (t6 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)1;
    xsi_driver_first_trans_fast(t2);
    goto LAB21;

LAB23:    t10 = (t0 + 1672U);
    t11 = *((char **)t10);
    t8 = *((unsigned char *)t11);
    t15 = (t8 == (unsigned char)3);
    t1 = t15;
    goto LAB25;

LAB26:    t6 = (t0 + 1512U);
    t9 = *((char **)t6);
    t6 = (t0 + 11764U);
    t7 = ieee_p_1242562249_sub_3838596133_1035706684(IEEE_P_1242562249, t9, t6, 13);
    t4 = t7;
    goto LAB28;

LAB29:    xsi_set_current_line(114, ng2);
    t11 = (t0 + 2312U);
    t12 = *((char **)t11);
    t11 = (t0 + 12132);
    t23 = xsi_mem_cmp(t11, t12, 3U);
    if (t23 == 1)
        goto LAB39;

LAB44:    t14 = (t0 + 12135);
    t24 = xsi_mem_cmp(t14, t12, 3U);
    if (t24 == 1)
        goto LAB40;

LAB45:    t25 = (t0 + 12138);
    t27 = xsi_mem_cmp(t25, t12, 3U);
    if (t27 == 1)
        goto LAB41;

LAB46:    t28 = (t0 + 12141);
    t30 = xsi_mem_cmp(t28, t12, 3U);
    if (t30 == 1)
        goto LAB42;

LAB47:
LAB43:    xsi_set_current_line(132, ng2);

LAB38:    xsi_set_current_line(134, ng2);
    t2 = xsi_get_transient_memory(21U);
    memset(t2, 0, 21U);
    t3 = t2;
    memset(t3, (unsigned char)2, 21U);
    t6 = (t0 + 6808);
    t9 = (t6 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t2, 21U);
    xsi_driver_first_trans_fast(t6);
    goto LAB30;

LAB32:    t19 = 0;

LAB35:    if (t19 < 3U)
        goto LAB36;
    else
        goto LAB34;

LAB36:    t9 = (t3 + t19);
    t10 = (t2 + t19);
    if (*((unsigned char *)t9) != *((unsigned char *)t10))
        goto LAB33;

LAB37:    t19 = (t19 + 1);
    goto LAB35;

LAB39:    xsi_set_current_line(116, ng2);
    t31 = (t0 + 2152U);
    t32 = *((char **)t31);
    t31 = (t0 + 11780U);
    t33 = (t0 + 1992U);
    t34 = *((char **)t33);
    t33 = (t0 + 11780U);
    t35 = ieee_p_1242562249_sub_3273497107_1035706684(IEEE_P_1242562249, t18, t32, t31, t34, t33);
    t36 = (t0 + 3608U);
    t37 = *((char **)t36);
    t36 = (t37 + 0);
    t38 = (t18 + 12U);
    t20 = *((unsigned int *)t38);
    t22 = (1U * t20);
    memcpy(t36, t35, t22);
    xsi_set_current_line(117, ng2);
    t2 = (t0 + 3608U);
    t3 = *((char **)t2);
    t2 = (t0 + 6744);
    t6 = (t2 + 56U);
    t9 = *((char **)t6);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t3, 21U);
    xsi_driver_first_trans_fast(t2);
    goto LAB38;

LAB40:    xsi_set_current_line(119, ng2);
    t2 = (t0 + 2152U);
    t3 = *((char **)t2);
    t2 = (t0 + 11780U);
    t6 = (t0 + 1992U);
    t9 = *((char **)t6);
    t6 = (t0 + 11780U);
    t10 = ieee_p_1242562249_sub_3273568981_1035706684(IEEE_P_1242562249, t18, t3, t2, t9, t6);
    t11 = (t0 + 3608U);
    t12 = *((char **)t11);
    t11 = (t12 + 0);
    t13 = (t18 + 12U);
    t19 = *((unsigned int *)t13);
    t20 = (1U * t19);
    memcpy(t11, t10, t20);
    xsi_set_current_line(120, ng2);
    t2 = (t0 + 3608U);
    t3 = *((char **)t2);
    t2 = (t0 + 6744);
    t6 = (t2 + 56U);
    t9 = *((char **)t6);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t3, 21U);
    xsi_driver_first_trans_fast(t2);
    goto LAB38;

LAB41:    xsi_set_current_line(122, ng2);
    t2 = (t0 + 2152U);
    t3 = *((char **)t2);
    t2 = (t0 + 11780U);
    t6 = (t0 + 1992U);
    t9 = *((char **)t6);
    t6 = (t0 + 11780U);
    t10 = ieee_p_1242562249_sub_2807594338_1035706684(IEEE_P_1242562249, t18, t3, t2, t9, t6);
    t11 = (t0 + 3488U);
    t12 = *((char **)t11);
    t11 = (t12 + 0);
    t13 = (t18 + 12U);
    t19 = *((unsigned int *)t13);
    t20 = (1U * t19);
    memcpy(t11, t10, t20);
    xsi_set_current_line(123, ng2);
    t2 = (t0 + 3488U);
    t3 = *((char **)t2);
    t19 = (41 - 20);
    t20 = (t19 * 1U);
    t22 = (0 + t20);
    t2 = (t3 + t22);
    t6 = (t0 + 6744);
    t9 = (t6 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t2, 21U);
    xsi_driver_first_trans_fast(t6);
    goto LAB38;

LAB42:    xsi_set_current_line(125, ng2);
    t2 = (t0 + 1992U);
    t3 = *((char **)t2);
    t2 = (t0 + 11780U);
    t1 = ieee_p_1242562249_sub_3823179160_1035706684(IEEE_P_1242562249, t3, t2, 0);
    if (t1 != 0)
        goto LAB49;

LAB51:    xsi_set_current_line(129, ng2);
    t2 = (t0 + 7000);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t9 = (t6 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(130, ng2);
    t2 = (t0 + 6936);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t9 = (t6 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);

LAB50:    goto LAB38;

LAB48:;
LAB49:    xsi_set_current_line(126, ng2);
    t6 = (t0 + 2152U);
    t9 = *((char **)t6);
    t6 = (t0 + 11780U);
    t10 = (t0 + 1992U);
    t11 = *((char **)t10);
    t10 = (t0 + 11780U);
    t12 = ieee_p_1242562249_sub_2849293644_1035706684(IEEE_P_1242562249, t18, t9, t6, t11, t10);
    t13 = (t0 + 3608U);
    t14 = *((char **)t13);
    t13 = (t14 + 0);
    t17 = (t18 + 12U);
    t19 = *((unsigned int *)t17);
    t20 = (1U * t19);
    memcpy(t13, t12, t20);
    xsi_set_current_line(127, ng2);
    t2 = (t0 + 3608U);
    t3 = *((char **)t2);
    t2 = (t0 + 6744);
    t6 = (t2 + 56U);
    t9 = *((char **)t6);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t3, 21U);
    xsi_driver_first_trans_fast(t2);
    goto LAB50;

LAB53:    xsi_set_current_line(137, ng2);
    t17 = (t0 + 12164);
    t26 = (t0 + 6872);
    t28 = (t26 + 56U);
    t29 = *((char **)t28);
    t31 = (t29 + 56U);
    t32 = *((char **)t31);
    memcpy(t32, t17, 3U);
    xsi_driver_first_trans_fast(t26);
    goto LAB52;

LAB54:    xsi_set_current_line(138, ng2);
    t2 = (t0 + 12167);
    t6 = (t0 + 6872);
    t9 = (t6 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t2, 3U);
    xsi_driver_first_trans_fast(t6);
    goto LAB52;

LAB55:    xsi_set_current_line(139, ng2);
    t2 = (t0 + 12170);
    t6 = (t0 + 6872);
    t9 = (t6 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t2, 3U);
    xsi_driver_first_trans_fast(t6);
    goto LAB52;

LAB56:    xsi_set_current_line(140, ng2);
    t2 = (t0 + 12173);
    t6 = (t0 + 6872);
    t9 = (t6 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t2, 3U);
    xsi_driver_first_trans_fast(t6);
    goto LAB52;

LAB62:;
LAB63:    xsi_set_current_line(146, ng2);
    t6 = (t0 + 2312U);
    t10 = *((char **)t6);
    t6 = (t0 + 12176);
    t8 = 1;
    if (3U == 3U)
        goto LAB72;

LAB73:    t8 = 0;

LAB74:    if ((!(t8)) != 0)
        goto LAB69;

LAB71:
LAB70:    xsi_set_current_line(169, ng2);
    t2 = xsi_get_transient_memory(3U);
    memset(t2, 0, 3U);
    t3 = t2;
    memset(t3, (unsigned char)2, 3U);
    t6 = (t0 + 6872);
    t9 = (t6 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t2, 3U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(170, ng2);
    t2 = (t0 + 6936);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t9 = (t6 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    goto LAB64;

LAB66:    t6 = (t0 + 1672U);
    t9 = *((char **)t6);
    t5 = *((unsigned char *)t9);
    t7 = (t5 == (unsigned char)3);
    t1 = t7;
    goto LAB68;

LAB69:    xsi_set_current_line(147, ng2);
    t14 = (t0 + 2312U);
    t17 = *((char **)t14);
    t14 = (t0 + 12179);
    t23 = xsi_mem_cmp(t14, t17, 3U);
    if (t23 == 1)
        goto LAB79;

LAB84:    t26 = (t0 + 12182);
    t24 = xsi_mem_cmp(t26, t17, 3U);
    if (t24 == 1)
        goto LAB80;

LAB85:    t29 = (t0 + 12185);
    t27 = xsi_mem_cmp(t29, t17, 3U);
    if (t27 == 1)
        goto LAB81;

LAB86:    t32 = (t0 + 12188);
    t30 = xsi_mem_cmp(t32, t17, 3U);
    if (t30 == 1)
        goto LAB82;

LAB87:
LAB83:    xsi_set_current_line(165, ng2);

LAB78:    xsi_set_current_line(167, ng2);
    t2 = xsi_get_transient_memory(21U);
    memset(t2, 0, 21U);
    t3 = t2;
    memset(t3, (unsigned char)2, 21U);
    t6 = (t0 + 6808);
    t9 = (t6 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t2, 21U);
    xsi_driver_first_trans_fast(t6);
    goto LAB70;

LAB72:    t19 = 0;

LAB75:    if (t19 < 3U)
        goto LAB76;
    else
        goto LAB74;

LAB76:    t12 = (t10 + t19);
    t13 = (t6 + t19);
    if (*((unsigned char *)t12) != *((unsigned char *)t13))
        goto LAB73;

LAB77:    t19 = (t19 + 1);
    goto LAB75;

LAB79:    xsi_set_current_line(149, ng2);
    t34 = (t0 + 2152U);
    t35 = *((char **)t34);
    t34 = (t0 + 11780U);
    t36 = (t0 + 1992U);
    t37 = *((char **)t36);
    t36 = (t0 + 11780U);
    t38 = ieee_p_1242562249_sub_3273497107_1035706684(IEEE_P_1242562249, t18, t35, t34, t37, t36);
    t39 = (t0 + 3608U);
    t40 = *((char **)t39);
    t39 = (t40 + 0);
    t41 = (t18 + 12U);
    t20 = *((unsigned int *)t41);
    t22 = (1U * t20);
    memcpy(t39, t38, t22);
    xsi_set_current_line(150, ng2);
    t2 = (t0 + 3608U);
    t3 = *((char **)t2);
    t2 = (t0 + 6744);
    t6 = (t2 + 56U);
    t9 = *((char **)t6);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t3, 21U);
    xsi_driver_first_trans_fast(t2);
    goto LAB78;

LAB80:    xsi_set_current_line(152, ng2);
    t2 = (t0 + 2152U);
    t3 = *((char **)t2);
    t2 = (t0 + 11780U);
    t6 = (t0 + 1992U);
    t9 = *((char **)t6);
    t6 = (t0 + 11780U);
    t10 = ieee_p_1242562249_sub_3273568981_1035706684(IEEE_P_1242562249, t18, t3, t2, t9, t6);
    t11 = (t0 + 3608U);
    t12 = *((char **)t11);
    t11 = (t12 + 0);
    t13 = (t18 + 12U);
    t19 = *((unsigned int *)t13);
    t20 = (1U * t19);
    memcpy(t11, t10, t20);
    xsi_set_current_line(153, ng2);
    t2 = (t0 + 3608U);
    t3 = *((char **)t2);
    t2 = (t0 + 6744);
    t6 = (t2 + 56U);
    t9 = *((char **)t6);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t3, 21U);
    xsi_driver_first_trans_fast(t2);
    goto LAB78;

LAB81:    xsi_set_current_line(155, ng2);
    t2 = (t0 + 2152U);
    t3 = *((char **)t2);
    t2 = (t0 + 11780U);
    t6 = (t0 + 1992U);
    t9 = *((char **)t6);
    t6 = (t0 + 11780U);
    t10 = ieee_p_1242562249_sub_2807594338_1035706684(IEEE_P_1242562249, t18, t3, t2, t9, t6);
    t11 = (t0 + 3488U);
    t12 = *((char **)t11);
    t11 = (t12 + 0);
    t13 = (t18 + 12U);
    t19 = *((unsigned int *)t13);
    t20 = (1U * t19);
    memcpy(t11, t10, t20);
    xsi_set_current_line(156, ng2);
    t2 = (t0 + 3488U);
    t3 = *((char **)t2);
    t19 = (41 - 20);
    t20 = (t19 * 1U);
    t22 = (0 + t20);
    t2 = (t3 + t22);
    t6 = (t0 + 6744);
    t9 = (t6 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t2, 21U);
    xsi_driver_first_trans_fast(t6);
    goto LAB78;

LAB82:    xsi_set_current_line(158, ng2);
    t2 = (t0 + 1992U);
    t3 = *((char **)t2);
    t2 = (t0 + 11780U);
    t1 = ieee_p_1242562249_sub_3823179160_1035706684(IEEE_P_1242562249, t3, t2, 0);
    if (t1 != 0)
        goto LAB89;

LAB91:    xsi_set_current_line(162, ng2);
    t2 = (t0 + 7000);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t9 = (t6 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(163, ng2);
    t2 = (t0 + 6936);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t9 = (t6 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);

LAB90:    goto LAB78;

LAB88:;
LAB89:    xsi_set_current_line(159, ng2);
    t6 = (t0 + 2152U);
    t9 = *((char **)t6);
    t6 = (t0 + 11780U);
    t10 = (t0 + 1992U);
    t11 = *((char **)t10);
    t10 = (t0 + 11780U);
    t12 = ieee_p_1242562249_sub_2849293644_1035706684(IEEE_P_1242562249, t18, t9, t6, t11, t10);
    t13 = (t0 + 3608U);
    t14 = *((char **)t13);
    t13 = (t14 + 0);
    t17 = (t18 + 12U);
    t19 = *((unsigned int *)t17);
    t20 = (1U * t19);
    memcpy(t13, t12, t20);
    xsi_set_current_line(160, ng2);
    t2 = (t0 + 3608U);
    t3 = *((char **)t2);
    t2 = (t0 + 6744);
    t6 = (t2 + 56U);
    t9 = *((char **)t6);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t3, 21U);
    xsi_driver_first_trans_fast(t2);
    goto LAB90;

LAB92:    xsi_set_current_line(176, ng2);
    t10 = (t0 + 1512U);
    t12 = *((char **)t10);
    t10 = (t0 + 12191);
    t23 = xsi_mem_cmp(t10, t12, 5U);
    if (t23 == 1)
        goto LAB102;

LAB107:    t14 = (t0 + 12196);
    t24 = xsi_mem_cmp(t14, t12, 5U);
    if (t24 == 1)
        goto LAB103;

LAB108:    t25 = (t0 + 12201);
    t27 = xsi_mem_cmp(t25, t12, 5U);
    if (t27 == 1)
        goto LAB104;

LAB109:    t28 = (t0 + 12206);
    t30 = xsi_mem_cmp(t28, t12, 5U);
    if (t30 == 1)
        goto LAB105;

LAB110:
LAB106:    xsi_set_current_line(181, ng2);

LAB101:    goto LAB93;

LAB95:    t10 = (t0 + 1672U);
    t11 = *((char **)t10);
    t8 = *((unsigned char *)t11);
    t15 = (t8 == (unsigned char)3);
    t1 = t15;
    goto LAB97;

LAB98:    t6 = (t0 + 1512U);
    t9 = *((char **)t6);
    t6 = (t0 + 11764U);
    t7 = ieee_p_1242562249_sub_3838596133_1035706684(IEEE_P_1242562249, t9, t6, 13);
    t4 = t7;
    goto LAB100;

LAB102:    xsi_set_current_line(177, ng2);
    t31 = (t0 + 12211);
    t33 = (t0 + 6872);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    t36 = (t35 + 56U);
    t37 = *((char **)t36);
    memcpy(t37, t31, 3U);
    xsi_driver_first_trans_fast(t33);
    goto LAB101;

LAB103:    xsi_set_current_line(178, ng2);
    t2 = (t0 + 12214);
    t6 = (t0 + 6872);
    t9 = (t6 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t2, 3U);
    xsi_driver_first_trans_fast(t6);
    goto LAB101;

LAB104:    xsi_set_current_line(179, ng2);
    t2 = (t0 + 12217);
    t6 = (t0 + 6872);
    t9 = (t6 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t2, 3U);
    xsi_driver_first_trans_fast(t6);
    goto LAB101;

LAB105:    xsi_set_current_line(180, ng2);
    t2 = (t0 + 12220);
    t6 = (t0 + 6872);
    t9 = (t6 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t2, 3U);
    xsi_driver_first_trans_fast(t6);
    goto LAB101;

LAB111:;
LAB112:    xsi_set_current_line(185, ng2);
    t6 = (t0 + 1992U);
    t10 = *((char **)t6);
    t6 = (t0 + 6808);
    t11 = (t6 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t10, 21U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(186, ng2);
    t2 = xsi_get_transient_memory(21U);
    memset(t2, 0, 21U);
    t3 = t2;
    memset(t3, (unsigned char)2, 21U);
    t6 = (t0 + 3608U);
    t9 = *((char **)t6);
    t6 = (t9 + 0);
    memcpy(t6, t2, 21U);
    xsi_set_current_line(187, ng2);
    t2 = (t0 + 3608U);
    t3 = *((char **)t2);
    t2 = (t0 + 11844U);
    t6 = (t0 + 1512U);
    t9 = *((char **)t6);
    t6 = (t0 + 11764U);
    t10 = ieee_p_1242562249_sub_3273497107_1035706684(IEEE_P_1242562249, t18, t3, t2, t9, t6);
    t11 = (t0 + 3608U);
    t12 = *((char **)t11);
    t11 = (t12 + 0);
    t13 = (t18 + 12U);
    t19 = *((unsigned int *)t13);
    t20 = (1U * t19);
    memcpy(t11, t10, t20);
    xsi_set_current_line(188, ng2);
    t2 = (t0 + 3608U);
    t3 = *((char **)t2);
    t2 = (t0 + 6744);
    t6 = (t2 + 56U);
    t9 = *((char **)t6);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t3, 21U);
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(189, ng2);
    t2 = (t0 + 7064);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t9 = (t6 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)0;
    xsi_driver_first_trans_fast(t2);
    goto LAB113;

LAB115:    t6 = (t0 + 1672U);
    t9 = *((char **)t6);
    t5 = *((unsigned char *)t9);
    t7 = (t5 == (unsigned char)3);
    t1 = t7;
    goto LAB117;

LAB118:    xsi_set_current_line(192, ng2);
    t6 = (t0 + 6936);
    t10 = (t6 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = (unsigned char)3;
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(193, ng2);
    t2 = xsi_get_transient_memory(3U);
    memset(t2, 0, 3U);
    t3 = t2;
    memset(t3, (unsigned char)2, 3U);
    t6 = (t0 + 6872);
    t9 = (t6 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t2, 3U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(194, ng2);
    t2 = (t0 + 7064);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t9 = (t6 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)0;
    xsi_driver_first_trans_fast(t2);
    goto LAB119;

LAB121:    t6 = (t0 + 1672U);
    t9 = *((char **)t6);
    t5 = *((unsigned char *)t9);
    t7 = (t5 == (unsigned char)3);
    t1 = t7;
    goto LAB123;

}

static void work_a_3503384701_3212880686_p_4(char *t0)
{
    char t21[16];
    char t22[16];
    char t23[16];
    char t28[16];
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned char t8;
    unsigned int t9;
    char *t10;
    char *t11;
    int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    int t24;
    int t25;
    int t26;
    int t27;
    int t29;
    int t30;
    int t31;
    int t32;
    int t33;
    unsigned int t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;

LAB0:    xsi_set_current_line(204, ng2);
    t1 = (t0 + 2792U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    xsi_set_current_line(207, ng2);
    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t1 = (t0 + 11780U);
    t5 = ieee_p_1242562249_sub_3869231325_1035706684(IEEE_P_1242562249, t23, t2, t1);
    t6 = ieee_p_1242562249_sub_136421016_1035706684(IEEE_P_1242562249, t22, t5, t23, 10);
    t7 = work_a_3503384701_3212880686_sub_3430496816_3057020925(t0, t21, t6, t22);
    t10 = (t21 + 12U);
    t9 = *((unsigned int *)t10);
    t9 = (t9 * 1U);
    t3 = (7U != t9);
    if (t3 == 1)
        goto LAB7;

LAB8:    t11 = (t0 + 7128);
    t15 = (t11 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memcpy(t18, t7, 7U);
    xsi_driver_first_trans_delta(t11, 35U, 7U, 0LL);
    xsi_set_current_line(208, ng2);
    t1 = (t0 + 3728U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((int *)t1) = 1;
    xsi_set_current_line(209, ng2);
    t1 = (t0 + 3848U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((int *)t1) = 10;
    xsi_set_current_line(210, ng2);
    t1 = (t0 + 12237);
    *((int *)t1) = 2;
    t2 = (t0 + 12241);
    *((int *)t2) = 5;
    t12 = 2;
    t24 = 5;

LAB9:    if (t12 <= t24)
        goto LAB10;

LAB12:    xsi_set_current_line(219, ng2);
    t12 = (5 + 1);
    t1 = (t0 + 12245);
    *((int *)t1) = 2;
    t2 = (t0 + 12249);
    *((int *)t2) = t12;
    t24 = 2;
    t25 = t12;

LAB18:    if (t24 <= t25)
        goto LAB19;

LAB21:
LAB3:    t1 = (t0 + 6456);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(205, ng2);
    t1 = xsi_get_transient_memory(42U);
    memset(t1, 0, 42U);
    t5 = t1;
    t6 = (t0 + 12223);
    t8 = (7U != 0);
    if (t8 == 1)
        goto LAB5;

LAB6:    t10 = (t0 + 12230);
    t12 = (1 - 6);
    t13 = (t12 * -1);
    t14 = (7U * t13);
    t15 = (t5 + t14);
    memcpy(t15, t10, 7U);
    t16 = (t0 + 7128);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    memcpy(t20, t1, 42U);
    xsi_driver_first_trans_fast(t16);
    goto LAB3;

LAB5:    t9 = (42U / 7U);
    xsi_mem_set_data(t5, t6, 7U, t9);
    goto LAB6;

LAB7:    xsi_size_not_matching(7U, t9, 0);
    goto LAB8;

LAB10:    xsi_set_current_line(211, ng2);
    t5 = (t0 + 1992U);
    t6 = *((char **)t5);
    t5 = (t0 + 11780U);
    t7 = ieee_p_1242562249_sub_3869231325_1035706684(IEEE_P_1242562249, t21, t6, t5);
    t10 = (t0 + 3848U);
    t11 = *((char **)t10);
    t25 = *((int *)t11);
    t3 = ieee_p_1242562249_sub_3840967975_1035706684(IEEE_P_1242562249, t7, t21, t25);
    if (t3 != 0)
        goto LAB13;

LAB15:    xsi_set_current_line(214, ng2);
    goto LAB12;

LAB11:    t1 = (t0 + 12237);
    t12 = *((int *)t1);
    t2 = (t0 + 12241);
    t24 = *((int *)t2);
    if (t12 == t24)
        goto LAB12;

LAB17:    t25 = (t12 + 1);
    t12 = t25;
    t5 = (t0 + 12237);
    *((int *)t5) = t12;
    goto LAB9;

LAB13:    xsi_set_current_line(212, ng2);
    t10 = (t0 + 3728U);
    t15 = *((char **)t10);
    t26 = *((int *)t15);
    t27 = (t26 + 1);
    t10 = (t0 + 3728U);
    t16 = *((char **)t10);
    t10 = (t16 + 0);
    *((int *)t10) = t27;

LAB14:    xsi_set_current_line(216, ng2);
    t1 = (t0 + 3848U);
    t2 = *((char **)t1);
    t25 = *((int *)t2);
    t26 = (t25 * 10);
    t1 = (t0 + 3848U);
    t5 = *((char **)t1);
    t1 = (t5 + 0);
    *((int *)t1) = t26;
    goto LAB11;

LAB16:    goto LAB14;

LAB19:    xsi_set_current_line(220, ng2);
    t5 = (t0 + 12245);
    t6 = (t0 + 3728U);
    t7 = *((char **)t6);
    t26 = *((int *)t7);
    t27 = *((int *)t5);
    t3 = (t27 <= t26);
    if (t3 != 0)
        goto LAB22;

LAB24:    t1 = (t0 + 12245);
    t2 = (t0 + 3728U);
    t5 = *((char **)t2);
    t12 = *((int *)t5);
    t26 = (t12 + 1);
    t27 = *((int *)t1);
    t3 = (t27 == t26);
    if (t3 != 0)
        goto LAB27;

LAB28:    t1 = (t0 + 12245);
    t2 = (t0 + 3728U);
    t5 = *((char **)t2);
    t12 = *((int *)t5);
    t26 = (t12 + 1);
    t27 = *((int *)t1);
    t3 = (t27 > t26);
    if (t3 != 0)
        goto LAB36;

LAB37:
LAB23:
LAB20:    t1 = (t0 + 12245);
    t24 = *((int *)t1);
    t2 = (t0 + 12249);
    t25 = *((int *)t2);
    if (t24 == t25)
        goto LAB21;

LAB40:    t12 = (t24 + 1);
    t24 = t12;
    t5 = (t0 + 12245);
    *((int *)t5) = t24;
    goto LAB18;

LAB22:    xsi_set_current_line(221, ng2);
    t6 = (t0 + 1992U);
    t10 = *((char **)t6);
    t6 = (t0 + 11780U);
    t11 = ieee_p_1242562249_sub_3869231325_1035706684(IEEE_P_1242562249, t28, t10, t6);
    t15 = (t0 + 12245);
    t29 = *((int *)t15);
    t30 = (t29 - 1);
    t31 = xsi_vhdl_pow(10, t30);
    t16 = ieee_p_1242562249_sub_3461525680_1035706684(IEEE_P_1242562249, t23, t11, t28, t31);
    t17 = ieee_p_1242562249_sub_136421016_1035706684(IEEE_P_1242562249, t22, t16, t23, 10);
    t18 = work_a_3503384701_3212880686_sub_3430496816_3057020925(t0, t21, t17, t22);
    t19 = (t21 + 12U);
    t9 = *((unsigned int *)t19);
    t9 = (t9 * 1U);
    t4 = (7U != t9);
    if (t4 == 1)
        goto LAB25;

LAB26:    t20 = (t0 + 12245);
    t32 = *((int *)t20);
    t33 = (t32 - 6);
    t13 = (t33 * -1);
    t14 = (7U * t13);
    t34 = (0U + t14);
    t35 = (t0 + 7128);
    t36 = (t35 + 56U);
    t37 = *((char **)t36);
    t38 = (t37 + 56U);
    t39 = *((char **)t38);
    memcpy(t39, t18, 7U);
    xsi_driver_first_trans_delta(t35, t34, 7U, 0LL);
    goto LAB23;

LAB25:    xsi_size_not_matching(7U, t9, 0);
    goto LAB26;

LAB27:    xsi_set_current_line(223, ng2);
    t2 = (t0 + 1992U);
    t6 = *((char **)t2);
    t2 = (t0 + 11780U);
    t4 = ieee_p_1242562249_sub_3840967975_1035706684(IEEE_P_1242562249, t6, t2, 0);
    if (t4 != 0)
        goto LAB29;

LAB31:    xsi_set_current_line(226, ng2);
    t1 = (t0 + 12260);
    t3 = (7U != 7U);
    if (t3 == 1)
        goto LAB34;

LAB35:    t5 = (t0 + 3728U);
    t6 = *((char **)t5);
    t12 = *((int *)t6);
    t26 = (t12 + 1);
    t27 = (t26 - 6);
    t9 = (t27 * -1);
    t13 = (7U * t9);
    t14 = (0U + t13);
    t5 = (t0 + 7128);
    t7 = (t5 + 56U);
    t10 = *((char **)t7);
    t11 = (t10 + 56U);
    t15 = *((char **)t11);
    memcpy(t15, t1, 7U);
    xsi_driver_first_trans_delta(t5, t14, 7U, 0LL);

LAB30:    goto LAB23;

LAB29:    xsi_set_current_line(224, ng2);
    t7 = (t0 + 12253);
    t8 = (7U != 7U);
    if (t8 == 1)
        goto LAB32;

LAB33:    t11 = (t0 + 3728U);
    t15 = *((char **)t11);
    t29 = *((int *)t15);
    t30 = (t29 + 1);
    t31 = (t30 - 6);
    t9 = (t31 * -1);
    t13 = (7U * t9);
    t14 = (0U + t13);
    t11 = (t0 + 7128);
    t16 = (t11 + 56U);
    t17 = *((char **)t16);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    memcpy(t19, t7, 7U);
    xsi_driver_first_trans_delta(t11, t14, 7U, 0LL);
    goto LAB30;

LAB32:    xsi_size_not_matching(7U, 7U, 0);
    goto LAB33;

LAB34:    xsi_size_not_matching(7U, 7U, 0);
    goto LAB35;

LAB36:    xsi_set_current_line(229, ng2);
    t2 = (t0 + 12267);
    t4 = (7U != 7U);
    if (t4 == 1)
        goto LAB38;

LAB39:    t7 = (t0 + 12245);
    t29 = *((int *)t7);
    t30 = (t29 - 6);
    t9 = (t30 * -1);
    t13 = (7U * t9);
    t14 = (0U + t13);
    t10 = (t0 + 7128);
    t11 = (t10 + 56U);
    t15 = *((char **)t11);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t2, 7U);
    xsi_driver_first_trans_delta(t10, t14, 7U, 0LL);
    goto LAB23;

LAB38:    xsi_size_not_matching(7U, 7U, 0);
    goto LAB39;

}

static void work_a_3503384701_3212880686_p_5(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(236, ng2);

LAB3:    t1 = (t0 + 2952U);
    t2 = *((char **)t1);
    t1 = (t0 + 7192);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 42U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 6472);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_3503384701_3212880686_init()
{
	static char *pe[] = {(void *)work_a_3503384701_3212880686_p_0,(void *)work_a_3503384701_3212880686_p_1,(void *)work_a_3503384701_3212880686_p_2,(void *)work_a_3503384701_3212880686_p_3,(void *)work_a_3503384701_3212880686_p_4,(void *)work_a_3503384701_3212880686_p_5};
	static char *se[] = {(void *)work_a_3503384701_3212880686_sub_3430496816_3057020925};
	xsi_register_didat("work_a_3503384701_3212880686", "isim/calculator_isim_beh.exe.sim/work/a_3503384701_3212880686.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
