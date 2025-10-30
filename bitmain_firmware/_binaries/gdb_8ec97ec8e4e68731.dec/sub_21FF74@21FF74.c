void __fastcall sub_21FF74(int **a1, int a2, int a3, char *s, char a5, _BYTE *a6)
{
  const char *v8; // r8
  int v9; // r3
  const char *v10; // r12
  const char *v11; // r1
  int v12; // r2
  int v13; // r0
  const char *v14; // r4
  size_t v15; // r0
  size_t v16; // r4
  int **v17; // r2
  int v18; // r1
  void *v19; // r2
  int *v20; // r3
  int *v21; // lr
  int v22; // t1
  const char *v23; // r10
  char **v24; // r9
  int v25; // r5
  int v26; // r0
  _BOOL4 v27; // r3
  int v28; // r0
  int v29; // t1
  int **v30; // r0
  unsigned __int8 v31; // r3
  unsigned int v32; // r9
  bool v33; // zf
  int v34; // r2
  int v35; // r0
  int v36; // [sp+4h] [bp-10Ch] BYREF
  _DWORD v37[3]; // [sp+Ch] [bp-104h] BYREF
  int **v38; // [sp+18h] [bp-F8h] BYREF
  int *v39; // [sp+1Ch] [bp-F4h]
  int *v40; // [sp+20h] [bp-F0h] BYREF
  _DWORD *v41; // [sp+24h] [bp-ECh]
  char *v42; // [sp+28h] [bp-E8h]
  int *v43; // [sp+2Ch] [bp-E4h]
  int v44; // [sp+30h] [bp-E0h] BYREF
  char v45; // [sp+34h] [bp-DCh]
  char v46; // [sp+35h] [bp-DBh]
  void *ptr; // [sp+38h] [bp-D8h]
  int *v48; // [sp+3Ch] [bp-D4h]
  _DWORD v49[4]; // [sp+40h] [bp-D0h] BYREF
  void *v50; // [sp+50h] [bp-C0h]
  char v51; // [sp+58h] [bp-B8h] BYREF
  char v52; // [sp+6Ch] [bp-A4h]
  void *v53; // [sp+70h] [bp-A0h]
  char v54; // [sp+78h] [bp-98h] BYREF
  char v55; // [sp+88h] [bp-88h]
  void *v56; // [sp+8Ch] [bp-84h]
  char v57; // [sp+94h] [bp-7Ch] BYREF
  char v58; // [sp+A4h] [bp-6Ch]
  void *v59; // [sp+A8h] [bp-68h]
  char v60; // [sp+B0h] [bp-60h] BYREF
  char v61; // [sp+C0h] [bp-50h]
  int v62; // [sp+100h] [bp-10h]
  int v63; // [sp+104h] [bp-Ch]
  _DWORD v64[2]; // [sp+108h] [bp-8h]

  v8 = s;
  v36 = a2;
  if ( a2 == 1 )
  {
LABEL_11:
    v37[0] = v8;
    goto LABEL_12;
  }
  v9 = (unsigned __int8)*s;
  if ( !v9 )
  {
    v14 = v8;
    goto LABEL_51;
  }
  v10 = 0;
  v11 = v8;
  v12 = 0;
  while ( 1 )
  {
    v14 = v11 + 1;
    v13 = *((unsigned __int8 *)v11 + 1);
    if ( v12 )
    {
      if ( v12 != v9 )
      {
        if ( v9 == 92 && v12 == v13 )
        {
          v29 = *((unsigned __int8 *)v11 + 2);
          v11 += 2;
          v9 = v29;
        }
        else
        {
          ++v11;
          v9 = v13;
        }
        goto LABEL_8;
      }
      if ( !v11[1] )
        goto LABEL_41;
      v9 = *((unsigned __int8 *)v11 + 2);
      v10 = v11 + 1;
      v12 = *((unsigned __int8 *)v11 + 1);
      v11 += 2;
    }
    else
    {
      v10 = v11;
      v12 = v9;
      ++v11;
      v9 = v13;
    }
    if ( v12 != 39 && v12 != 34 )
      break;
LABEL_8:
    if ( !v9 )
    {
      if ( v12 != 39 )
        return;
      v8 = v10 + 1;
      goto LABEL_11;
    }
  }
  if ( v9 )
  {
    v12 = v9;
    v10 = v11;
    do
    {
      v22 = *(unsigned __int8 *)++v11;
      v9 = v22;
      if ( v12 == 39 || v12 == 34 )
        goto LABEL_8;
      v12 = v9;
      v10 = v11;
    }
    while ( v9 );
  }
  v14 = v11;
LABEL_41:
  if ( v8 >= v14 )
    goto LABEL_51;
  v23 = v14;
  v24 = off_46D5A4[0];
  while ( 1 )
  {
    v25 = *((unsigned __int8 *)v23 - 1);
    v14 = v23--;
    v26 = isalnum(v25);
    v27 = v25 == 95;
    if ( !v25 )
      v27 = 1;
    v28 = v26 || v27;
    if ( !v28 )
    {
      if ( v24[2] != (char *)3 )
        goto LABEL_51;
      if ( v25 != 58 )
        break;
    }
    if ( v23 == v8 )
    {
      v14 = v23;
      goto LABEL_51;
    }
  }
  if ( v25 == 91 )
  {
    if ( ((*(v14 - 2) - 43) & 0xFD) == 0 )
      v14 -= 2;
  }
  else
  {
    if ( v25 == 32 )
    {
      if ( v8 >= v14 )
        goto LABEL_51;
      v32 = (unsigned int)v14;
      v31 = -8;
    }
    else
    {
      v31 = v25 - 40;
      if ( (unsigned __int8)(v25 - 40) > 1u || v8 >= v14 )
        goto LABEL_51;
      v32 = (unsigned int)v14;
    }
    while ( 1 )
    {
      v33 = v25 == 32;
      if ( v25 != 32 )
        v33 = v25 == 95;
      v34 = v33;
      if ( v28 )
        v35 = 1;
      else
        v35 = v34;
      if ( v25 == 58 )
        v35 |= 1u;
      if ( v31 <= 1u )
        v35 |= 1u;
      if ( !v35 )
        break;
      v25 = *(unsigned __int8 *)(--v32 - 1);
      if ( (unsigned int)v8 >= v32 )
        break;
      v28 = isalnum(*(unsigned __int8 *)(v32 - 1));
      v31 = v25 - 40;
    }
    if ( v25 == 91 && ((*(_BYTE *)(v32 - 2) - 43) & 0xFD) == 0 )
      v14 = (const char *)(v32 - 2);
  }
LABEL_51:
  v8 = v14;
  v37[0] = v14;
LABEL_12:
  v38 = &v40;
  if ( !v8 )
    sub_33D0B8("basic_string::_M_construct null not valid");
  v15 = strlen(v8);
  v16 = v15;
  v44 = v15;
  if ( v15 > 0xF )
  {
    v30 = (int **)sub_33B2BC(&v38, &v44, 0);
    v38 = v30;
    v40 = (int *)v44;
LABEL_57:
    v15 = (size_t)memcpy(v30, v8, v16);
    v16 = v44;
    v17 = v38;
    goto LABEL_16;
  }
  if ( v15 == 1 )
  {
    v17 = &v40;
    LOBYTE(v40) = *v8;
    goto LABEL_16;
  }
  if ( v15 )
  {
    v30 = &v40;
    goto LABEL_57;
  }
  v17 = &v40;
LABEL_16:
  v39 = (int *)v16;
  *((_BYTE *)v17 + v16) = 0;
  v18 = 1;
  v19 = v38;
  v46 = 0;
  v45 = 1;
  ptr = v49;
  if ( v38 == &v40 )
  {
    v15 = (size_t)v40;
    v18 = (int)v41;
    v19 = v42;
    v20 = v43;
  }
  else
  {
    v20 = v40;
  }
  v44 = a3;
  if ( v38 == &v40 )
  {
    v49[0] = v15;
    v49[1] = v18;
    v49[2] = v19;
    v49[3] = v20;
  }
  else
  {
    ptr = v19;
  }
  v21 = v39;
  if ( v38 != &v40 )
    v49[0] = v20;
  v37[1] = &v38;
  v37[2] = sub_21F338;
  v52 = 0;
  v55 = 0;
  v58 = 0;
  v61 = 0;
  v62 = 0;
  v64[0] = 0;
  v63 = 0;
  v38 = a1;
  v40 = &v44;
  *(_DWORD *)((char *)v64 + 3) = 0;
  v39 = &v36;
  v48 = v21;
  v41 = v37;
  v42 = &a5;
  sub_21AA24(a6, (int)&v38, (int)sub_21F338);
  if ( v61 )
  {
    v61 = 0;
    if ( v59 != &v60 )
      sub_339E64(v59);
  }
  if ( !v58 || (v58 = 0, v56 == &v57) )
  {
    if ( v55 )
      goto LABEL_60;
  }
  else
  {
    sub_339E64(v56);
    if ( v55 )
    {
LABEL_60:
      v55 = 0;
      if ( v53 != &v54 )
      {
        sub_339E64(v53);
        if ( v52 )
          goto LABEL_62;
        goto LABEL_28;
      }
    }
  }
  if ( v52 )
  {
LABEL_62:
    v52 = 0;
    if ( v50 != &v51 )
      sub_339E64(v50);
  }
LABEL_28:
  if ( ptr != v49 )
    sub_339E64(ptr);
}
