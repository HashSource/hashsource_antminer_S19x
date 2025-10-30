bool __fastcall sub_2DB950(unsigned int a1, __int64 *a2)
{
  int v2; // r12
  __int64 v3; // r2
  unsigned int v4; // lr
  unsigned int v5; // r2
  unsigned int v6; // r3
  int v7; // r2
  int v8; // r3
  int i; // r2
  int v11; // r3
  int v12; // r0
  __int16 v13; // r0

  v2 = *((_DWORD *)a2 + 9);
  v3 = *a2;
  v4 = *((_DWORD *)a2 + 2);
  if ( v2 )
  {
    HIDWORD(v3) = *(_DWORD *)a2;
    *((_DWORD *)a2 + 1) = v3;
  }
  if ( HIDWORD(v3) >= v4 )
    return 0;
  while ( 1 )
  {
    v5 = *(_DWORD *)HIDWORD(v3);
    if ( !v2 && a1 < v5 )
      return 0;
    if ( a1 == v5 )
      break;
    HIDWORD(v3) += 12;
    *((_DWORD *)a2 + 1) = HIDWORD(v3);
    if ( HIDWORD(v3) >= v4 )
      return 0;
  }
  v6 = *(_DWORD *)(HIDWORD(v3) + 4) >> *((_DWORD *)a2 + 8);
  if ( !v6 )
    return 1;
  if ( *((_DWORD *)a2 + 5) <= v6 || (v7 = *((_DWORD *)a2 + 3) + 20 * v6, *(unsigned __int8 *)(v7 + 12) >> 4) )
  {
    v8 = *(_DWORD *)(*((_DWORD *)a2 + 7) + 4 * (v6 - *((_DWORD *)a2 + 6)));
    for ( i = *(unsigned __int8 *)(v8 + 12); (unsigned int)(i - 6) <= 1; i = *(unsigned __int8 *)(v8 + 12) )
      v8 = *(_DWORD *)(v8 + 20);
    if ( (unsigned int)(i - 3) > 1 )
      return 0;
    v11 = *(_DWORD *)(v8 + 20);
    if ( *(_DWORD *)(v11 + 148) != *((_DWORD *)a2 + 4) || *(_DWORD *)(v11 + 124) )
      return 1;
    if ( (char **)v11 != &off_470950 && *(char ***)(v11 + 60) == &off_470950 )
    {
      v13 = *(_WORD *)(v11 + 24);
      return (((v13 & 0x380) - 256) & 0xFEFF) != 0;
    }
    return 0;
  }
  v12 = sub_2CFEF4(*((_DWORD *)a2 + 4), *(_DWORD *)(v7 + 16));
  if ( !v12 )
    return 0;
  if ( *(_DWORD *)(v12 + 124) )
    return 1;
  if ( (char **)v12 == &off_470950 || *(char ***)(v12 + 60) != &off_470950 )
    return 0;
  v13 = *(_WORD *)(v12 + 24);
  return (((v13 & 0x380) - 256) & 0xFEFF) != 0;
}
