int sub_33DE8()
{
  float v0; // s20
  int v1; // r0
  int v2; // r4
  int v3; // r0
  int v4; // r3
  int v5; // r3
  int v6; // r3
  int v7; // r3
  float *v8; // r8
  int i; // r6
  int v10; // r8
  int v11; // r10
  int v12; // s19
  int v13; // r0
  int v14; // r9
  int v15; // r3
  int v16; // s21
  int v17; // s18
  int v18; // r7
  int v19; // r10
  char *v20; // r4
  int v21; // r5
  float *v22; // r6
  int v23; // r0
  float v24; // s16
  int v25; // r3
  float v26; // s17
  char v27; // r0
  unsigned int v28; // r3
  int v29; // r4
  int v30; // r0
  int v31; // r0
  int v33; // r7
  float *v34; // r5
  int j; // r4
  int v36; // r3
  int v37; // r0
  int v38; // r3
  int v39; // r7
  int v40; // r5
  int v41; // r5
  int v42; // r6
  int v43; // [sp+14h] [bp-1840h]
  float *v44; // [sp+20h] [bp-1834h]
  char *v45; // [sp+24h] [bp-1830h]
  float *v46; // [sp+28h] [bp-182Ch]
  char *v47; // [sp+2Ch] [bp-1828h]
  unsigned __int8 v48; // [sp+32h] [bp-1822h]
  char v49; // [sp+34h] [bp-1820h]
  int v50; // [sp+38h] [bp-181Ch] BYREF
  int v51; // [sp+3Ch] [bp-1818h]
  int v52; // [sp+40h] [bp-1814h]
  int v53; // [sp+44h] [bp-1810h]
  int v54; // [sp+48h] [bp-180Ch]
  int v55; // [sp+4Ch] [bp-1808h]
  char v56[2048]; // [sp+50h] [bp-1804h] BYREF
  _BYTE s[4100]; // [sp+850h] [bp-1004h] BYREF

  v0 = flt_B3064;
  v52 = 0;
  v53 = 0;
  v54 = 0;
  v55 = 0;
  v48 = (unsigned int)sub_42988() >> 16;
  memset(s, 0, 0x1000u);
  v1 = sub_191B8();
  if ( (unsigned int)dword_B308C <= 3 )
    v47 = v56;
  LOWORD(v2) = v1;
  if ( (unsigned int)dword_B308C > 3 )
  {
    v47 = v56;
    snprintf(v56, 0x800u, "get board temp:%d", v1);
    sub_3B6AC(3, v56, 0, v36);
    if ( (unsigned int)dword_B308C > 3 )
    {
      v37 = sub_27A38();
      snprintf(v56, 0x800u, "waiting board temp come to %d", v37);
      sub_3B6AC(3, v56, 0, v38);
    }
  }
  sub_31108();
  gettimeofday((struct timeval *)v47 - 2, 0);
  while ( (__int16)v2 < sub_27A38() )
  {
    v2 = sub_191B8();
    if ( (unsigned int)dword_B308C > 3 )
    {
      v3 = sub_27A38();
      snprintf(v47, 0x800u, "waiting board temp to %d,curr temp %d", v3, v2);
      sub_3B6AC(3, v47, 0, v4);
    }
    if ( !sub_31140(0, 0, 10) )
    {
      sub_481F0(9, 0);
      sub_2A0D0(1);
      sub_458A0(18, "protect machine!");
      while ( 1 )
        sleep(1u);
    }
    sleep(0xAu);
    gettimeofday((struct timeval *)v47 - 1, 0);
    if ( v54 - v52 > 119 )
    {
      if ( (unsigned int)dword_B308C > 4 )
      {
        snprintf(v47, 0x800u, "can not heat up to %d", (__int16)v2);
        sub_3B6AC(4, v47, 0, v5);
      }
      break;
    }
  }
  v6 = sub_191B8();
  if ( (unsigned int)dword_B308C > 3 )
  {
    snprintf(v47, 0x800u, "get board temp:%d", v6);
    sub_3B6AC(3, v47, 0, v7);
  }
  v8 = (float *)s;
  for ( i = 0; i != 4; ++i )
  {
    if ( sub_26C0C(i) )
    {
      v33 = sub_26A44();
      if ( v33 > 0 )
      {
        v34 = v8;
        for ( j = 0; j != v33; ++j )
          *v34++ = (float)(int)sub_2FFBC(i, 0);
      }
    }
    v8 += 256;
  }
  sub_28220(255, 3, v48, 0);
  v10 = sub_26A34();
  v11 = sub_26A54();
  v12 = sub_32CB0();
  v13 = sub_32C68();
  v14 = v13;
  if ( (unsigned int)dword_B308C > 4 )
  {
    snprintf(v47, 0x800u, "get sweep freq max=%d, min=%d", v12, v13);
    v13 = sub_3B6AC(4, v47, 0, v15);
  }
  if ( v12 > v14 )
  {
    v16 = (int)(((float)((float)(v12 - v14) + v0) - 0.01) / v0);
    if ( v16 > 0 )
    {
      v17 = 1;
      v18 = v11;
      v43 = 4 * v11;
      do
      {
        v19 = 0;
        v46 = (float *)s;
        do
        {
          if ( sub_26C0C(v19) && v18 > 0 )
          {
            v44 = v46;
            v45 = 0;
            while ( v10 <= 0 )
            {
LABEL_42:
              ++v45;
              ++v44;
              if ( v45 == (char *)v18 )
                goto LABEL_43;
            }
            v20 = v45;
            v21 = 0;
            v22 = v44;
            while ( 2 )
            {
              v23 = sub_32CF8(v19, v20);
              if ( v14 < v23 && (v24 = (float)v23, (float)v23 > *v22) )
              {
                *((_DWORD *)v47 - 6) = 0;
                v51 = 0;
                v26 = (float)v14 + (float)((float)v17 * v0);
                if ( v26 > (float)v12 )
                  v26 = (float)v12;
                sub_28314(v19, 0, (unsigned __int8)(2 * (_BYTE)v20), (unsigned __int8)byte_534B58);
                sub_791C0(&v50, v47 - 28, 0);
                if ( v26 <= v24 )
                  *v22 = (float)(int)v26;
                else
                  *v22 = v24;
                BYTE2(v51) = v49;
                v27 = sub_26AB4();
                if ( !sub_283A0(v19, 0, (unsigned __int8)(v27 * (_BYTE)v20), (unsigned __int8)byte_534B58, v50, v51) )
                {
                  sub_481F0(21, 0);
                  sub_458A0(13, "Unbalance happened, waiting!\n");
                }
                if ( (unsigned int)dword_B308C > 4 )
                {
                  snprintf(v47, 0x800u, "middle chain = %d asic=%d set freq to %.2f", v19, v20, *v22);
LABEL_33:
                  sub_3B6AC(4, v47, 0, v25);
                }
              }
              else if ( (unsigned int)dword_B308C > 4 )
              {
                snprintf(v47, 0x800u, "end chain=%d asic=%d set end freq %.2f", v19, v20, *v22);
                goto LABEL_33;
              }
              ++v21;
              v20 += v18;
              v22 = (float *)((char *)v22 + v43);
              if ( v21 == v10 )
                goto LABEL_42;
              continue;
            }
          }
LABEL_43:
          ++v19;
          v46 += 256;
        }
        while ( v19 != 4 );
        ++v17;
        v13 = sub_3E0F0(100);
      }
      while ( v16 >= v17 );
    }
  }
  sub_478A8(v13);
  sub_3E0F0(1000);
  v28 = dword_B308C;
  if ( (unsigned int)dword_B308C > 4 )
  {
    strcpy(v47, "inc_freq_matrix_thread set freq complete");
    sub_3B6AC(4, v47, 0, *(_DWORD *)"req complete");
    v28 = dword_B308C;
  }
  if ( v28 > 3 )
  {
    strcpy(v47, "set voltage to work voltage");
    sub_3B6AC(3, v47, 0, *(_DWORD *)"to work voltage");
  }
  if ( dword_533B38 > 0 && sub_226A8() != dword_533B38 )
  {
    v29 = sub_27A58();
    v30 = sub_191B8();
    if ( v30 < -11 )
      v29 = 10 * ((int)((double)v29 + (double)(-12 - v30) * 2.5) / 10);
    if ( byte_B3068 && dword_9CD8D0 <= 18 )
    {
      if ( sub_1ABF0() )
        v39 = 40;
      else
        v39 = 20;
      v40 = sub_8F800(v29 * (dword_B3708 - dword_9CD8D0));
      if ( v39 + v29 <= v40 )
      {
        if ( sub_1ABF0() )
          v41 = 40;
        else
          v41 = 20;
        v40 = v41 + v29;
      }
      v42 = dword_533B38;
      if ( v40 + v42 > sub_226B8() )
        v31 = sub_226B8();
      else
        v31 = v40 + dword_533B38;
      if ( v31 > 1500 )
      {
        sub_45220(1500);
        goto LABEL_57;
      }
    }
    else
    {
      v31 = dword_533B38;
    }
    sub_45220(v31);
  }
LABEL_57:
  byte_534CD8 = 0;
  byte_B4138 = 1;
  sub_47888();
  return sub_33CD4();
}
