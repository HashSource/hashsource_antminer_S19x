int __fastcall sub_9B7A4(_DWORD *a1, unsigned __int8 **a2)
{
  int v2; // r4
  int v5; // r7
  int v6; // r0
  int v7; // r8
  unsigned int v8; // r3
  int v9; // r1
  int v10; // r9
  int v11; // r9
  int v12; // r0
  unsigned __int8 *v13; // r3
  _BOOL4 v14; // r0
  unsigned int v15; // r2
  int v16; // lr
  int v17; // r1
  int v18; // r3
  int v19; // r6
  int v21; // r10
  unsigned int v22; // r0
  bool v23; // cc
  int v24; // r3
  int v25; // r3
  int v26; // r0
  int *v27; // r3
  int v28; // r3
  _BOOL4 v29; // r2
  bool v30; // zf
  int v31; // r3
  int v32; // [sp+0h] [bp-C0h]
  int v33; // [sp+Ch] [bp-B4h] BYREF
  int v34; // [sp+10h] [bp-B0h] BYREF
  int v35; // [sp+14h] [bp-ACh] BYREF
  int v36; // [sp+18h] [bp-A8h] BYREF
  char s[164]; // [sp+1Ch] [bp-A4h] BYREF

  v2 = 0;
  v33 = 0;
  v34 = 0;
  v36 = 0;
  v5 = sub_D14F4(a1);
  if ( !v5 )
  {
    v2 = 0;
    sub_95494(a1, 80, 379, 65, (int)"ssl/statem/statem_lib.c", 365);
    v19 = 0;
    v18 = a1[31];
    goto LABEL_24;
  }
  v6 = sub_10E89C(*(_DWORD *)(a1[285] + 412));
  v7 = v6;
  if ( !v6 )
  {
    v25 = 373;
    v2 = 0;
    goto LABEL_46;
  }
  if ( !sub_8559C(v6, 0) )
  {
    v2 = 0;
    v19 = 0;
    sub_95494(a1, 47, 379, 220, (int)"ssl/statem/statem_lib.c", 379);
    v18 = a1[31];
    goto LABEL_24;
  }
  if ( (*(_DWORD *)(*(_DWORD *)(a1[1] + 100) + 48) & 2) != 0 )
  {
    v15 = (unsigned int)a2[1];
    if ( v15 <= 1 )
    {
      sub_95494(a1, 50, 379, 240, (int)"ssl/statem/statem_lib.c", 388);
      goto LABEL_41;
    }
    v16 = **a2;
    v17 = (*a2)[1];
    *a2 += 2;
    a2[1] = (unsigned __int8 *)(v15 - 2);
    if ( sub_A2F90(a1, v17 | (v16 << 8), v7) <= 0 )
      goto LABEL_21;
  }
  else if ( !sub_A3718(a1, v7) )
  {
    v25 = 397;
    goto LABEL_45;
  }
  if ( !sub_A2D04(*(_DWORD *)(a1[31] + 632), &v33) )
  {
    v25 = 403;
LABEL_45:
    v2 = 0;
LABEL_46:
    sub_95494(a1, 80, 379, 68, (int)"ssl/statem/statem_lib.c", v25);
LABEL_47:
    v19 = v2;
    v18 = a1[31];
    goto LABEL_24;
  }
  v8 = (unsigned int)a2[1];
  if ( (*(_DWORD *)(*(_DWORD *)(a1[1] + 100) + 48) & 2) == 0 )
  {
    if ( v8 == 64 )
    {
      if ( sub_DA19C(v7) == 811 || sub_DA19C(v7) == 979 )
        goto LABEL_56;
      v8 = (unsigned int)a2[1];
    }
    if ( v8 != 128 )
      goto LABEL_10;
    if ( sub_DA19C(v7) != 980 )
    {
      v8 = (unsigned int)a2[1];
      goto LABEL_10;
    }
LABEL_56:
    v11 = (int)a2[1];
    goto LABEL_12;
  }
LABEL_10:
  if ( v8 <= 1 )
  {
    sub_95494(a1, 50, 379, 159, (int)"ssl/statem/statem_lib.c", 430);
    goto LABEL_23;
  }
  v9 = **a2;
  v10 = (*a2)[1];
  *a2 += 2;
  a2[1] = (unsigned __int8 *)(v8 - 2);
  v11 = v10 | (v9 << 8);
LABEL_12:
  v12 = sub_D9AF8(v7);
  if ( v12 < v11 || ((v13 = a2[1], v14 = v12 < (int)v13, !v13) ? (v2 = v14 | 1) : (v2 = v14), v2) )
  {
    sub_95494(a1, 50, 379, 265, (int)"ssl/statem/statem_lib.c", 438);
LABEL_23:
    v18 = a1[31];
    v2 = 0;
    v19 = 0;
    goto LABEL_24;
  }
  if ( (unsigned int)v13 < v11 )
  {
    sub_95494(a1, 50, 379, 159, (int)"ssl/statem/statem_lib.c", 443);
LABEL_41:
    v19 = 0;
    v18 = a1[31];
    goto LABEL_24;
  }
  v21 = (int)*a2;
  a2[1] = &v13[-v11];
  *a2 = (unsigned __int8 *)(v21 + v11);
  if ( !sub_9B330(a1, s, &v35, &v34) )
  {
LABEL_21:
    v2 = 0;
    v18 = a1[31];
    v19 = 0;
    goto LABEL_24;
  }
  if ( sub_D954C(v5, &v36, v33, 0, v7) <= 0 )
  {
    sub_95494(a1, 80, 379, 6, (int)"ssl/statem/statem_lib.c", 458);
    goto LABEL_47;
  }
  v22 = sub_DA19C(v7);
  v23 = v22 > 0x32B;
  if ( v22 != 811 )
    v23 = v22 - 979 > 1;
  v19 = !v23;
  if ( !v23 )
  {
    v26 = CRYPTO_malloc(v11, "ssl/statem/statem_lib.c", 467);
    v19 = v26;
    if ( !v26 )
    {
      v2 = 0;
      sub_95494(a1, 80, 379, 65, (int)"ssl/statem/statem_lib.c", 469);
      v18 = a1[31];
      goto LABEL_24;
    }
    sub_BB058(v26, v21, v11);
    v21 = v19;
  }
  v24 = *(_DWORD *)(a1[31] + 632);
  if ( v24
    && *(_DWORD *)(v24 + 16) == 912
    && (sub_F89C8(v36, -1, 4097, 6, 0) <= 0 || sub_F89C8(v36, 24, 4098, -1, 0) <= 0) )
  {
    sub_95494(a1, 80, 379, 6, (int)"ssl/statem/statem_lib.c", 483);
    goto LABEL_62;
  }
  if ( *a1 == 768 )
  {
    if ( sub_D16D8(v5, v35, v34) <= 0 || !sub_D1948(v5, 29, *(_DWORD *)(a1[285] + 4), a1[285] + 72, v32) )
    {
      sub_95494(a1, 80, 379, 6, (int)"ssl/statem/statem_lib.c", 493);
LABEL_62:
      v2 = 0;
      v18 = a1[31];
      goto LABEL_24;
    }
    if ( sub_D97EC(v5, v21, v11) > 0 )
      goto LABEL_38;
    v31 = 498;
LABEL_76:
    sub_95494(a1, 51, 379, 123, (int)"ssl/statem/statem_lib.c", v31);
    goto LABEL_62;
  }
  if ( sub_D98A4(v5, v21, v11, v35, v34) <= 0 )
  {
    v31 = 505;
    goto LABEL_76;
  }
LABEL_38:
  if ( a1[7] || (v27 = (int *)a1[1], (*(_DWORD *)(v27[25] + 48) & 8) != 0) )
  {
    v2 = 3;
    v18 = a1[31];
  }
  else
  {
    v28 = *v27;
    v29 = v28 >= 772;
    v30 = v28 == 0x10000;
    v18 = a1[31];
    if ( v30 )
      v29 = 0;
    if ( v29 )
    {
      if ( *(_DWORD *)(v18 + 536) == 1 )
        v2 = 2;
      else
        v2 = 3;
    }
    else
    {
      v2 = 3;
    }
  }
LABEL_24:
  BIO_vfree_0(*(_DWORD *)(v18 + 212));
  *(_DWORD *)(a1[31] + 212) = 0;
  sub_D1504(v5);
  CRYPTO_free(v19, "ssl/statem/statem_lib.c", 527);
  return v2;
}
