int __fastcall sub_B0A68(size_t **a1, _BYTE **a2, unsigned __int8 *a3, int a4, char a5)
{
  int v6; // r1
  int v9; // r2
  size_t **v10; // r8
  int (__fastcall *v11)(size_t **, _DWORD, int *, unsigned __int8 *); // r5
  int v12; // r0
  int v13; // r3
  char v14; // cc
  int v15; // r5
  int v16; // r9
  int v17; // r10
  int v18; // r3
  _BYTE *v19; // r0
  void (__fastcall *v20)(size_t **, _BYTE *, int *, unsigned __int8 *); // r11
  int result; // r0
  bool v22; // zf
  int v23; // r3
  bool v24; // zf
  int *v25; // r1
  int **v26; // r1
  int v27; // r3
  size_t *v28; // r2
  int v29; // r3
  int v30; // t1
  int *v31; // r1
  int v32; // r2
  int *v33; // r2
  unsigned __int8 *v34; // r1
  size_t v35; // r2
  bool v36; // zf
  _BYTE **v37; // r1
  int v38; // r2
  _BYTE **v39; // r1
  size_t *v40; // r3
  bool v41; // zf
  char v42; // cc
  unsigned __int8 v43; // [sp+Fh] [bp-Dh] BYREF
  int v44; // [sp+10h] [bp-Ch] BYREF
  _BYTE *v45; // [sp+14h] [bp-8h] BYREF

  v6 = *((_DWORD *)a3 + 4);
  v9 = *((_DWORD *)a3 + 1);
  v10 = a1;
  v44 = v9;
  if ( v6 )
  {
    v11 = *(int (__fastcall **)(size_t **, _DWORD, int *, unsigned __int8 *))(v6 + 24);
    if ( v11 )
    {
      v12 = v11(a1, 0, &v44, a3);
      v13 = v44;
LABEL_4:
      v14 = (v13 != -3) & __CFADD__(v13, 3);
      if ( v13 != -3 )
        v14 = (unsigned int)(v13 - 16) > 1;
      if ( !v14 )
      {
        v15 = v12;
        v16 = 0;
        if ( v12 != -1 )
          goto LABEL_10;
        return 0;
      }
LABEL_28:
      v15 = v12;
      v16 = 1;
      if ( v12 == -1 )
        return 0;
      goto LABEL_10;
    }
  }
  v23 = *a3;
  v24 = v23 == 0;
  if ( !*a3 )
    v24 = v9 == 1;
  if ( v24 )
    goto LABEL_36;
  v25 = (int *)*a1;
  if ( !*a1 )
    return 0;
  if ( v23 == 5 )
  {
    v13 = v25[1];
    v26 = (int **)a1;
    v44 = v13;
  }
  else
  {
    if ( v9 != -4 )
    {
LABEL_36:
      v13 = v9;
      v26 = (int **)a1;
      goto LABEL_37;
    }
    v30 = *v25;
    v26 = (int **)(v25 + 1);
    v13 = v30;
    v44 = v30;
  }
LABEL_37:
  switch ( v13 )
  {
    case 1:
      v31 = *v26;
      if ( v31 == (int *)-1 )
        return 0;
      if ( v9 == -4 )
      {
        v15 = 1;
        v16 = 1;
        goto LABEL_11;
      }
      v32 = *((_DWORD *)a3 + 5);
      if ( v31 )
      {
        if ( v32 > 0 )
          return 0;
      }
      else if ( !v32 )
      {
        return 0;
      }
      v15 = 1;
      goto LABEL_50;
    case 2:
    case 10:
      v12 = sub_126550(*v26, 0);
      v13 = v44;
      goto LABEL_4;
    case 3:
      v12 = sub_12581C(*v26, 0);
      v13 = v44;
      goto LABEL_4;
    case 5:
      v15 = 0;
      goto LABEL_50;
    case 6:
      v12 = (*v26)[3];
      v22 = v12 == 0;
      if ( v12 )
        v22 = (*v26)[4] == 0;
      if ( !v22 )
        goto LABEL_28;
      return 0;
    default:
      v33 = *v26;
      if ( *((_DWORD *)a3 + 5) != 2048 || (v33[3] & 0x10) == 0 )
      {
        v12 = *v33;
        goto LABEL_4;
      }
      v42 = (v13 != -3) & __CFADD__(v13, 3);
      if ( v13 != -3 )
        v42 = (unsigned int)(v13 - 16) > 1;
      if ( !v42 )
      {
        v16 = 0;
        v17 = 2;
        v15 = 0;
        goto LABEL_12;
      }
      v15 = -2;
LABEL_50:
      v16 = 1;
      break;
  }
LABEL_10:
  if ( v15 != -2 )
  {
LABEL_11:
    v17 = 0;
    goto LABEL_12;
  }
  v17 = 2;
  v15 = 0;
LABEL_12:
  if ( a4 == -1 )
    a4 = v13;
  if ( !a2 )
    goto LABEL_22;
  if ( v16 )
    sub_ADE9C(a2, v17, v15, a4, a5);
  v18 = *((_DWORD *)a3 + 4);
  v19 = *a2;
  v45 = *a2;
  if ( v18 )
  {
    v20 = *(void (__fastcall **)(size_t **, _BYTE *, int *, unsigned __int8 *))(v18 + 24);
    if ( v20 )
    {
      v20(v10, v19, &v44, a3);
      goto LABEL_20;
    }
  }
  if ( *a3 )
  {
    v28 = *v10;
    if ( !*v10 )
      goto LABEL_20;
    if ( *a3 == 5 )
    {
      v29 = v28[1];
      v44 = v29;
      goto LABEL_43;
    }
    v27 = *((_DWORD *)a3 + 1);
  }
  else
  {
    v27 = *((_DWORD *)a3 + 1);
    if ( v27 == 1 )
    {
LABEL_42:
      v29 = v44;
      goto LABEL_43;
    }
    v28 = *v10;
    if ( !*v10 )
      goto LABEL_20;
  }
  if ( v27 != -4 )
    goto LABEL_42;
  v10 = (size_t **)(v28 + 1);
  v29 = *v28;
  v44 = *v28;
LABEL_43:
  switch ( v29 )
  {
    case 1:
      if ( *v10 == (size_t *)-1 )
        break;
      if ( *((_DWORD *)a3 + 1) == -4 )
        goto LABEL_76;
      v38 = *((_DWORD *)a3 + 5);
      if ( *v10 )
      {
        if ( v38 <= 0 )
        {
LABEL_76:
          v35 = 1;
          v43 = (unsigned __int8)*v10;
          v34 = &v43;
          goto LABEL_67;
        }
      }
      else if ( v38 )
      {
        goto LABEL_76;
      }
      break;
    case 2:
    case 10:
      v39 = &v45;
      if ( !v19 )
        v39 = 0;
      sub_126550(*v10, v39);
      break;
    case 3:
      v37 = &v45;
      if ( !v19 )
        v37 = 0;
      sub_12581C(*v10, v37);
      break;
    case 5:
      break;
    case 6:
      v34 = (unsigned __int8 *)(*v10)[4];
      v35 = (*v10)[3];
      v36 = v35 == 0;
      if ( v35 )
        v36 = v34 == 0;
      if ( v36 )
        break;
LABEL_67:
      if ( v19 )
        goto LABEL_68;
      break;
    default:
      v40 = *v10;
      if ( *((_DWORD *)a3 + 5) == 2048 && (v40[3] & 0x10) != 0 )
      {
        if ( v19 )
        {
          v40[2] = (size_t)v19;
          *v40 = 0;
        }
      }
      else
      {
        v35 = *v40;
        v41 = *v40 == 0;
        if ( *v40 )
          v41 = v19 == 0;
        if ( !v41 )
        {
          v34 = (unsigned __int8 *)v40[2];
LABEL_68:
          memcpy(v19, v34, v35);
        }
      }
      break;
  }
LABEL_20:
  if ( v17 )
    sub_AE020(a2);
  else
    *a2 += v15;
LABEL_22:
  result = v15;
  if ( v16 )
    return sub_AE038(v17, v15, a4);
  return result;
}
