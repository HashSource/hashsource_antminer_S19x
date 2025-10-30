_DWORD *__fastcall sub_D0F0C(_DWORD *result, int a2, _DWORD *a3, int a4, int *a5, int a6)
{
  int v6; // r6
  bool v9; // zf
  _DWORD *v10; // r4
  int *v11; // r3
  _DWORD *v12; // r1
  void **v13; // r0
  int v14; // r3
  _DWORD *v15; // r2
  void *v16; // r8
  void *v17; // r5
  void *v18; // r10
  void *v19; // r3
  void *v20; // r11
  _DWORD *v21; // r5
  _DWORD *v22; // r7
  int v23; // r4
  void *v24; // r0
  unsigned int v25; // r8
  int v26; // r10
  int *v27; // r0
  void *v28; // r3
  void *v29; // r0
  _DWORD *v30; // r5
  int v31; // r8
  int v32; // r7
  _DWORD *v33; // r0
  int v34; // r9
  int *v35; // r5
  _DWORD *v36; // r7
  const char *v37; // r11
  __int64 v38; // r2
  int *v39; // r8
  const char *v40; // r1
  void *v41; // [sp+1Ch] [bp-110h]
  _DWORD *v42; // [sp+1Ch] [bp-110h]
  int v44; // [sp+34h] [bp-F8h] BYREF
  void *v45[5]; // [sp+38h] [bp-F4h] BYREF
  void *ptr; // [sp+4Ch] [bp-E0h]
  void *v47; // [sp+50h] [bp-DCh]
  int v48; // [sp+54h] [bp-D8h]
  void *v49; // [sp+58h] [bp-D4h]
  char v50; // [sp+5Ch] [bp-D0h]
  char v51; // [sp+5Dh] [bp-CFh]
  char v52; // [sp+5Eh] [bp-CEh]
  char v53; // [sp+5Fh] [bp-CDh]
  char v54; // [sp+60h] [bp-CCh]
  char v55; // [sp+61h] [bp-CBh]
  int v56; // [sp+64h] [bp-C8h]
  int v57; // [sp+68h] [bp-C4h]
  int v58; // [sp+6Ch] [bp-C0h]
  int v59; // [sp+70h] [bp-BCh]
  int v60; // [sp+74h] [bp-B8h]
  int v61; // [sp+78h] [bp-B4h]
  int v62; // [sp+7Ch] [bp-B0h]
  int v63; // [sp+80h] [bp-ACh]
  int v64; // [sp+84h] [bp-A8h]
  int v65; // [sp+88h] [bp-A4h]
  int v66; // [sp+8Ch] [bp-A0h]
  void *s[38]; // [sp+90h] [bp-9Ch] BYREF

  v6 = (int)result;
  if ( a6 )
  {
    v9 = a4 == 1;
    if ( a4 == 1 )
      v9 = a6 == 1;
    if ( !v9 )
    {
      result[4] = 0;
      return (_DWORD *)sub_259858("Could not reset ranged breakpoint %d: multiple locations found\n", result[6]);
    }
  }
  v10 = (_DWORD *)result[7];
  if ( v10 )
  {
    v11 = (int *)result[7];
    while ( a2 && a2 != v11[12] || *((_BYTE *)v11 + 37) || *(_DWORD *)(v11[12] + 24) )
    {
      v11 = (int *)*v11;
      if ( !v11 )
        goto LABEL_80;
    }
  }
  else
  {
LABEL_80:
    if ( !a4 )
      return result;
  }
  memset(v45, 0, sizeof(v45));
  ptr = 0;
  v47 = 0;
  v48 = 0;
  v49 = 0;
  v50 = 0;
  v51 = 0;
  v52 = 0;
  v53 = 0;
  v54 = 0;
  v55 = 0;
  v56 = 0;
  v57 = 0;
  v58 = 0;
  v59 = 0;
  v60 = 0;
  v61 = 0;
  v62 = 0;
  v63 = 0;
  v64 = 0;
  v65 = 0;
  v66 = 0;
  memset(s, 0, sizeof(s));
  if ( a2 )
  {
    if ( v10 )
    {
      v12 = result + 7;
      v13 = v45;
      do
      {
        v14 = v10[12];
        v15 = (_DWORD *)*v10;
        if ( a2 == v14 )
          *v12 = v15;
        else
          v12 = v10;
        if ( a2 == v14 )
          *v10 = 0;
        else
          v10 = v15;
        if ( a2 == v14 )
        {
          *v13 = v10;
          v13 = (void **)v10;
          v10 = (_DWORD *)*v12;
        }
      }
      while ( v10 );
      v10 = v45[0];
      if ( s[30] )
        sub_339E64(s[30]);
    }
    v16 = v49;
    v17 = v47;
    v18 = ptr;
    v19 = s[13];
    v20 = s[10];
    if ( s[27] )
    {
      v41 = s[13];
      sub_339E64(s[27]);
      v19 = v41;
    }
    if ( v19 )
      sub_339E64(v19);
    if ( v20 )
      sub_339E64(v20);
    if ( v16 )
    {
      sub_C0960((int)v16);
      sub_33AC04(v16);
    }
    if ( v17 )
    {
      sub_C0960((int)v17);
      sub_33AC04(v17);
    }
    if ( v18 )
      free(v18);
  }
  else
  {
    result[7] = 0;
  }
  v21 = a3;
  v22 = &a3[10 * a4];
  if ( a3 != v22 )
  {
    v42 = v10;
    do
    {
      while ( 1 )
      {
        sub_1CD664(*v21);
        v23 = sub_CFF88(v6, (int)v21);
        if ( *(_DWORD *)(v6 + 100) )
        {
          v44 = *(_DWORD *)(v6 + 100);
          v24 = sub_92E28();
          v25 = v21[5];
          v26 = (int)v24;
          v27 = sub_C2574(v25);
          sub_1C427C(v45, &v44, v25, v27, 0);
          v28 = v45[0];
          v45[0] = 0;
          v29 = *(void **)(v23 + 20);
          *(_DWORD *)(v23 + 20) = v28;
          if ( v29 )
          {
            free(v29);
            if ( v45[0] )
              free(v45[0]);
          }
          sub_92E40(v26);
        }
        if ( a6 )
          break;
        v21 += 10;
        if ( v21 == v22 )
          goto LABEL_51;
      }
      v21 += 10;
      *(_DWORD *)(v23 + 56) = 1 - a3[5] + sub_C8B2C(*a5, a5[1], a5[2], a5[3], a5[4], a5[5], a5[6], a5[7], a5[8], a5[9]);
    }
    while ( v21 != v22 );
LABEL_51:
    v10 = v42;
  }
  v30 = *(_DWORD **)(v6 + 28);
  v31 = sub_323AE0(13, sub_324230, sub_25AA0C, 0, sub_93094, sub_C6E5C);
  if ( !v30 )
  {
LABEL_57:
    v34 = 0;
    result = (_DWORD *)sub_323B84(v31);
    goto LABEL_58;
  }
  while ( 1 )
  {
    v32 = v30[21];
    if ( v32 )
      break;
LABEL_56:
    v30 = (_DWORD *)*v30;
    if ( !v30 )
      goto LABEL_57;
  }
  v33 = (_DWORD *)sub_324030(v31, v30[21], 1);
  if ( !*v33 )
  {
    *v33 = v32;
    goto LABEL_56;
  }
  v34 = 1;
  result = (_DWORD *)sub_323B84(v31);
LABEL_58:
  v35 = *(int **)(v6 + 28);
  if ( !v10 )
  {
    LODWORD(v38) = 1;
    HIDWORD(v38) = v35 == 0;
    goto LABEL_78;
  }
  v36 = v10;
LABEL_60:
  while ( 2 )
  {
    while ( 2 )
    {
      if ( *((_BYTE *)v36 + 38) || (v37 = (const char *)v36[21]) == 0 )
      {
LABEL_68:
        v36 = (_DWORD *)*v36;
        if ( !v36 )
          goto LABEL_69;
        continue;
      }
      break;
    }
    if ( v34 )
    {
      if ( v35 )
      {
        while ( 1 )
        {
          result = (_DWORD *)((int (__fastcall *)(_DWORD *, int *))loc_CF960)(v36, v35);
          if ( result )
            break;
          v35 = (int *)*v35;
          if ( !v35 )
            goto LABEL_90;
        }
        *((_BYTE *)v35 + 38) = 0;
        v35 = *(int **)(v6 + 28);
      }
      goto LABEL_68;
    }
    if ( !v35 )
      goto LABEL_68;
    v39 = v35;
    while ( 1 )
    {
      v40 = (const char *)v39[21];
      if ( v40 )
      {
        result = (_DWORD *)strcmp(v37, v40);
        if ( !result )
          break;
      }
      v39 = (int *)*v39;
      if ( !v39 )
      {
        v36 = (_DWORD *)*v36;
        if ( v36 )
          goto LABEL_60;
        goto LABEL_69;
      }
    }
    *((_BYTE *)v39 + 38) = 0;
LABEL_90:
    v36 = (_DWORD *)*v36;
    v35 = *(int **)(v6 + 28);
    if ( v36 )
      continue;
    break;
  }
LABEL_69:
  if ( !v35
    || v35[13] != v10[13]
    || *((unsigned __int8 *)v35 + 37) != *((unsigned __int8 *)v10 + 37)
    || *((unsigned __int8 *)v35 + 38) != *((unsigned __int8 *)v10 + 38) )
  {
    return (_DWORD *)sub_1B9D50(v6);
  }
  while ( 1 )
  {
    v10 = (_DWORD *)*v10;
    v35 = (int *)*v35;
    LODWORD(v38) = v10 == 0;
    HIDWORD(v38) = v35 == 0;
    if ( v38 )
      break;
    if ( v10[13] != v35[13]
      || *((unsigned __int8 *)v10 + 37) != *((unsigned __int8 *)v35 + 37)
      || *((unsigned __int8 *)v10 + 38) != *((unsigned __int8 *)v35 + 38) )
    {
      return (_DWORD *)sub_1B9D50(v6);
    }
  }
LABEL_78:
  if ( HIDWORD(v38) != (_DWORD)v38 )
    return (_DWORD *)sub_1B9D50(v6);
  return result;
}
