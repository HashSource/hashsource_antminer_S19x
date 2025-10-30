unsigned int __fastcall sub_9AE80(const char *a1, int a2)
{
  int v4; // r6
  unsigned int v5; // r3
  unsigned int v6; // r2
  unsigned int v7; // r6
  int v8; // r4

  v4 = sub_9AE14(dword_487D2C);
  v5 = sub_1B134C(a1) % 0x3F1u;
  v6 = v4 + 4 * v5;
  v7 = v4 + 4 * (v5 + 11);
  v8 = *(_DWORD *)(v6 + 44);
  if ( !v8 )
    return v8;
  while ( *(_DWORD *)(v8 + 4) != a2 || strcmp(a1, *(const char **)v8) )
  {
    v7 = v8 + 16;
    v8 = *(_DWORD *)(v8 + 16);
    if ( !v8 )
      return v8;
  }
  return v7;
}
