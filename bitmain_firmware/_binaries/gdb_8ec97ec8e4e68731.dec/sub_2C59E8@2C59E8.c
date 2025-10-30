int __fastcall sub_2C59E8(int a1)
{
  _DWORD *v1; // r6
  int i; // r4
  size_t v5; // r5
  void *v6; // r0
  _BOOL4 v7; // r5
  unsigned int v8; // r4
  int v9; // r0
  unsigned int v10; // r1
  _DWORD *v11; // r8
  int v12; // r0
  int v13; // r5

  v1 = *(_DWORD **)(a1 + 28);
  if ( v1[11] != 4 )
    return 0;
  for ( i = *(_DWORD *)(v1[320] + 100); i; i = *(_DWORD *)(i + 12) )
  {
    if ( strstr(*(const char **)i, ".__stub") )
    {
      v5 = *(_DWORD *)(i + 36);
      v6 = sub_2AD09C(v1[320], v5);
      *(_DWORD *)(i + 108) = v6;
      v7 = v5 != 0;
      if ( v6 )
        v7 = 0;
      if ( v7 )
        return 0;
      *(_DWORD *)(i + 36) = 0;
    }
  }
  v8 = 1;
  do
  {
    v9 = sub_2C2374((int)v1, v8);
    v10 = v8;
    v11 = (_DWORD *)v9;
    ++v8;
    v12 = sub_2B67A4((int)v1, v10);
    v13 = v12;
    if ( v11 )
    {
      if ( !v12 )
        sub_2A6BBC("elf32-arm.c", 6715);
      if ( *(_DWORD *)v13 )
        *(_DWORD *)(*(_DWORD *)v13 + 36) = *v11;
    }
  }
  while ( v8 != 24 );
  sub_2AAF90((int)(v1 + 313), (int (__fastcall *)(_DWORD *, int))sub_2C095C, a1);
  if ( v1[95] )
  {
    v1[95] = -1;
    sub_2AAF90((int)(v1 + 313), (int (__fastcall *)(_DWORD *, int))sub_2C095C, a1);
  }
  return 1;
}
