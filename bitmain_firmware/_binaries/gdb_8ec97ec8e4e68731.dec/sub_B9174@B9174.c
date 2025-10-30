int __fastcall sub_B9174(const char *a1, const char *a2)
{
  size_t v4; // r4
  size_t v5; // r9
  void *v6; // r0
  size_t v7; // r3
  _BYTE *v8; // r2
  void *v9; // t1
  int result; // r0
  size_t v11; // r5
  _BYTE *v12; // r3
  int v13; // r0
  char *v14; // r3
  int v15; // t1
  size_t v16; // r4
  _DWORD *v17; // r0
  int v18; // t1
  _DWORD *v19; // r0
  _DWORD *v20; // r0
  _DWORD *v21; // r0
  _DWORD savedregs[8]; // [sp+0h] [bp-1Ch] BYREF

  v4 = strlen(a1);
  memcpy(savedregs, a1, v4 + 1);
  v5 = strlen(a2);
  v6 = memcpy(savedregs, a2, v5 + 1);
  if ( dword_478228 )
  {
    v19 = (_DWORD *)sub_242FC8(v6);
    v6 = (void *)sub_2594B0(
                   *v19,
                   "auto-load: Matching file \"%s\" to pattern \"%s\"\n",
                   (const char *)savedregs,
                   (const char *)savedregs);
  }
  if ( !v5 )
  {
LABEL_9:
    LOBYTE(savedregs[0]) = 0;
    if ( !dword_478228 )
      return 1;
    v21 = (_DWORD *)sub_242FC8(v6);
    sub_2594B0(*v21, "auto-load: Matched - empty pattern\n");
    return 1;
  }
  v7 = v5 - 1;
  v8 = (char *)savedregs + v5 - 1;
  if ( *v8 == 47 )
  {
    while ( v7 )
    {
      v9 = (void *)(unsigned __int8)*--v8;
      v6 = v9;
      if ( v9 != (void *)47 )
        goto LABEL_12;
      --v7;
    }
    goto LABEL_9;
  }
  v7 = v5;
LABEL_12:
  *((_BYTE *)savedregs + v7) = 0;
  while ( 1 )
  {
    if ( !v4 )
      goto LABEL_20;
    v11 = v4 - 1;
    v12 = (char *)savedregs + v4 - 1;
    if ( *v12 == 47 )
    {
      while ( v11 )
      {
        v18 = (unsigned __int8)*--v12;
        if ( v18 != 47 )
          goto LABEL_17;
        --v11;
      }
LABEL_20:
      result = dword_478228;
      LOBYTE(savedregs[0]) = 0;
      if ( dword_478228 )
      {
        v17 = (_DWORD *)sub_242FC8(dword_478228);
        sub_2594B0(*v17, "auto-load: Not matched - pattern \"%s\".\n", (const char *)savedregs);
        return 0;
      }
      return result;
    }
    v11 = v4;
LABEL_17:
    *((_BYTE *)savedregs + v11) = 0;
    v13 = ((int (__fastcall *)(_DWORD *, _DWORD *, int, _BYTE *))loc_25B524)(savedregs, savedregs, 3, v12);
    v14 = (char *)savedregs + v11;
    if ( !v13 )
      break;
    while ( 1 )
    {
      v15 = (unsigned __int8)*--v14;
      v16 = v11 - 1;
      if ( v15 == 47 )
        break;
      --v11;
      if ( !v16 )
        goto LABEL_20;
    }
    v4 = v11;
  }
  if ( !dword_478228 )
    return 1;
  v20 = (_DWORD *)sub_242FC8(0);
  sub_2594B0(
    *v20,
    "auto-load: Matched - file \"%s\" to pattern \"%s\".\n",
    (const char *)savedregs,
    (const char *)savedregs);
  return 1;
}
