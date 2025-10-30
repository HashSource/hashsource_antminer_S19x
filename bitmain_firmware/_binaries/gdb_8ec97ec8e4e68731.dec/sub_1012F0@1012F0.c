bool __fastcall sub_1012F0(int a1)
{
  int v1; // r3
  int v3; // r0
  char *v4; // r2
  int v5; // r3

  v1 = *(_DWORD *)(a1 + 24);
  if ( *(_BYTE *)v1 != 1 )
    return 0;
  v3 = *(_DWORD *)(v1 + 20);
  v4 = *(char **)(v3 + 24);
  v5 = *v4;
  if ( v5 != 2 )
  {
    if ( v5 == 3 || v5 == 1 )
      return sub_1012C0(v3);
    return 0;
  }
  v3 = *((_DWORD *)v4 + 5);
  if ( (**(char **)(v3 + 24) & 0xFFFFFFFD) != 1 )
    return 0;
  return sub_1012C0(v3);
}
