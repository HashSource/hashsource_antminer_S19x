unsigned __int8 *__fastcall sub_32477C(char *a1, unsigned __int8 *a2, void *a3, int a4)
{
  unsigned __int8 *v4; // r5
  _BOOL4 v5; // r4
  const char *v6; // r9
  void **v9; // r6
  void **v10; // r0
  int v11; // r7
  int v12; // r9
  void **v13; // r8
  void **v14; // r10
  int j; // r5
  const char *v16; // r1
  const char *v17; // t1
  const char *v18; // t1
  bool v19; // cc
  void **v21; // r0
  int v22; // r7
  void **v23; // r10
  char *v24; // r9
  const char *v25; // r1
  const char *v26; // t1
  const char *v27; // t1
  char *v28; // r0
  size_t v29; // r5
  size_t v30; // r0
  _BYTE *v31; // r1
  size_t v32; // r0
  char *v33; // r10
  _BYTE *i; // r3
  int v35; // r7
  int v36; // r2
  int v37; // r2
  _BYTE *v38; // r5
  bool v39; // zf
  int v40; // r1
  const char **v41; // r10
  int v42; // r5
  const char *v43; // t1
  int v44; // r5
  const char **v45; // r10
  const char *v46; // t1
  unsigned __int8 *v47; // r0
  int v48; // r10
  const char **v49; // r8
  const char **v50; // r10
  const char *v51; // t1
  unsigned __int8 *v52; // r0
  unsigned __int8 *v53; // r3
  int v54; // r10
  const char **v55; // r7
  const char **v56; // r10
  const char *v57; // t1
  char *v58; // r0
  int v59; // [sp+0h] [bp-A4h] BYREF
  int v60; // [sp+4h] [bp-A0h]
  void *ptr; // [sp+8h] [bp-9Ch]
  void *v62; // [sp+Ch] [bp-98h]
  int v63; // [sp+10h] [bp-94h] BYREF
  int v64; // [sp+14h] [bp-90h] BYREF
  int v65[4]; // [sp+18h] [bp-8Ch] BYREF
  int v66; // [sp+28h] [bp-7Ch]

  v5 = a3 == 0;
  if ( !a2 )
    v5 = 1;
  if ( !a1 )
    v5 = 1;
  if ( v5 )
    v4 = 0;
  v62 = a3;
  if ( v5 )
    return v4;
  v6 = a1;
  if ( a1 != sub_3245A4(a1) )
    goto LABEL_9;
  v28 = getenv("PATH");
  if ( !v28 )
  {
    v5 = 0;
    goto LABEL_9;
  }
  ptr = v28;
  v29 = strlen(v28) + 1;
  if ( v29 == 1 )
    v29 = 2;
  v30 = strlen(v6);
  v31 = ptr;
  v32 = v30 + v29 + 1;
  if ( v32 >= 0xFC0 )
  {
    v58 = (char *)malloc(v32);
    v31 = ptr;
    v5 = (_BOOL4)v58;
    v33 = v58;
  }
  else
  {
    v33 = (char *)&v59;
  }
  for ( i = v31; ; i = v38 )
  {
    v38 = i + 1;
    v37 = (unsigned __int8)*i;
    v39 = v37 == 0;
    if ( *i )
      v39 = v37 == 58;
    if ( !v39 )
      continue;
    if ( v31 == i )
    {
      strcpy(v33, "./");
    }
    else
    {
      v35 = i - v31;
      memcpy(v33, v31, i - v31);
      v36 = (unsigned __int8)*(v38 - 2);
      if ( v36 == 47 )
        v33[v35] = 0;
      else
        v33[v35] = 47;
      if ( v36 != 47 )
        v33[v35 + 1] = 0;
    }
    strcat(v33, v6);
    if ( !access(v33, 1) && _xstat64(3, v33, v65) >= 0 && (v66 & 0xF000) == 0x8000 )
      break;
    v31 = v38;
    if ( !*(v38 - 1) )
      goto LABEL_9;
  }
  v6 = v33;
LABEL_9:
  if ( a4 )
    v4 = (unsigned __int8 *)sub_3245D0(v6);
  else
    v4 = (unsigned __int8 *)_strdup(v6);
  if ( !v4 )
  {
LABEL_25:
    free((void *)v5);
    return v4;
  }
  v9 = sub_32462C(v4, &v63);
  free(v4);
  if ( !v9 )
  {
    v4 = 0;
    goto LABEL_25;
  }
  v10 = sub_32462C(a2, &v64);
  ptr = v10;
  if ( !v10 )
  {
    v4 = 0;
    sub_3245F8(v9);
    goto LABEL_25;
  }
  v11 = v64;
  v12 = --v63;
  if ( v63 == v64 )
  {
    if ( v12 <= 0 )
      goto LABEL_24;
    v13 = v9 - 1;
    v14 = v10 - 1;
    for ( j = 0; j != v12; ++j )
    {
      v17 = (const char *)v14[1];
      ++v14;
      v16 = v17;
      v18 = (const char *)v13[1];
      ++v13;
      if ( strcmp(v18, v16) )
        break;
    }
    v19 = v11 <= j;
    if ( v11 != j )
      v19 = v12 <= 0;
    if ( v19 )
      goto LABEL_24;
  }
  v21 = sub_32462C((unsigned __int8 *)v62, v65);
  v62 = v21;
  if ( !v21 )
  {
LABEL_24:
    v4 = 0;
    sub_3245F8(v9);
    sub_3245F8((void **)ptr);
    goto LABEL_25;
  }
  v60 = v64;
  v59 = v65[0];
  if ( v64 >= v65[0] )
    v22 = v65[0];
  else
    v22 = v64;
  if ( v22 <= 0 )
  {
    v4 = 0;
  }
  else
  {
    v23 = v21 - 1;
    v4 = 0;
    v24 = (char *)ptr - 4;
    while ( 1 )
    {
      v26 = (const char *)v23[1];
      ++v23;
      v25 = v26;
      v27 = (const char *)*((_DWORD *)v24 + 1);
      v24 += 4;
      if ( strcmp(v27, v25) )
        break;
      if ( (unsigned __int8 *)v22 == ++v4 )
        goto LABEL_64;
    }
    if ( !v4 )
      goto LABEL_38;
    v22 = (int)v4;
LABEL_64:
    if ( v63 > 0 )
    {
      v41 = (const char **)v9;
      v42 = 0;
      do
      {
        v43 = *v41++;
        v42 += strlen(v43);
        v40 = v42;
      }
      while ( &v9[v63] != (void **)v41 );
    }
    else
    {
      v40 = 0;
    }
    v44 = 3 * (v60 - v22) + v40;
    if ( v59 > v22 )
    {
      v45 = (const char **)((char *)v62 + 4 * v22);
      do
      {
        v46 = *v45++;
        v44 += strlen(v46);
      }
      while ( (char *)v62 + 4 * v59 != (char *)v45 );
    }
    v47 = (unsigned __int8 *)malloc(v44 + 1);
    v4 = v47;
    if ( v47 )
    {
      v48 = v63;
      *v47 = 0;
      if ( v48 > 0 )
      {
        v49 = (const char **)&v9[v48];
        v50 = (const char **)v9;
        do
        {
          v51 = *v50++;
          strcat((char *)v4, v51);
        }
        while ( v49 != v50 );
      }
      v52 = &v4[strlen((const char *)v4)];
      if ( v64 > v22 )
      {
        v53 = &v52[3 * (v64 - v22)];
        do
        {
          *(_WORD *)v52 = 11822;
          v52 += 3;
          *(v52 - 1) = 0;
          *(v52 - 1) = 47;
        }
        while ( v52 != v53 );
      }
      v54 = v65[0];
      *v52 = 0;
      if ( v54 > v22 )
      {
        v55 = (const char **)((char *)v62 + 4 * v22);
        v56 = (const char **)((char *)v62 + 4 * v54);
        do
        {
          v57 = *v55++;
          strcat((char *)v4, v57);
        }
        while ( v56 != v55 );
      }
    }
  }
LABEL_38:
  sub_3245F8(v9);
  sub_3245F8((void **)ptr);
  sub_3245F8((void **)v62);
  free((void *)v5);
  return v4;
}
