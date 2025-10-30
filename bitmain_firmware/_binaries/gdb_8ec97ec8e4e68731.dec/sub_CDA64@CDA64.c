bool __fastcall sub_CDA64(int a1)
{
  unsigned int v1; // r3
  bool v2; // cc

  v1 = *(_DWORD *)(a1 + 12);
  v2 = v1 > 0x1E;
  if ( v1 != 30 )
    v2 = v1 - 1 > 1;
  return !v2;
}
