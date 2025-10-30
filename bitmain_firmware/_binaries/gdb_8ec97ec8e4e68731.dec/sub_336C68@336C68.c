int __fastcall sub_336C68(unsigned __int8 *a1, char *s, int a3, int (__fastcall *a4)(char *), int *a5)
{
  size_t v8; // r0
  int v9; // r1
  DIR *v10; // r7
  int v11; // r3
  unsigned int v12; // r4
  _DWORD *v13; // r5
  size_t v14; // r6
  void *v15; // r0
  unsigned int v16; // r9
  DIR *v17; // r0
  int v18; // r1
  int v19; // r0
  char *v20; // r6
  int v21; // r3
  unsigned int v22; // r2
  bool v23; // zf
  _DWORD *v24; // r0
  char *v25; // r0
  _DWORD *v26; // r8
  _DWORD *v27; // r9
  int v28; // r6
  void *v29; // t1
  _DWORD *v30; // r6
  size_t v31; // r4
  void *v32; // r0
  void *v33; // r5
  int v34; // r4
  _BYTE *v35; // r0
  _BOOL4 v36; // r0
  void *v37; // r0
  int v38; // r4
  bool v40; // zf
  _BOOL4 v41; // r0
  int v42; // r0
  _DWORD *v43; // r8
  _DWORD *v44; // r6
  _DWORD *i; // r0
  int (__fastcall *v46)(_BYTE *, _BYTE *); // lr
  _DWORD *v47; // r3
  char *v48; // r2
  int v49; // t1
  _DWORD *v50; // r9
  int *v51; // r5
  int v52; // r6
  int v53; // r3
  int v54; // r2
  unsigned int v55; // [sp+8h] [bp-194h]
  int v56; // [sp+Ch] [bp-190h]
  int v57; // [sp+Ch] [bp-190h]
  size_t n; // [sp+1Ch] [bp-180h]
  int v61; // [sp+20h] [bp-17Ch]
  int v62; // [sp+24h] [bp-178h]
  _BYTE v63[104]; // [sp+28h] [bp-174h] BYREF
  _DWORD v64[67]; // [sp+90h] [bp-10Ch] BYREF

  v8 = strlen(s);
  if ( (a3 & 0x40) != 0 )
    v9 = 0;
  n = v8;
  if ( (a3 & 0x40) == 0 )
    v9 = 1;
  v64[0] = 0;
  v64[1] = 64;
  v10 = (DIR *)sub_336BB8(a1, v9);
  if ( !v10 )
  {
    v11 = a3;
    if ( (a3 & 0x810) != 0 )
    {
      v12 = 0;
      v13 = v64;
      v61 = v11 | 0x10;
      goto LABEL_8;
    }
    v31 = strlen((const char *)a1) + 1;
    v32 = malloc(n + 1 + v31);
    v33 = v32;
    if ( !v32 )
      return 1;
    v35 = memcpy(v32, s, n);
    v35[n] = 47;
    memcpy(&v35[n + 1], a1, v31);
    if ( (a3 & 0x200) != 0 )
      v36 = ((int (__fastcall *)(void *, _BYTE *))a5[8])(v33, v63) == 0;
    else
      v36 = sub_349220(v33, v63) == 0;
    v23 = !v36;
    v37 = v33;
    if ( !v23 )
    {
      v10 = 0;
      v13 = v64;
      v12 = 0;
      v61 = a3 | 0x10;
      free(v37);
      goto LABEL_8;
    }
    v38 = a3 & 0x10;
    free(v33);
LABEL_49:
    if ( v38 )
    {
      v10 = 0;
      v13 = v64;
      v12 = 0;
      v61 = a3;
      goto LABEL_8;
    }
    return 3;
  }
  if ( (a3 & 0x200) == 0 )
  {
    v17 = opendir(s);
    v10 = v17;
    if ( v17 )
    {
      v62 = dirfd(v17);
      goto LABEL_13;
    }
LABEL_84:
    if ( *_errno_location() != 20 && (a4 && a4(s) || (a3 & 1) != 0) )
      return 2;
    v38 = a3 & 0x10;
    goto LABEL_49;
  }
  v10 = (DIR *)((int (__fastcall *)(char *))a5[6])(s);
  if ( !v10 )
    goto LABEL_84;
  v62 = -1;
LABEL_13:
  v12 = 0;
  v16 = 0;
  v13 = v64;
  if ( (a3 & 0x80) != 0 )
    v18 = 0;
  else
    v18 = 4;
  v55 = (a3 >> 5) & 2 | v18;
  v61 = a3 | 0x100;
LABEL_17:
  if ( (a3 & 0x200) != 0 )
  {
    while ( 1 )
    {
      v19 = ((int (__fastcall *)(DIR *))a5[5])(v10);
      if ( !v19 )
        break;
LABEL_19:
      v20 = (char *)(v19 + 19);
      v21 = *(unsigned __int8 *)(v19 + 18);
      if ( !*(_QWORD *)v19 )
        goto LABEL_17;
      v22 = ((a3 ^ 0x2000u) >> 13) & 1;
      if ( v21 == 4 )
        v22 = 1;
      if ( v22 )
      {
        v56 = *(unsigned __int8 *)(v19 + 18);
        if ( sub_3361EC((char *)a1, (char *)(v19 + 19), v55) )
          goto LABEL_17;
        v23 = v56 == 10;
        if ( v56 != 10 )
          v23 = v56 == 0;
        if ( !v23 )
        {
LABEL_27:
          if ( v13[1] == v12 )
          {
            v57 = 2 * v12;
            if ( v12 > 0x1FFFFFFE )
              goto LABEL_33;
            v24 = malloc(8 * v12 + 8);
            if ( !v24 )
              goto LABEL_33;
            v12 = 0;
            *v24 = v13;
            v13 = v24;
            v24[1] = v57;
          }
          v25 = _strdup(v20);
          v13[v12 + 2] = v25;
          if ( v25 )
          {
            ++v16;
            ++v12;
            if ( v16 < ~a5[2] )
              goto LABEL_17;
          }
          goto LABEL_33;
        }
      }
      else
      {
        v40 = v21 == 10;
        if ( v21 != 10 )
          v40 = v21 == 0;
        if ( !v40 || sub_3361EC((char *)a1, (char *)(v19 + 19), v55) )
          goto LABEL_17;
      }
      if ( (a3 & 0x200) != 0 )
        v41 = sub_336AD4(s, n, v20, (int (__fastcall **)(_BYTE *, _BYTE *))a5 + 8);
      else
        v41 = sub_34922C(v62, v20, v63, 0) == 0;
      if ( v41 )
        goto LABEL_27;
      if ( (a3 & 0x200) == 0 )
        goto LABEL_18;
    }
  }
  else
  {
LABEL_18:
    v19 = readdir64(v10);
    if ( v19 )
      goto LABEL_19;
  }
  if ( v16 )
    goto LABEL_63;
  if ( (a3 & 0x10) == 0 )
  {
    v34 = 3;
    goto LABEL_79;
  }
LABEL_8:
  v14 = strlen((const char *)a1);
  v15 = malloc(v14 + 1);
  v13[v12 + 2] = v15;
  if ( !v15 )
    goto LABEL_33;
  ++v12;
  v16 = 1;
  *((_BYTE *)memcpy(v15, a1, v14) + v14) = 0;
LABEL_63:
  v42 = a5[2];
  if ( 0x3FFFFFFF - *a5 >= v42 + 1 + v16 )
  {
    v43 = realloc((void *)a5[1], 4 * (*a5 + v42 + 1 + v16));
    if ( v43 )
    {
      v44 = v64;
      for ( i = v13; ; i = v50 )
      {
        if ( v12 )
        {
          v46 = (int (__fastcall *)(_BYTE *, _BYTE *))*a5;
          v47 = i + 1;
          v48 = (char *)&v43[*a5 + a5[2] - 1];
          do
          {
            v49 = v47[1];
            ++v47;
            *((_DWORD *)v48 + 1) = v49;
            v48 += 4;
          }
          while ( v47 != &i[v12 + 1] );
          *a5 = (int)v46 + v12;
        }
        v50 = (_DWORD *)*i;
        if ( !*i )
          break;
        v12 = v50[1];
        if ( i == v44 )
          v44 = (_DWORD *)*i;
        else
          free(i);
      }
      if ( i != v64 )
        _assert_fail("old == &init_names", "../.././gnulib/import/glob.c", 0x6F3u, "glob_in_dir");
      v53 = a5[2];
      v34 = *i;
      v54 = *a5;
      a5[1] = (int)v43;
      v43[v53 + v54] = 0;
      a5[3] = v61;
      goto LABEL_78;
    }
  }
LABEL_33:
  v26 = v64;
  while ( 1 )
  {
    if ( v12 )
    {
      v27 = v13 + 1;
      v28 = 0;
      do
      {
        ++v28;
        v29 = (void *)v27[1];
        ++v27;
        free(v29);
      }
      while ( v28 != v12 );
    }
    v30 = (_DWORD *)*v13;
    if ( !*v13 )
      break;
    v12 = v30[1];
    if ( v13 == v26 )
      v26 = (_DWORD *)*v13;
    else
      free(v13);
    v13 = v30;
  }
  if ( v13 != v64 )
    _assert_fail("old == &init_names", "../.././gnulib/import/glob.c", 0x6D8u, "glob_in_dir");
  v34 = 1;
LABEL_78:
  if ( !v10 )
    return v34;
LABEL_79:
  v51 = _errno_location();
  v52 = *v51;
  if ( (v61 & 0x200) != 0 )
    ((void (__fastcall *)(DIR *))a5[4])(v10);
  else
    closedir(v10);
  *v51 = v52;
  return v34;
}
