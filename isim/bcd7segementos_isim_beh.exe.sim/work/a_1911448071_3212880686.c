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
static const char *ng0 = "C:/Users/favio/Desktop/ISE 14/bdc7segementos/bcd7segementos.vhd";



static void work_a_1911448071_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    xsi_set_current_line(42, ng0);

LAB3:    t1 = (t0 + 3160);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1911448071_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    int t5;
    char *t6;
    char *t7;
    int t8;
    char *t9;
    char *t10;
    int t11;
    char *t12;
    int t14;
    char *t15;
    char *t16;
    int t17;
    char *t18;
    char *t19;
    int t20;
    char *t21;
    char *t22;
    int t23;
    char *t24;
    char *t25;
    int t26;
    char *t27;
    char *t28;
    int t29;
    char *t30;
    char *t31;
    int t32;
    char *t33;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    int64 t40;
    int64 t41;

LAB0:    t1 = (t0 + 2760U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 1192U);
    t3 = *((char **)t2);
    t2 = (t0 + 5008);
    t5 = xsi_mem_cmp(t2, t3, 4U);
    if (t5 == 1)
        goto LAB5;

LAB16:    t6 = (t0 + 5012);
    t8 = xsi_mem_cmp(t6, t3, 4U);
    if (t8 == 1)
        goto LAB6;

LAB17:    t9 = (t0 + 5016);
    t11 = xsi_mem_cmp(t9, t3, 4U);
    if (t11 == 1)
        goto LAB7;

LAB18:    t12 = (t0 + 5020);
    t14 = xsi_mem_cmp(t12, t3, 4U);
    if (t14 == 1)
        goto LAB8;

LAB19:    t15 = (t0 + 5024);
    t17 = xsi_mem_cmp(t15, t3, 4U);
    if (t17 == 1)
        goto LAB9;

LAB20:    t18 = (t0 + 5028);
    t20 = xsi_mem_cmp(t18, t3, 4U);
    if (t20 == 1)
        goto LAB10;

LAB21:    t21 = (t0 + 5032);
    t23 = xsi_mem_cmp(t21, t3, 4U);
    if (t23 == 1)
        goto LAB11;

LAB22:    t24 = (t0 + 5036);
    t26 = xsi_mem_cmp(t24, t3, 4U);
    if (t26 == 1)
        goto LAB12;

LAB23:    t27 = (t0 + 5040);
    t29 = xsi_mem_cmp(t27, t3, 4U);
    if (t29 == 1)
        goto LAB13;

LAB24:    t30 = (t0 + 5044);
    t32 = xsi_mem_cmp(t30, t3, 4U);
    if (t32 == 1)
        goto LAB14;

LAB25:
LAB15:    xsi_set_current_line(45, ng0);
    t40 = (200 * 1000LL);
    t2 = (t0 + 5272);
    t4 = (t0 + 3224);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 8U);
    xsi_driver_first_trans_delta(t4, 0U, 8U, t40);
    t41 = (200 * 1000LL);
    t12 = (t0 + 5280);
    t15 = (t0 + 3224);
    t16 = (t15 + 56U);
    t18 = *((char **)t16);
    t19 = (t18 + 56U);
    t21 = *((char **)t19);
    memcpy(t21, t12, 8U);
    xsi_driver_subsequent_trans_delta(t15, 0U, 8U, t41);
    t22 = (t0 + 5288);
    t25 = (t0 + 3224);
    t27 = (t25 + 56U);
    t28 = *((char **)t27);
    t30 = (t28 + 56U);
    t31 = *((char **)t30);
    memcpy(t31, t22, 8U);
    xsi_driver_subsequent_trans_delta(t25, 0U, 8U, 0LL);
    t33 = (t0 + 3224);
    xsi_driver_intertial_reject(t33, t40, t40);

LAB4:    xsi_set_current_line(43, ng0);

LAB29:    t2 = (t0 + 3080);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB30;

LAB1:    return;
LAB5:    xsi_set_current_line(45, ng0);
    t33 = (t0 + 5048);
    t35 = (t0 + 3224);
    t36 = (t35 + 56U);
    t37 = *((char **)t36);
    t38 = (t37 + 56U);
    t39 = *((char **)t38);
    memcpy(t39, t33, 8U);
    xsi_driver_first_trans_fast_port(t35);
    goto LAB4;

LAB6:    xsi_set_current_line(45, ng0);
    t40 = (200 * 1000LL);
    t2 = (t0 + 5056);
    t4 = (t0 + 3224);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 8U);
    xsi_driver_first_trans_delta(t4, 0U, 8U, t40);
    t41 = (200 * 1000LL);
    t12 = (t0 + 5064);
    t15 = (t0 + 3224);
    t16 = (t15 + 56U);
    t18 = *((char **)t16);
    t19 = (t18 + 56U);
    t21 = *((char **)t19);
    memcpy(t21, t12, 8U);
    xsi_driver_subsequent_trans_delta(t15, 0U, 8U, t41);
    t22 = (t0 + 5072);
    t25 = (t0 + 3224);
    t27 = (t25 + 56U);
    t28 = *((char **)t27);
    t30 = (t28 + 56U);
    t31 = *((char **)t30);
    memcpy(t31, t22, 8U);
    xsi_driver_subsequent_trans_delta(t25, 0U, 8U, 0LL);
    t33 = (t0 + 3224);
    xsi_driver_intertial_reject(t33, t40, t40);
    goto LAB4;

LAB7:    xsi_set_current_line(45, ng0);
    t40 = (200 * 1000LL);
    t2 = (t0 + 5080);
    t4 = (t0 + 3224);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 8U);
    xsi_driver_first_trans_delta(t4, 0U, 8U, t40);
    t41 = (200 * 1000LL);
    t12 = (t0 + 5088);
    t15 = (t0 + 3224);
    t16 = (t15 + 56U);
    t18 = *((char **)t16);
    t19 = (t18 + 56U);
    t21 = *((char **)t19);
    memcpy(t21, t12, 8U);
    xsi_driver_subsequent_trans_delta(t15, 0U, 8U, t41);
    t22 = (t0 + 5096);
    t25 = (t0 + 3224);
    t27 = (t25 + 56U);
    t28 = *((char **)t27);
    t30 = (t28 + 56U);
    t31 = *((char **)t30);
    memcpy(t31, t22, 8U);
    xsi_driver_subsequent_trans_delta(t25, 0U, 8U, 0LL);
    t33 = (t0 + 3224);
    xsi_driver_intertial_reject(t33, t40, t40);
    goto LAB4;

LAB8:    xsi_set_current_line(45, ng0);
    t40 = (200 * 1000LL);
    t2 = (t0 + 5104);
    t4 = (t0 + 3224);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 8U);
    xsi_driver_first_trans_delta(t4, 0U, 8U, t40);
    t41 = (200 * 1000LL);
    t12 = (t0 + 5112);
    t15 = (t0 + 3224);
    t16 = (t15 + 56U);
    t18 = *((char **)t16);
    t19 = (t18 + 56U);
    t21 = *((char **)t19);
    memcpy(t21, t12, 8U);
    xsi_driver_subsequent_trans_delta(t15, 0U, 8U, t41);
    t22 = (t0 + 5120);
    t25 = (t0 + 3224);
    t27 = (t25 + 56U);
    t28 = *((char **)t27);
    t30 = (t28 + 56U);
    t31 = *((char **)t30);
    memcpy(t31, t22, 8U);
    xsi_driver_subsequent_trans_delta(t25, 0U, 8U, 0LL);
    t33 = (t0 + 3224);
    xsi_driver_intertial_reject(t33, t40, t40);
    goto LAB4;

LAB9:    xsi_set_current_line(45, ng0);
    t40 = (200 * 1000LL);
    t2 = (t0 + 5128);
    t4 = (t0 + 3224);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 8U);
    xsi_driver_first_trans_delta(t4, 0U, 8U, t40);
    t41 = (200 * 1000LL);
    t12 = (t0 + 5136);
    t15 = (t0 + 3224);
    t16 = (t15 + 56U);
    t18 = *((char **)t16);
    t19 = (t18 + 56U);
    t21 = *((char **)t19);
    memcpy(t21, t12, 8U);
    xsi_driver_subsequent_trans_delta(t15, 0U, 8U, t41);
    t22 = (t0 + 5144);
    t25 = (t0 + 3224);
    t27 = (t25 + 56U);
    t28 = *((char **)t27);
    t30 = (t28 + 56U);
    t31 = *((char **)t30);
    memcpy(t31, t22, 8U);
    xsi_driver_subsequent_trans_delta(t25, 0U, 8U, 0LL);
    t33 = (t0 + 3224);
    xsi_driver_intertial_reject(t33, t40, t40);
    goto LAB4;

LAB10:    xsi_set_current_line(45, ng0);
    t40 = (200 * 1000LL);
    t2 = (t0 + 5152);
    t4 = (t0 + 3224);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 8U);
    xsi_driver_first_trans_delta(t4, 0U, 8U, t40);
    t41 = (200 * 1000LL);
    t12 = (t0 + 5160);
    t15 = (t0 + 3224);
    t16 = (t15 + 56U);
    t18 = *((char **)t16);
    t19 = (t18 + 56U);
    t21 = *((char **)t19);
    memcpy(t21, t12, 8U);
    xsi_driver_subsequent_trans_delta(t15, 0U, 8U, t41);
    t22 = (t0 + 5168);
    t25 = (t0 + 3224);
    t27 = (t25 + 56U);
    t28 = *((char **)t27);
    t30 = (t28 + 56U);
    t31 = *((char **)t30);
    memcpy(t31, t22, 8U);
    xsi_driver_subsequent_trans_delta(t25, 0U, 8U, 0LL);
    t33 = (t0 + 3224);
    xsi_driver_intertial_reject(t33, t40, t40);
    goto LAB4;

LAB11:    xsi_set_current_line(45, ng0);
    t40 = (200 * 1000LL);
    t2 = (t0 + 5176);
    t4 = (t0 + 3224);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 8U);
    xsi_driver_first_trans_delta(t4, 0U, 8U, t40);
    t41 = (200 * 1000LL);
    t12 = (t0 + 5184);
    t15 = (t0 + 3224);
    t16 = (t15 + 56U);
    t18 = *((char **)t16);
    t19 = (t18 + 56U);
    t21 = *((char **)t19);
    memcpy(t21, t12, 8U);
    xsi_driver_subsequent_trans_delta(t15, 0U, 8U, t41);
    t22 = (t0 + 5192);
    t25 = (t0 + 3224);
    t27 = (t25 + 56U);
    t28 = *((char **)t27);
    t30 = (t28 + 56U);
    t31 = *((char **)t30);
    memcpy(t31, t22, 8U);
    xsi_driver_subsequent_trans_delta(t25, 0U, 8U, 0LL);
    t33 = (t0 + 3224);
    xsi_driver_intertial_reject(t33, t40, t40);
    goto LAB4;

LAB12:    xsi_set_current_line(45, ng0);
    t40 = (200 * 1000LL);
    t2 = (t0 + 5200);
    t4 = (t0 + 3224);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 8U);
    xsi_driver_first_trans_delta(t4, 0U, 8U, t40);
    t41 = (200 * 1000LL);
    t12 = (t0 + 5208);
    t15 = (t0 + 3224);
    t16 = (t15 + 56U);
    t18 = *((char **)t16);
    t19 = (t18 + 56U);
    t21 = *((char **)t19);
    memcpy(t21, t12, 8U);
    xsi_driver_subsequent_trans_delta(t15, 0U, 8U, t41);
    t22 = (t0 + 5216);
    t25 = (t0 + 3224);
    t27 = (t25 + 56U);
    t28 = *((char **)t27);
    t30 = (t28 + 56U);
    t31 = *((char **)t30);
    memcpy(t31, t22, 8U);
    xsi_driver_subsequent_trans_delta(t25, 0U, 8U, 0LL);
    t33 = (t0 + 3224);
    xsi_driver_intertial_reject(t33, t40, t40);
    goto LAB4;

LAB13:    xsi_set_current_line(45, ng0);
    t40 = (200 * 1000LL);
    t2 = (t0 + 5224);
    t4 = (t0 + 3224);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 8U);
    xsi_driver_first_trans_delta(t4, 0U, 8U, t40);
    t41 = (200 * 1000LL);
    t12 = (t0 + 5232);
    t15 = (t0 + 3224);
    t16 = (t15 + 56U);
    t18 = *((char **)t16);
    t19 = (t18 + 56U);
    t21 = *((char **)t19);
    memcpy(t21, t12, 8U);
    xsi_driver_subsequent_trans_delta(t15, 0U, 8U, t41);
    t22 = (t0 + 5240);
    t25 = (t0 + 3224);
    t27 = (t25 + 56U);
    t28 = *((char **)t27);
    t30 = (t28 + 56U);
    t31 = *((char **)t30);
    memcpy(t31, t22, 8U);
    xsi_driver_subsequent_trans_delta(t25, 0U, 8U, 0LL);
    t33 = (t0 + 3224);
    xsi_driver_intertial_reject(t33, t40, t40);
    goto LAB4;

LAB14:    xsi_set_current_line(45, ng0);
    t40 = (200 * 1000LL);
    t2 = (t0 + 5248);
    t4 = (t0 + 3224);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 8U);
    xsi_driver_first_trans_delta(t4, 0U, 8U, t40);
    t41 = (200 * 1000LL);
    t12 = (t0 + 5256);
    t15 = (t0 + 3224);
    t16 = (t15 + 56U);
    t18 = *((char **)t16);
    t19 = (t18 + 56U);
    t21 = *((char **)t19);
    memcpy(t21, t12, 8U);
    xsi_driver_subsequent_trans_delta(t15, 0U, 8U, t41);
    t22 = (t0 + 5264);
    t25 = (t0 + 3224);
    t27 = (t25 + 56U);
    t28 = *((char **)t27);
    t30 = (t28 + 56U);
    t31 = *((char **)t30);
    memcpy(t31, t22, 8U);
    xsi_driver_subsequent_trans_delta(t25, 0U, 8U, 0LL);
    t33 = (t0 + 3224);
    xsi_driver_intertial_reject(t33, t40, t40);
    goto LAB4;

LAB26:;
LAB27:    t3 = (t0 + 3080);
    *((int *)t3) = 0;
    goto LAB2;

LAB28:    goto LAB27;

LAB30:    goto LAB28;

}


extern void work_a_1911448071_3212880686_init()
{
	static char *pe[] = {(void *)work_a_1911448071_3212880686_p_0,(void *)work_a_1911448071_3212880686_p_1};
	xsi_register_didat("work_a_1911448071_3212880686", "isim/bcd7segementos_isim_beh.exe.sim/work/a_1911448071_3212880686.didat");
	xsi_register_executes(pe);
}
