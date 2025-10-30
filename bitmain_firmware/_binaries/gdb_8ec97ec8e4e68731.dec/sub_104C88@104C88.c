int __fastcall sub_104C88(const char *a1, int a2)
{
  char *v4; // r0
  size_t v5; // r4
  _BYTE *v6; // r9
  int v7; // r2
  int v8; // r3
  __int64 v10; // r0
  _DWORD v11[3]; // [sp+0h] [bp-2Ch] BYREF

  v4 = strchr(a1, 58);
  v5 = (size_t)v4;
  if ( v4 )
    v5 = v4 - a1;
  v6 = (char *)v11 + v5;
  strncpy((char *)v11, a1, v5);
  *((_BYTE *)v11 + v5) = 0;
  sub_1B141C((int)v11, (char *)v11);
  v7 = v11[0];
  if ( !v11[0] )
  {
    *((_BYTE *)v11 + v5) = 95;
    *((_BYTE *)v11 + v5 + 1) = 0;
    sub_1B141C((int)v11, (char *)v11);
    v7 = v11[0];
    if ( !v11[0] )
    {
      if ( !a2 )
        return 0;
      *v6 = v11[0];
      sub_1B141C((int)v11, (char *)v11);
      v7 = v11[0];
      if ( !v11[0] )
      {
        *v6 = 95;
        *((_BYTE *)v11 + v5 + 1) = 0;
        sub_1B141C((int)v11, (char *)v11);
        v7 = v11[0];
        if ( !v11[0] )
          return 0;
      }
    }
  }
  v8 = *(__int16 *)(v7 + 22);
  if ( v8 != -1 )
    return *(_DWORD *)(v7 + 8) + *(_DWORD *)(*(_DWORD *)(v11[1] + 144) + 4 * v8);
  v10 = sub_94700((int)"dbxread.c", 996, "Section index is uninitialized");
  return sub_104DD8(v10, HIDWORD(v10));
}
