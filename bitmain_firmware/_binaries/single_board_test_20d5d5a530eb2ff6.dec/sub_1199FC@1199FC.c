int *__fastcall sub_1199FC(int a1, int a2, _DWORD *a3)
{
  signed int i; // r11
  _DWORD *v5; // r6
  const char *v6; // r10
  int v7; // r7
  char *v8; // r4
  size_t v9; // r0
  int v10; // r2
  size_t v11; // r3
  bool v12; // zf
  char *v13; // r1
  int v14; // t1
  bool v15; // zf
  size_t v16; // r5
  const char *v18; // r5
  unsigned int v19; // r0
  int v20; // r2
  int v21; // r1
  int v22; // r2
  char *v23; // r5
  bool v24; // zf
  char *v25; // r3
  int v26; // r1
  bool v27; // zf
  size_t v28; // r0
  size_t v29; // r2
  unsigned int v30; // r0
  int v31; // r2
  bool v32; // zf
  char *v33; // r3
  int v34; // r2
  bool v35; // zf
  char *v36; // r4
  int v37; // r3
  bool v38; // zf
  char *v39; // r3
  int v40; // r2
  bool v41; // zf
  char *v42; // r1
  int v43; // [sp+10h] [bp-54h]
  unsigned int *v44; // [sp+14h] [bp-50h]
  int *v45; // [sp+18h] [bp-4Ch]
  size_t v46; // [sp+1Ch] [bp-48h]
  int v47; // [sp+1Ch] [bp-48h]
  int v48; // [sp+20h] [bp-44h]
  char *endptr; // [sp+38h] [bp-2Ch] BYREF
  unsigned int v50; // [sp+3Ch] [bp-28h] BYREF
  char v51[16]; // [sp+40h] [bp-24h] BYREF
  _BYTE s2[20]; // [sp+50h] [bp-14h] BYREF

  v45 = (int *)sub_10BFD4(sub_117A54);
  if ( !v45 )
  {
    sub_D0048(34, 159, 65, (int)"crypto/x509v3/v3_addr.c", 912);
    return 0;
  }
  for ( i = 0; i < sub_10C010((int)a3); ++i )
  {
    v5 = (_DWORD *)sub_10C01C(a3, i);
    if ( !sub_122A8C(v5[1], "IPv4") )
    {
      v6 = "0123456789.";
      v7 = 4;
      v43 = 1;
LABEL_6:
      v44 = 0;
      v8 = sub_E9E3C((char *)v5[2]);
      goto LABEL_7;
    }
    if ( !sub_122A8C(v5[1], "IPv6") )
    {
      v43 = 2;
      v7 = 16;
      v6 = "0123456789.:abcdefABCDEF";
      goto LABEL_6;
    }
    if ( sub_122A8C(v5[1], "IPv4-SAFI") )
    {
      if ( sub_122A8C(v5[1], "IPv6-SAFI") )
      {
        v8 = 0;
        sub_D0048(34, 159, 115, (int)"crypto/x509v3/v3_addr.c", 935);
        sub_D1240(6, "section:", *v5, ",name:", v5[1], ",value:", v5[2]);
        goto LABEL_22;
      }
      v43 = 2;
      v7 = 16;
      v6 = "0123456789.:abcdefABCDEF";
    }
    else
    {
      v6 = "0123456789.";
      v7 = 4;
      v43 = 1;
    }
    v30 = strtoul((const char *)v5[2], &endptr, 0);
    v50 = v30;
    v31 = (unsigned __int8)*endptr;
    v32 = v31 == 32;
    if ( v31 != 32 )
      v32 = v31 == 9;
    if ( v32 )
    {
      v33 = endptr + 1;
      do
      {
        v42 = v33++;
        v34 = (unsigned __int8)*v42;
        v35 = v34 == 32;
        if ( v34 != 32 )
          v35 = v34 == 9;
      }
      while ( v35 );
    }
    else
    {
      v42 = endptr;
    }
    if ( v30 > 0xFF )
    {
      endptr = v42;
LABEL_75:
      v8 = 0;
      sub_D0048(34, 159, 164, (int)"crypto/x509v3/v3_addr.c", 959);
      sub_D1240(6, "section:", *v5, ",name:", v5[1], ",value:", v5[2]);
LABEL_22:
      CRYPTO_free(v8);
      sub_10BFDC((int)v45, (void (__fastcall *)(int))IPAddressFamily_free);
      return 0;
    }
    v36 = v42 + 1;
    endptr = v42 + 1;
    if ( *v42 != 58 )
      goto LABEL_75;
    v37 = (unsigned __int8)v42[1];
    v38 = v37 == 9;
    if ( v37 != 9 )
      v38 = v37 == 32;
    if ( v38 )
    {
      v39 = v42 + 2;
      do
      {
        v36 = v39++;
        v40 = (unsigned __int8)*v36;
        v41 = v40 == 9;
        if ( v40 != 9 )
          v41 = v40 == 32;
      }
      while ( v41 );
    }
    endptr = v36;
    v44 = &v50;
    v8 = sub_E9E3C(v36);
LABEL_7:
    if ( !v8 )
    {
      v20 = 969;
LABEL_80:
      sub_D0048(34, 159, 65, (int)"crypto/x509v3/v3_addr.c", v20);
      goto LABEL_22;
    }
    if ( !strcmp(v8, "inherit") )
    {
      if ( !sub_118B9C(v45, v43, v44) )
      {
        sub_D0048(34, 159, 165, (int)"crypto/x509v3/v3_addr.c", 980);
        sub_D1240(6, "section:", *v5, ",name:", v5[1], ",value:", v5[2]);
        goto LABEL_22;
      }
    }
    else
    {
      v9 = strspn(v8, v6);
      v10 = (unsigned __int8)v8[v9];
      v11 = v9;
      v12 = v10 == 32;
      if ( v10 != 32 )
        v12 = v10 == 9;
      if ( v12 )
      {
        v13 = &v8[v9];
        do
        {
          v11 = (size_t)&v13[1 - (_DWORD)v8];
          v14 = (unsigned __int8)*++v13;
          v10 = v14;
          v15 = v14 == 9;
          if ( v14 != 9 )
            v15 = v10 == 32;
        }
        while ( v15 );
      }
      v8[v9] = 0;
      v48 = v10;
      v16 = v11 + 1;
      v46 = v11;
      if ( sub_122ED4((int)v51, v8) != v7 )
      {
        sub_D0048(34, 159, 166, (int)"crypto/x509v3/v3_addr.c", 995);
        sub_D1240(6, "section:", *v5, ",name:", v5[1], ",value:", v5[2]);
        goto LABEL_22;
      }
      if ( v48 == 45 )
      {
        v21 = (unsigned __int8)v8[v16];
        v22 = v16;
        v23 = &v8[v16];
        v24 = v21 == 9;
        if ( v21 != 9 )
          v24 = v21 == 32;
        if ( v24 )
        {
          v25 = &v8[v46 + 2];
          do
          {
            v26 = (unsigned __int8)*v25;
            v23 = v25;
            v22 = v25 - v8;
            ++v25;
            v27 = v26 == 9;
            if ( v26 != 9 )
              v27 = v26 == 32;
          }
          while ( v27 );
        }
        v47 = v22;
        v28 = strspn(v23, v6) + v22;
        if ( v47 == v28 || v8[v28] )
        {
          sub_D0048(34, 159, 116, (int)"crypto/x509v3/v3_addr.c", 1022);
          sub_D1240(6, "section:", *v5, ",name:", v5[1], ",value:", v5[2]);
          goto LABEL_22;
        }
        if ( sub_122ED4((int)s2, v23) != v7 )
        {
          sub_D0048(34, 159, 166, (int)"crypto/x509v3/v3_addr.c", 1028);
          sub_D1240(6, "section:", *v5, ",name:", v5[1], ",value:", v5[2]);
          goto LABEL_22;
        }
        if ( v43 == 2 )
          v29 = 16;
        else
          v29 = 4;
        if ( memcmp(v51, s2, v29) > 0 )
        {
          sub_D0048(34, 159, 116, (int)"crypto/x509v3/v3_addr.c", 1034);
          sub_D1240(6, "section:", *v5, ",name:", v5[1], ",value:", v5[2]);
          goto LABEL_22;
        }
        if ( !sub_118CF4(v45, v43, v44, v51, s2) )
        {
          v20 = 1039;
          goto LABEL_80;
        }
      }
      else if ( v48 == 47 )
      {
        v18 = &v8[v16];
        v19 = strtoul(v18, &endptr, 10);
        if ( v18 == endptr || *endptr || ((int)v19 > 8 * v7) | (v19 >> 31) )
        {
          sub_D0048(34, 159, 116, (int)"crypto/x509v3/v3_addr.c", 1008);
          sub_D1240(6, "section:", *v5, ",name:", v5[1], ",value:", v5[2]);
          goto LABEL_22;
        }
        if ( !sub_118BDC(v45, v43, v44, v51, v19) )
        {
          v20 = 1013;
          goto LABEL_80;
        }
      }
      else
      {
        if ( v48 )
        {
          sub_D0048(34, 159, 116, (int)"crypto/x509v3/v3_addr.c", 1051);
          sub_D1240(6, "section:", *v5, ",name:", v5[1], ",value:", v5[2]);
          goto LABEL_22;
        }
        if ( !sub_118BDC(v45, v43, v44, v51, 8 * v7) )
        {
          v20 = 1045;
          goto LABEL_80;
        }
      }
    }
    CRYPTO_free(v8);
  }
  if ( !sub_119580(v45) )
  {
    v8 = 0;
    goto LABEL_22;
  }
  return v45;
}
