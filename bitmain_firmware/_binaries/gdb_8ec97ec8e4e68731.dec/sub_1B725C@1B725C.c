int __fastcall sub_1B725C(_DWORD *a1)
{
  int v1; // r4
  int v2; // r2
  int v3; // r1
  int v4; // r3
  int v5; // r12
  int v6; // r1
  __int64 v8; // r0

  v2 = *(_DWORD *)(dword_487D2C + 32);
  if ( !v2 )
    return 0;
  v3 = *(_DWORD *)(v2 + 40);
  v4 = *(_BYTE *)(v3 + 68) & 1;
  if ( (*(_BYTE *)(v3 + 68) & 1) == 0 )
    return v4;
  v5 = *(_DWORD *)(v3 + 64);
  v6 = *(_DWORD *)(v3 + 60);
  if ( v5 != -1 )
  {
    v4 = 1;
    *a1 = *(_DWORD *)(*(_DWORD *)(v2 + 144) + 4 * v5) + v6;
    return v4;
  }
  v8 = sub_94700((int)"objfiles.c", 462, "Section index is uninitialized", v4, v1);
  return sub_1B72D8(v8, HIDWORD(v8));
}
