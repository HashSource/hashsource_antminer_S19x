void __fastcall sub_22C20(int a1, int a2, int a3)
{
  float v3; // s0
  const char *v4; // r3
  int v5; // r3
  unsigned int v6; // r11
  unsigned int v7; // r8
  void *v8; // r2
  unsigned int v9; // r6
  unsigned int v10; // r5
  _QWORD *v11; // r4
  int v12; // r7
  _QWORD *v13; // r4
  unsigned __int8 *v14; // r6
  int v15; // r5
  int v16; // lr
  int v17; // r3
  int v18; // r1
  int v19; // r0
  int v20; // r12
  int v21; // r3
  int v22; // r6
  char v23; // r3
  char v24; // r1
  char v25; // r2
  unsigned int v26; // r3
  int v27; // r3
  int v28; // r3
  size_t nmemb; // [sp+14h] [bp-9B8h]
  int v30; // [sp+18h] [bp-9B4h]
  unsigned int v31; // [sp+24h] [bp-9A8h]
  _BYTE v34[4]; // [sp+34h] [bp-998h] BYREF
  __int64 v35; // [sp+38h] [bp-994h] BYREF
  _QWORD base[49]; // [sp+40h] [bp-98Ch] BYREF
  char s[2052]; // [sp+1C8h] [bp-804h] BYREF

  if ( (unsigned int)off_AFC24 > 3 )
  {
    v4 = "false";
    if ( a3 )
      v4 = "true";
    snprintf(s, 0x800u, "chain = %d, freq = %g, is_higher_voltage = %s\n", a1, v3, v4);
    sub_3AF5C(3, s, 0, v5);
  }
  sub_27D94(a1, 1);
  v35 = 0;
  memset(base, 0, sizeof(base));
  sub_75D54(&v35, v34, 0);
  v6 = v34[0];
  BYTE6(v35) = v34[0];
  v31 = BYTE1(v35);
  if ( (unsigned __int8)v35 > 7u )
  {
    nmemb = 0;
    v8 = off_AFC24;
  }
  else
  {
    v30 = (unsigned __int8)v35;
    v7 = (unsigned __int8)v35;
    nmemb = 0;
    v8 = off_AFC24;
    do
    {
      if ( v31 <= v7 )
      {
        v9 = v31;
        do
        {
          if ( v6 <= 1 )
          {
            v10 = v6;
            v11 = &base[nmemb];
            v12 = v9 * v30 * v6;
            do
            {
              *(_BYTE *)v11 = v7;
              *((_BYTE *)v11 + 1) = v9;
              *((_BYTE *)v11 + 2) = v10;
              *((_DWORD *)v11 + 1) = v12;
              if ( (unsigned int)v8 > 4 )
              {
                snprintf(s, 0x800u, "post_div1 = %d, post_div2 = %d, user_div = %d, div_ret = %d\n", v30, v9, v10, v12);
                sub_3AF5C(4, s, 0, v28);
                v8 = off_AFC24;
              }
              ++v10;
              ++v11;
              v12 += v9 * v30;
            }
            while ( (unsigned __int8)v10 <= 1u );
            nmemb += (unsigned __int8)(1 - v6) + 1;
          }
          v9 = (unsigned __int8)(v9 + 1);
        }
        while ( v9 <= v7 );
      }
      v7 = (unsigned __int8)++v30;
    }
    while ( (unsigned __int8)v30 <= 7u );
  }
  if ( (unsigned int)v8 > 4 )
  {
    strcpy(s, "\n");
    sub_3AF5C(4, s, 0, 10);
    if ( (unsigned int)off_AFC24 > 4 )
    {
      strcpy(s, "sorted\n");
      sub_3AF5C(4, s, 0, "sorted\n");
    }
  }
  qsort(base, nmemb, 8u, (__compar_fn_t)sub_22438);
  if ( nmemb )
  {
    v13 = base;
    v14 = (unsigned __int8 *)base;
    v15 = 0;
    do
    {
      while ( (unsigned int)off_AFC24 <= 4 )
      {
        ++v15;
        v14 += 8;
        if ( v15 == nmemb )
          goto LABEL_24;
      }
      v16 = *((_DWORD *)v14 + 1);
      v17 = v15;
      v18 = v14[2];
      v19 = v14[1];
      ++v15;
      v20 = *v14;
      v14 += 8;
      snprintf(s, 0x800u, "[%d] post_div1 = %d, post_div2 = %d, user_div = %d, div_ret = %d\n", v17, v20, v19, v18, v16);
      sub_3AF5C(4, s, 0, v21);
    }
    while ( v15 != nmemb );
LABEL_24:
    v22 = 0;
    do
    {
      v23 = *((_BYTE *)v13++ + 2);
      v24 = *((_BYTE *)v13 - 8);
      v25 = *((_BYTE *)v13 - 7);
      BYTE6(v35) = v23;
      LOBYTE(v35) = v24;
      BYTE1(v35) = v25;
      v26 = sub_27D34(v35, HIDWORD(v35));
      if ( dword_AFE5C < v26 )
      {
        if ( (unsigned int)off_AFC24 > 3 )
        {
          snprintf(
            s,
            0x800u,
            "[%d] _POSTDIV1 = %d, _POSTDIV2 = %d, USER_DIV = %d, freq = %d\n",
            v22,
            (unsigned __int8)v35,
            BYTE1(v35),
            BYTE6(v35),
            v26);
          sub_3AF5C(3, s, 0, v27);
        }
        sub_27E18(a1, 1, 0, a2, v35, HIDWORD(v35));
        usleep((__useconds_t)&unk_F4240);
      }
      ++v22;
    }
    while ( v22 != v15 );
  }
}
