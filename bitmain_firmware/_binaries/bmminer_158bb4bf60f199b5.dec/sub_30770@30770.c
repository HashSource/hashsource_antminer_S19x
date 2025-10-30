void __fastcall sub_30770(int a1, int a2, int a3, int a4)
{
  bool v4; // zf
  const char *v5; // r3
  unsigned int v6; // r11
  unsigned int v7; // r8
  unsigned int v8; // r2
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
  int v21; // r6
  char v22; // r3
  char v23; // r1
  char v24; // r2
  unsigned int v25; // r7
  size_t nmemb; // [sp+10h] [bp-9BCh]
  int v27; // [sp+14h] [bp-9B8h]
  unsigned int v28; // [sp+20h] [bp-9ACh]
  _BYTE v32[4]; // [sp+34h] [bp-998h] BYREF
  int v33; // [sp+38h] [bp-994h] BYREF
  int v34; // [sp+3Ch] [bp-990h]
  _QWORD base[49]; // [sp+40h] [bp-98Ch] BYREF
  char s[2052]; // [sp+1C8h] [bp-804h] BYREF

  if ( (unsigned int)dword_9E31C > 3 )
  {
    v4 = a4 == 0;
    v5 = "false";
    if ( !v4 )
      v5 = "true";
    snprintf(s, 0x800u, "chain = %d, freq = %d, is_higher_voltage = %s\n", a1, a3, v5);
    sub_47AB4(3, s, 0);
  }
  v33 = 0;
  v34 = 0;
  memset(base, 0, sizeof(base));
  sub_74E08(&v33, v32, 0);
  v6 = v32[0];
  BYTE2(v34) = v32[0];
  v28 = BYTE1(v33);
  if ( (unsigned __int8)v33 > 7u )
  {
    nmemb = 0;
    v8 = dword_9E31C;
  }
  else
  {
    v27 = (unsigned __int8)v33;
    v7 = (unsigned __int8)v33;
    nmemb = 0;
    v8 = dword_9E31C;
    do
    {
      if ( v28 <= v7 )
      {
        v9 = v28;
        do
        {
          if ( v6 <= 1 )
          {
            v10 = v6;
            v11 = &base[nmemb];
            v12 = v9 * v27 * v6;
            do
            {
              *(_BYTE *)v11 = v7;
              *((_BYTE *)v11 + 1) = v9;
              *((_BYTE *)v11 + 2) = v10;
              *((_DWORD *)v11 + 1) = v12;
              if ( v8 > 4 )
              {
                snprintf(s, 0x800u, "post_div1 = %d, post_div2 = %d, user_div = %d, div_ret = %d\n", v27, v9, v10, v12);
                sub_47AB4(4, s, 0);
                v8 = dword_9E31C;
              }
              ++v10;
              ++v11;
              v12 += v9 * v27;
            }
            while ( (unsigned __int8)v10 <= 1u );
            nmemb += (unsigned __int8)(1 - v6) + 1;
          }
          v9 = (unsigned __int8)(v9 + 1);
        }
        while ( v9 <= v7 );
      }
      v7 = (unsigned __int8)++v27;
    }
    while ( (unsigned __int8)v27 <= 7u );
  }
  if ( v8 > 4 )
  {
    strcpy(s, "\n");
    sub_47AB4(4, s, 0);
    if ( (unsigned int)dword_9E31C > 4 )
    {
      strcpy(s, "sorted\n");
      sub_47AB4(4, s, 0);
    }
  }
  qsort(base, nmemb, 8u, (__compar_fn_t)sub_3012C);
  if ( nmemb )
  {
    v13 = base;
    v14 = (unsigned __int8 *)base;
    v15 = 0;
    do
    {
      while ( (unsigned int)dword_9E31C <= 4 )
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
      sub_47AB4(4, s, 0);
    }
    while ( v15 != nmemb );
LABEL_24:
    v21 = 0;
    do
    {
      v22 = *((_BYTE *)v13++ + 2);
      v23 = *((_BYTE *)v13 - 8);
      v24 = *((_BYTE *)v13 - 7);
      BYTE2(v34) = v22;
      LOBYTE(v33) = v23;
      BYTE1(v33) = v24;
      v25 = sub_1B194();
      if ( (unsigned int)dword_9E31C > 4 )
      {
        snprintf(
          s,
          0x800u,
          "[%d] _POSTDIV1 = %d, _POSTDIV2 = %d, USER_DIV = %d, freq = %d\n",
          v21,
          (unsigned __int8)v33,
          BYTE1(v33),
          BYTE2(v34),
          v25);
        sub_47AB4(4, s, 0);
      }
      ++v21;
      if ( dword_9C2A8 < v25 )
      {
        sub_306F0(v25, a4);
        sub_1B1F4(a1, 1, 0, a2, v33, v34);
        usleep((__useconds_t)&unk_F4240);
      }
    }
    while ( v21 != v15 );
  }
}
