int __fastcall sub_329A10(int a1, unsigned __int8 *a2, int a3)
{
  unsigned __int8 *v3; // r3
  unsigned __int8 *v5; // r6
  int v7; // r9
  unsigned __int8 *v8; // r2
  unsigned __int8 *v9; // r5
  unsigned __int8 *v10; // r12
  unsigned __int8 *v11; // r0
  int v12; // r4
  bool v13; // zf
  int v14; // r10
  int v15; // r2
  bool v16; // cf
  unsigned int v17; // lr
  int v18; // lr
  int v19; // r0
  unsigned __int8 *v20; // r5
  int v21; // r1
  int v22; // r12
  unsigned __int16 *v23; // lr
  int v24; // r1
  int v25; // t1
  int v26; // r3
  unsigned int v27; // lr
  unsigned int v28; // r2
  unsigned int v29; // r12
  unsigned int v30; // r11
  unsigned int v31; // r0
  unsigned int v32; // t1
  unsigned int v33; // r2
  unsigned int v34; // r1
  _BOOL4 v35; // r2
  int v36; // lr
  int v37; // lr
  int v38; // r4
  int v39; // r4
  unsigned __int16 *v41; // r0
  int v42; // r11
  unsigned __int8 *v43; // r11
  const char *v44; // r4
  const char *v45; // lr
  unsigned __int8 *v46; // r5
  int v47; // r1
  int v48; // t1
  int v49; // t1
  unsigned __int8 *v50; // r1
  const char *v51; // r4
  const char *v52; // lr
  int v53; // r1
  int v54; // t1
  int v55; // t1
  int v56; // r1
  int v57; // r2
  int v58; // t1
  int v59; // r2
  unsigned __int8 *v60; // r1
  int v61; // t1
  bool v62; // zf
  char v63; // r2
  unsigned __int16 *v64; // r0
  char v65; // [sp+Ch] [bp-38h]
  unsigned __int16 *v66; // [sp+10h] [bp-34h]
  int v67; // [sp+10h] [bp-34h]
  unsigned __int16 *ptr; // [sp+14h] [bp-30h]
  int v69; // [sp+18h] [bp-2Ch] BYREF
  int v70; // [sp+1Ch] [bp-28h] BYREF
  char v71; // [sp+20h] [bp-24h] BYREF

  v3 = 0;
  v5 = 0;
  v7 = 0;
  v8 = a2;
  v9 = a2;
  v65 = 0;
  v70 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      v10 = v8;
      v11 = v8 + 1;
      v12 = *v8;
      if ( (unsigned int)(v12 - 48) <= 9 )
      {
        ++v7;
        v5 = v8;
        goto LABEL_34;
      }
      v13 = v12 == 46;
      if ( v12 == 46 )
        v13 = v3 == 0;
      if ( !v13 )
        break;
      v3 = v8;
      if ( v9 == v8 )
        v9 = v8 + 1;
LABEL_34:
      ++v8;
    }
    if ( a2 != v8 )
      break;
    if ( v12 == 45 )
    {
      ++v9;
      v65 = 0x80;
      goto LABEL_34;
    }
    if ( v12 != 43 )
      break;
    ++v9;
    ++v8;
  }
  if ( !v5 )
  {
    v37 = (int)v3;
    if ( v3 )
      v37 = 1;
    if ( *v8 )
      v38 = v37;
    else
      v38 = 1;
    v70 = 1;
    if ( !v38 )
    {
      v43 = v8 - 1;
      v44 = "infinity";
      v45 = "INFINITY";
      v46 = v8 - 1;
      *(_BYTE *)(a1 + 8) = 0;
      *(_DWORD *)a1 = 1;
      *(_DWORD *)(a1 + 4) = 0;
      *(_WORD *)(a1 + 10) = 0;
      while ( 1 )
      {
        v48 = *++v46;
        v47 = v48;
        v49 = *(unsigned __int8 *)v44++;
        if ( v47 != v49 && *(unsigned __int8 *)v45 != v47 )
          break;
        ++v45;
        if ( !v47 )
        {
LABEL_101:
          *(_BYTE *)(a1 + 8) = v65 | 0x40;
          return a1;
        }
      }
      v51 = "inf";
      v52 = "INF";
      while ( 1 )
      {
        v54 = *++v43;
        v53 = v54;
        v55 = *(unsigned __int8 *)v51++;
        if ( v53 != v55 && *(unsigned __int8 *)v52 != v53 )
          break;
        ++v52;
        if ( !v53 )
          goto LABEL_101;
      }
      *(_BYTE *)(a1 + 8) = v65 | 0x20;
      v56 = *v8 & 0xDF;
      if ( v56 == 83 )
      {
        v10 = v8 + 1;
        *(_BYTE *)(a1 + 8) = v65 | 0x10;
        v56 = v8[1] & 0xDF;
      }
      if ( v56 == 78 && (v10[1] & 0xDF) == 0x41 && (v10[2] & 0xDF) == 0x4E )
      {
        v57 = v10[3];
        v9 = v10 + 3;
        if ( v57 == 48 )
        {
          do
          {
            v58 = *++v9;
            v57 = v58;
          }
          while ( v58 == 48 );
        }
        if ( !v57 )
          return a1;
        v59 = *v9;
        if ( (unsigned int)(v59 - 48) <= 9 )
        {
          v60 = v9;
          do
          {
            v5 = v60;
            v61 = *++v60;
            v59 = v61;
            ++v7;
          }
          while ( (unsigned int)(v61 - 48) <= 9 );
        }
        if ( !v59 )
        {
          v14 = *(_DWORD *)a3;
          if ( *(_DWORD *)a3 > v7 )
            goto LABEL_125;
          v62 = v14 == v7;
          if ( v14 >= v7 )
            v62 = *(_BYTE *)(a3 + 24) == 0;
          if ( v62 )
          {
LABEL_125:
            v63 = *(_BYTE *)(a1 + 8);
            v12 = 0;
            v70 = 0;
            v65 = v63;
            goto LABEL_14;
          }
        }
      }
    }
    goto LABEL_67;
  }
  if ( !*v8 )
  {
    v14 = *(_DWORD *)a3;
    goto LABEL_14;
  }
  v70 = 1;
  if ( (v12 & 0xDF) != 0x45 )
    goto LABEL_67;
  v27 = v8[1];
  if ( v27 == 45 )
  {
    v67 = 1;
    v11 = v8 + 2;
    v27 = v8[2];
  }
  else
  {
    if ( v27 == 43 )
    {
      v27 = v8[2];
      v11 = v8 + 2;
    }
    v67 = 0;
  }
  if ( !v27 )
    goto LABEL_67;
  if ( v27 != 48 )
  {
    if ( (unsigned __int8)(v27 - 48) <= 9u )
    {
      v29 = v11[1];
      v50 = v11;
      goto LABEL_48;
    }
    goto LABEL_67;
  }
  v28 = v11[1];
  if ( v11[1] )
  {
    while ( 1 )
    {
      v50 = v11 + 1;
      if ( v28 != 48 )
        break;
      v28 = v11[2];
      ++v11;
      if ( !v50[1] )
        goto LABEL_102;
    }
    if ( v28 - 48 <= 9 )
    {
      v29 = v11[2];
      v27 = v28;
      goto LABEL_48;
    }
    goto LABEL_67;
  }
  v50 = v11;
LABEL_102:
  v29 = 0;
LABEL_48:
  v30 = (unsigned int)(v50 + 1);
  v31 = v27;
  v12 = 0;
  while ( 1 )
  {
    v33 = 10 * v12 + v31;
    v31 = v29;
    v12 = v33 - 48;
    if ( v29 - 48 > 9 )
      break;
    v32 = *(unsigned __int8 *)++v30;
    v29 = v32;
  }
  if ( v29 )
  {
LABEL_67:
    v39 = 1;
LABEL_68:
    sub_327DE4(a1, v39, a3);
    return a1;
  }
  v34 = (unsigned int)(v50 + 10);
  if ( v34 <= v30 )
  {
    v35 = v34 < v30;
    LOWORD(v34) = -27650;
    v36 = v27 > 0x31 ? v35 | 1 : v35;
    HIWORD(v34) = 30517;
    if ( v36 )
      v12 = v34;
  }
  v14 = *(_DWORD *)a3;
  if ( v67 )
    v12 = -v12;
  v70 = 0;
LABEL_14:
  v15 = *v9;
  if ( v15 == 48 && v9 < v5 )
  {
    while ( 1 )
    {
      if ( v15 != 46 )
      {
        if ( v15 != 48 )
          goto LABEL_15;
        --v7;
      }
      if ( v5 == ++v9 )
        break;
      v15 = *v9;
    }
    v9 = v5;
  }
LABEL_15:
  v16 = 1;
  if ( v3 )
    v16 = v3 >= v5;
  if ( !v16 )
    v12 -= v5 - v3;
  if ( v14 < v7 )
  {
    if ( v7 > 49 )
    {
      v42 = v7 + 2;
      v17 = (v7 + 2) / 3u;
      if ( (int)(2 * v17) > 30 )
      {
        v64 = (unsigned __int16 *)malloc(2 * v17);
        v66 = v64;
        if ( v64 )
        {
          ptr = v64;
          goto LABEL_95;
        }
LABEL_75:
        v39 = v70 | 0x10;
        v70 |= 0x10u;
        goto LABEL_68;
      }
    }
    else
    {
      v17 = *((unsigned __int8 *)&dword_438B18[5] + v7);
      if ( 2 * v17 > 0x1E )
      {
        v41 = (unsigned __int16 *)malloc(2 * v17);
        v66 = v41;
        if ( v41 )
        {
          ptr = v41;
LABEL_22:
          v17 = *((unsigned __int8 *)&dword_438B18[5] + v7);
          goto LABEL_23;
        }
        goto LABEL_75;
      }
    }
    ptr = 0;
    v66 = (unsigned __int16 *)&v71;
    goto LABEL_23;
  }
  v66 = (unsigned __int16 *)(a1 + 10);
  if ( v7 <= 49 )
  {
    ptr = 0;
    goto LABEL_22;
  }
  v42 = v7 + 2;
  ptr = 0;
LABEL_95:
  v17 = v42 / 3;
LABEL_23:
  v18 = v17 + 0x7FFFFFFF;
  v19 = 0;
  v20 = v9 - 1;
  v21 = (v18 * 2) >> 1;
  v22 = 0;
  v23 = &v66[v18];
  v24 = -3 * v21 + v7;
  while ( 1 )
  {
    do
    {
      v25 = *++v20;
      v26 = v25 + v19 + v22 - 48;
    }
    while ( v25 == 46 );
    --v24;
    v19 = 0;
    if ( v5 == v20 )
      break;
    v22 = 0;
    if ( v24 > 0 )
    {
      v19 = 2 * v26;
      v22 = 8 * v26;
    }
    else
    {
      *v23-- = v26;
    }
    if ( v24 <= 0 )
      v24 = 3;
  }
  *v23 = v26;
  *(_DWORD *)(a1 + 4) = v12;
  *(_DWORD *)a1 = v7;
  *(_BYTE *)(a1 + 8) = v65;
  if ( v14 < v7 )
  {
    v69 = 0;
    sub_328A00(a1, (int *)a3, v66, v7, &v69, &v70);
    sub_329598((_DWORD *)a1, (int *)a3, &v69, &v70);
    v39 = v70;
  }
  else
  {
    if ( *(_DWORD *)(a3 + 8) - v7 >= v12 || v12 - 1 > *(_DWORD *)(a3 + 4) - v14 )
    {
      v69 = 0;
      sub_329598((_DWORD *)a1, (int *)a3, &v69, &v70);
    }
    v39 = v70;
  }
  free(ptr);
  if ( v39 )
    goto LABEL_68;
  return a1;
}
