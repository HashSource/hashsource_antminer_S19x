void __fastcall sub_2315C(int a1, int a2, int a3)
{
  float v3; // s0
  const char *v4; // r3
  int v5; // r3
  size_t v6; // r9
  unsigned int v7; // r7
  unsigned int v8; // r11
  unsigned int v9; // r2
  unsigned int v10; // r6
  int v11; // r5
  int v12; // r8
  unsigned __int8 *v13; // r4
  bool v14; // zf
  int v15; // r3
  unsigned __int8 *v16; // r5
  int v17; // r4
  unsigned __int8 *v18; // r6
  int v19; // r3
  int v20; // r12
  int v21; // r3
  int i; // r4
  unsigned __int8 v23; // r2
  unsigned __int8 v24; // r1
  char v25; // r3
  unsigned int v26; // r0
  int v27; // r3
  int v28; // [sp+4h] [bp-9B8h]
  int v29; // [sp+8h] [bp-9B4h]
  int v30; // [sp+Ch] [bp-9B0h]
  unsigned int v31; // [sp+14h] [bp-9A8h]
  _BYTE v34[4]; // [sp+24h] [bp-998h] BYREF
  __int64 v35; // [sp+28h] [bp-994h] BYREF
  unsigned __int8 base[392]; // [sp+30h] [bp-98Ch] BYREF
  char s[2052]; // [sp+1B8h] [bp-804h] BYREF

  if ( (unsigned int)dword_B308C > 3 )
  {
    v4 = "true";
    if ( !a3 )
      v4 = "false";
    snprintf(s, 0x800u, "chain = %d, freq = %g, is_higher_voltage = %s\n", a1, v3, v4);
    sub_3B6AC(3, s, 0, v5);
  }
  v6 = 0;
  sub_28314(a1, 1);
  v35 = 0;
  memset(base, 0, sizeof(base));
  sub_791C0(&v35, v34, 0);
  v7 = (unsigned __int8)v35;
  v8 = v34[0];
  BYTE6(v35) = v34[0];
  v31 = BYTE1(v35);
  if ( (unsigned __int8)v35 > 7u )
  {
    v9 = dword_B308C;
  }
  else
  {
    v9 = dword_B308C;
    do
    {
      if ( v31 <= v7 )
      {
        v10 = v31;
        do
        {
          if ( v8 <= 1 )
          {
            v11 = v8;
            v12 = (__int16)v10 * (__int16)v7;
            v13 = &base[8 * v6];
            do
            {
              while ( 1 )
              {
                *v13 = v7;
                v13[1] = v10;
                v13[2] = v11;
                *((_DWORD *)v13 + 1) = v11 * v12;
                if ( v9 > 4 )
                  break;
                v14 = v11 == 1;
                v13 += 8;
                v11 = 1;
                if ( v14 )
                  goto LABEL_16;
              }
              snprintf(
                s,
                0x800u,
                "post_div1 = %d, post_div2 = %d, user_div = %d, div_ret = %d\n",
                v7,
                v10,
                v11,
                v11 * v12);
              sub_3B6AC(4, s, 0, v15);
              v14 = v11 == 1;
              v9 = dword_B308C;
              v11 = 1;
              v13 += 8;
            }
            while ( !v14 );
LABEL_16:
            v6 += (unsigned __int8)(1 - v8) + 1;
          }
          v10 = (unsigned __int8)(v10 + 1);
        }
        while ( v10 <= v7 );
      }
      v7 = (unsigned __int8)(v7 + 1);
    }
    while ( v7 != 8 );
  }
  if ( v9 > 4 )
  {
    strcpy(s, "\n");
    sub_3B6AC(4, s, 0, 10);
    if ( (unsigned int)dword_B308C > 4 )
    {
      strcpy(s, "sorted\n");
      sub_3B6AC(4, s, 0, "sorted\n");
    }
  }
  qsort(base, v6, 8u, (__compar_fn_t)sub_22970);
  if ( v6 )
  {
    v16 = base;
    v17 = 0;
    v18 = base;
    do
    {
      while ( (unsigned int)dword_B308C <= 4 )
      {
        ++v17;
        v18 += 8;
        if ( v17 == v6 )
          goto LABEL_25;
      }
      v19 = v17;
      v20 = base[8 * v17];
      v30 = *((_DWORD *)v18 + 1);
      ++v17;
      v29 = v18[2];
      v28 = v18[1];
      v18 += 8;
      snprintf(s, 0x800u, "[%d] post_div1 = %d, post_div2 = %d, user_div = %d, div_ret = %d\n", v19, v20, v28, v29, v30);
      sub_3B6AC(4, s, 0, v21);
    }
    while ( v17 != v6 );
LABEL_25:
    for ( i = 0; i != v6; ++i )
    {
      v23 = v16[1];
      v16 += 8;
      v24 = base[8 * i];
      v25 = *(v16 - 6);
      BYTE1(v35) = v23;
      LOBYTE(v35) = v24;
      BYTE6(v35) = v25;
      v26 = sub_282B4(v35, HIDWORD(v35));
      if ( v26 > dword_B32C4 )
      {
        if ( (unsigned int)dword_B308C > 3 )
        {
          snprintf(
            s,
            0x800u,
            "[%d] _POSTDIV1 = %d, _POSTDIV2 = %d, USER_DIV = %d, freq = %d\n",
            i,
            (unsigned __int8)v35,
            BYTE1(v35),
            BYTE6(v35),
            v26);
          sub_3B6AC(3, s, 0, v27);
        }
        sub_283A0(a1, 1, 0, a2, v35, HIDWORD(v35));
        usleep((__useconds_t)&unk_F4240);
      }
    }
  }
}
