bool __fastcall sub_1C1674(int a1)
{
  int v1; // r3
  int v3; // r3
  int v4; // r0

  v1 = *(_DWORD *)(a1 + 24);
  if ( *(_BYTE *)v1 == 1
    && (v3 = *(_DWORD *)(*(_DWORD *)(v1 + 20) + 24), *(_BYTE *)v3 == 2)
    && (v4 = *(_DWORD *)(v3 + 20), (**(char **)(v4 + 24) & 0xFFFFFFFD) == 1) )
  {
    return sub_1C1644(v4);
  }
  else
  {
    return 0;
  }
}
