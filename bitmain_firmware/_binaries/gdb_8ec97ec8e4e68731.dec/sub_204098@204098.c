int __fastcall sub_204098(const char *a1, const char *a2, const char **a3)
{
  char *v6; // r8
  const char *v7; // r9
  int v8; // r9
  const char *v9; // r9
  void *v10; // r5
  int v11; // r0
  int v12; // r3
  bool v13; // zf
  size_t v14; // r10
  char *v15; // r0
  void *v16; // r7
  int v17; // r9
  int v19; // r5
  int v20; // r0
  char dest[4]; // [sp+8h] [bp-2Ch] BYREF
  int v22[2]; // [sp+Ch] [bp-28h] BYREF

  v6 = (char *)dword_4893F4;
  if ( !*a3 )
  {
LABEL_11:
    if ( a2 )
    {
      sub_203FF4(v22, a2);
      v9 = (const char *)dword_4893F4;
      v10 = (void *)v22[0];
      if ( v22[0] )
        a2 = (const char *)v22[0];
      v11 = sub_338BD4(dword_4893F4, "$cdir");
      if ( v11 && (v6 == (char *)v11 || *(_BYTE *)(v11 - 1) == 58) )
      {
        v12 = *(unsigned __int8 *)(v11 + 5);
        v13 = v12 == 58;
        if ( v12 != 58 )
          v13 = v12 == 0;
        if ( v13 )
        {
          v14 = v11 - (_DWORD)v9;
          strlen(v9);
          strlen(a2);
          v6 = dest;
          strncpy(dest, v9, v14);
          v15 = (char *)stpcpy(&dest[v14], a2);
          strcpy(v15, &v9[v14 + 5]);
        }
      }
    }
    else
    {
      v10 = 0;
    }
    if ( *a1 == 47 )
    {
      sub_203FF4(v22, a1);
      v16 = (void *)v22[0];
      if ( v22[0] )
        a1 = (const char *)v22[0];
    }
    else
    {
      v16 = 0;
    }
    v17 = ((int (__fastcall *)(char *, int, const char *, _DWORD, const char **))loc_203AE4)(v6, 6, a1, 0, a3);
    if ( v17 < 0 )
    {
      v20 = sub_3245A4(a1);
      if ( (const char *)v20 != a1 )
        v17 = ((int (__fastcall *)(char *, int, int, _DWORD, const char **))loc_203AE4)(v6, 6, v20, 0, a3);
    }
    if ( v16 )
      free(v16);
    if ( v10 )
      free(v10);
    return v17;
  }
  sub_203FF4(v22, *a3);
  v7 = (const char *)v22[0];
  if ( v22[0] )
  {
    if ( *a3 )
      free((void *)*a3);
    *a3 = v7;
  }
  else
  {
    v7 = *a3;
  }
  v8 = sub_967B4((int)v7, 0);
  if ( v8 < 0 )
  {
    if ( *a3 )
      free((void *)*a3);
    *a3 = 0;
    goto LABEL_11;
  }
  sub_984A4(v22, (int)*a3);
  v19 = v22[0];
  if ( *a3 )
    free((void *)*a3);
  *a3 = (const char *)v19;
  return v8;
}
