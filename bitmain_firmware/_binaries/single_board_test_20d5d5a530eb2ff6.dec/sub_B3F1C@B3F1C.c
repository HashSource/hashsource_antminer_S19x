int __fastcall sub_B3F1C(
        const void **a1,
        int *a2,
        size_t *a3,
        unsigned int *a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        char a10)
{
  int v11; // r4
  int v12; // r5
  int v13; // r3
  char *v14; // r8
  int v15; // r9
  const char *v16; // r11
  int v17; // r2
  int v18; // r6
  __int64 v19; // r0
  _BOOL4 v20; // r3
  size_t v21; // r0
  int v22; // r4
  int v23; // r4
  int v24; // r9
  int v25; // r5
  char v26; // lr
  int v27; // r7
  char *v28; // r5
  int v29; // t1
  int v30; // r4
  int v32; // r4
  bool v33; // zf
  size_t v34; // r2
  unsigned int v35; // r1
  int v36; // r3
  int v37; // r3
  int v38; // r3
  int v39; // r3
  int v40; // r0
  unsigned int v41; // r1
  int v42; // r0
  bool v43; // zf
  void *v44; // r0
  size_t v45; // r3
  int v46; // r7
  int v47; // r4
  _BYTE *v48; // r6
  int v49; // r8
  char v50; // lr
  char v51; // t1
  int v52; // r4
  int v53; // r6
  int v54; // r4
  char *s; // [sp+Ch] [bp-40h]
  int v59; // [sp+18h] [bp-34h]
  int v60; // [sp+1Ch] [bp-30h]
  int v61; // [sp+1Ch] [bp-30h]
  int v62; // [sp+20h] [bp-2Ch]
  char v63; // [sp+2Bh] [bp-21h] BYREF
  _BYTE v64[32]; // [sp+2Ch] [bp-20h] BYREF

  v60 = a9 & ~(a9 >> 31);
  v11 = a5;
  v12 = a6;
  if ( (a10 & 0x40) != 0 )
  {
    v59 = 0;
    v62 = 0;
  }
  else if ( a6 < 0 )
  {
    v11 = -a5;
    v59 = 1;
    v12 = a6 - (2 * a6 + (a5 != 0));
    v62 = 45;
  }
  else
  {
    if ( (a10 & 2) == 0 )
    {
      v13 = a10 & 4;
      v59 = v13;
      if ( (a10 & 4) != 0 )
      {
        v59 = 1;
        v13 = 32;
      }
      v62 = v13;
      if ( (a10 & 8) == 0 )
        goto LABEL_7;
      goto LABEL_38;
    }
    v59 = 1;
    v62 = 43;
  }
  if ( (a10 & 8) == 0 )
  {
LABEL_7:
    s = &byte_1A4198;
    goto LABEL_8;
  }
LABEL_38:
  if ( a7 == 8 )
  {
    s = a0;
  }
  else if ( a7 == 16 )
  {
    s = &byte_1C3AB0;
  }
  else
  {
    s = &byte_1A4198;
  }
LABEL_8:
  v14 = &v63;
  v15 = 0;
  v16 = "0123456789ABCDEF";
  if ( (a10 & 0x20) == 0 )
    v16 = "0123456789abcdef";
  while ( 1 )
  {
    sub_189928(v11, v12, a7, 0);
    v18 = v15 + 1;
    *++v14 = v16[v17];
    v19 = sub_189928(v11, v12, a7, 0);
    v20 = v15 + 1 <= 25;
    v11 = v19;
    if ( !v19 )
      v20 = 0;
    v12 = HIDWORD(v19);
    if ( !v20 )
      break;
    ++v15;
  }
  if ( v15 == 25 )
    v18 = 25;
  v64[v18] = 0;
  v21 = strlen(s);
  if ( v18 >= v60 )
    v22 = a8 - v18;
  else
    v22 = a8 - v60;
  v23 = v22 - v59;
  v24 = (v60 - v18) & ~((v60 - v18) >> 31);
  v25 = (v23 - v21) & ~((int)(v23 - v21) >> 31);
  if ( (a10 & 0x10) != 0 )
  {
    if ( v24 < v25 )
      v24 = (v23 - v21) & ~((int)(v23 - v21) >> 31);
    v25 = 0;
  }
  else if ( (a10 & 1) != 0 )
  {
    v25 = -v25;
  }
  else if ( v25 )
  {
    v32 = (int)a2;
    if ( a2 )
      v32 = 1;
    v33 = a2 == 0;
    if ( !a2 )
      v33 = *a1 == 0;
    if ( v33 )
      return 0;
    v34 = *a3;
    v35 = *a4;
    if ( *a4 < *a3 )
      return 0;
    if ( v35 == v34 )
      v36 = v32 & 1;
    else
      v36 = 0;
    if ( v36 )
      goto LABEL_67;
LABEL_54:
    if ( v34 >= v35 )
      goto LABEL_57;
    v37 = (int)*a1;
    if ( !*a1 )
LABEL_81:
      v37 = *a2;
    *a3 = v34 + 1;
    *(_BYTE *)(v37 + v34) = 32;
LABEL_57:
    while ( --v25 )
    {
      if ( *a1 )
        v38 = v32 | 1;
      else
        v38 = v32;
      if ( !v38 )
        return 0;
      v34 = *a3;
      v35 = *a4;
      if ( *a3 > *a4 )
        return 0;
      if ( v35 == v34 )
        v39 = v32 & 1;
      else
        v39 = 0;
      if ( !v39 )
        goto LABEL_54;
LABEL_67:
      if ( v35 > 0x7FFFFBFF )
        return 0;
      v40 = *a2;
      v41 = v35 + 1024;
      *a4 = v41;
      if ( v40 )
      {
        v42 = CRYPTO_realloc(v40, v41, "crypto/bio/b_print.c", 838);
        if ( !v42 )
          return 0;
        v34 = *a3;
        v35 = *a4;
        *a2 = v42;
        goto LABEL_54;
      }
      v44 = (void *)CRYPTO_malloc(v41, "crypto/bio/b_print.c", 826);
      *a2 = (int)v44;
      if ( !v44 )
      {
        sub_D0048(32, 150, 65, "crypto/bio/b_print.c", 827);
        return 0;
      }
      v34 = *a3;
      if ( *a3 )
      {
        if ( !*a1 )
          return 0;
        memcpy(v44, *a1, v34);
        v34 = *a3;
      }
      v45 = *a4;
      *a1 = 0;
      if ( v45 > v34 )
        goto LABEL_81;
    }
  }
  if ( v62 )
  {
    v43 = a2 == 0;
    if ( !a2 )
      v43 = *a1 == 0;
    if ( v43 || !sub_B3E30(a1, a2, a3, a4, v62) )
      return 0;
  }
  v26 = *s;
  if ( *s )
  {
    v61 = v25;
    v27 = (int)a2;
    v28 = s;
    if ( a2 )
      v27 = 1;
    while ( 1 )
    {
      v30 = *a1 ? v27 | 1 : v27;
      if ( !v30 || !sub_B3E30(a1, a2, a3, a4, v26) )
        return 0;
      v29 = (unsigned __int8)*++v28;
      v26 = v29;
      if ( !v29 )
      {
        v25 = v61;
        break;
      }
    }
  }
  if ( v24 )
  {
    v46 = (int)a2;
    if ( a2 )
      v46 = 1;
    do
    {
      v47 = *a1 ? v46 | 1 : v46;
      if ( !v47 || !sub_B3E30(a1, a2, a3, a4, 48) )
        return 0;
    }
    while ( --v24 );
  }
  if ( v18 )
  {
    v48 = &v64[v18];
    v49 = (int)a2;
    if ( a2 )
      v49 = 1;
    do
    {
      v51 = *--v48;
      v50 = v51;
      v52 = *a1 ? v49 | 1 : v49;
      if ( !v52 || !sub_B3E30(a1, a2, a3, a4, v50) )
        return 0;
    }
    while ( v48 != v64 );
  }
  if ( v25 )
  {
    v53 = (int)a2;
    if ( a2 )
      v53 = 1;
    while ( 1 )
    {
      v54 = *a1 ? v53 | 1 : v53;
      if ( !v54 || !sub_B3E30(a1, a2, a3, a4, 32) )
        break;
      if ( !++v25 )
        return 1;
    }
    return 0;
  }
  return 1;
}
