int __fastcall sub_B9380(char *s2, const char **a2)
{
  int v4; // r11
  const char *v5; // r5
  int v6; // r6
  int v7; // r4
  const char *v8; // r10
  int v9; // r0
  _DWORD *v11; // r0
  int v12; // r9
  int v13; // r6
  int v14; // r4
  const char *v15; // t1
  char *v16; // r0
  int v17; // r0
  _DWORD *v18; // r0
  void *ptr; // [sp+4h] [bp-8h] BYREF

  v4 = dword_478230;
  v5 = *a2;
  if ( dword_478230 && (v6 = *(_DWORD *)dword_478230) != 0 )
  {
    v7 = 0;
    while ( 1 )
    {
      if ( !v5 )
      {
        v8 = *(const char **)(v4 + 4 * v7 + 8);
        v9 = sub_B9174(s2, v8);
        if ( v9 )
          break;
      }
      if ( ++v7 == v6 )
        goto LABEL_11;
    }
    if ( v8 )
      goto LABEL_8;
  }
  else
  {
LABEL_11:
    if ( v5 )
      goto LABEL_12;
  }
  sub_984A4((int *)&ptr, (int)s2);
  v16 = (char *)*a2;
  v5 = (const char *)ptr;
  ptr = 0;
  *a2 = v5;
  if ( v16 )
  {
    free(v16);
    if ( ptr )
      free(ptr);
    v5 = *a2;
  }
  if ( dword_478228 )
  {
    v17 = strcmp(v5, s2);
    if ( !v17 )
      return 0;
    v18 = (_DWORD *)sub_242FC8(v17);
    sub_2594B0(*v18, "auto-load: Resolved file \"%s\" as \"%s\".\n", s2, *a2);
    v5 = *a2;
  }
LABEL_12:
  if ( !strcmp(v5, s2) )
    return 0;
  if ( !dword_478230 )
    return 0;
  v12 = *(_DWORD *)dword_478230;
  if ( !*(_DWORD *)dword_478230 )
    return 0;
  v13 = dword_478230 + 4;
  v14 = 0;
  while ( 1 )
  {
    v15 = *(const char **)(v13 + 4);
    v13 += 4;
    v8 = v15;
    ++v14;
    v9 = sub_B9174(v5, v15);
    if ( v9 )
      break;
    if ( v14 == v12 )
      return 0;
  }
  if ( !v8 )
    return 0;
LABEL_8:
  if ( dword_478228 )
  {
    v11 = (_DWORD *)sub_242FC8(v9);
    sub_2594B0(*v11, "auto-load: File \"%s\" matches directory \"%s\".\n", s2, v8);
  }
  return 1;
}
