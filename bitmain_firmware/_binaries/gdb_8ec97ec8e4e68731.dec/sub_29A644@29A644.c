int __fastcall sub_29A644(const char *a1, int a2, int a3)
{
  int v3; // r4
  char *v5; // r0
  char *v6; // r9
  int v7; // r3
  int v8; // r5
  int v9; // r0
  int v10; // r6
  size_t v11; // r10
  const char ***v12; // r5
  const char ***v13; // r4
  size_t v14; // r11
  const char **v15; // r10
  const char **v16; // t1
  const char *v17; // r0
  _BYTE *v18; // r11
  const char ***v19; // r5
  const char ***v20; // r6
  int v21; // r8
  size_t v22; // r4
  char *v23; // r0
  const char **v24; // r3
  const char **v25; // t1
  const char *v26; // r1
  size_t v27; // r4
  int v28; // r4
  int v30; // r4
  size_t v31; // r4
  int fd; // [sp+0h] [bp-Ch]
  int v33; // [sp+4h] [bp-8h]

  v3 = 577;
  if ( !a3 )
    v3 = 1025;
  v5 = sub_29A5B4(a1);
  v6 = v5;
  if ( !v5 )
    return *_errno_location();
  fd = open64(v5, v3);
  if ( fd == -1 )
  {
    free(v6);
    return *_errno_location();
  }
  v7 = dword_490158;
  if ( a2 < dword_490158 )
    v7 = a2;
  v8 = v7;
  v33 = v7;
  v9 = sub_297908();
  v10 = v9;
  if ( dword_490158 > dword_490158 - v8 )
  {
    v12 = (const char ***)(v9 + 4 * (dword_490158 - v8));
    v13 = (const char ***)(v9 + 4 * dword_490158);
    v14 = 0;
    do
    {
      v16 = *v12++;
      v15 = v16;
      if ( dword_48BB58 )
      {
        v17 = v15[1];
        if ( v17 )
        {
          if ( *v17 )
            v14 += 1 + strlen(v17);
        }
      }
      v11 = strlen(*v15) + v14 + 1;
      v14 = v11;
    }
    while ( v13 != v12 );
  }
  else
  {
    v11 = 0;
  }
  v18 = malloc(v11);
  if ( !v18 )
  {
    v30 = *_errno_location();
    free(v6);
    close(fd);
    return v30;
  }
  if ( dword_490158 > dword_490158 - v33 )
  {
    v19 = (const char ***)(v10 + 4 * (dword_490158 - v33));
    v20 = (const char ***)(v10 + 4 * dword_490158);
    v21 = dword_48BB58;
    v22 = 0;
    do
    {
      v23 = &v18[v22];
      v25 = *v19++;
      v24 = v25;
      if ( v21 )
      {
        v26 = v24[1];
        if ( v26 )
        {
          if ( *v26 )
          {
            strcpy(v23, v26);
            v31 = strlen((*(v19 - 1))[1]) + v22;
            v18[v31] = 10;
            v22 = v31 + 1;
            v24 = *(v19 - 1);
            v23 = &v18[v22];
          }
        }
      }
      strcpy(v23, *v24);
      v27 = strlen(**(v19 - 1)) + v22;
      v18[v27] = 10;
      v22 = v27 + 1;
    }
    while ( v19 != v20 );
  }
  if ( write(fd, v18, v11) < 0 )
    v28 = *_errno_location();
  else
    v28 = 0;
  sub_297758(v18);
  close(fd);
  free(v6);
  return v28;
}
