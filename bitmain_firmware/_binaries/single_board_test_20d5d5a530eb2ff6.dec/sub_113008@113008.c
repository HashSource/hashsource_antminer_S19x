int __fastcall sub_113008(int a1, int a2)
{
  int v2; // r0
  int v3; // r3

  v2 = *(_DWORD *)(a1 + 16);
  v3 = *(_DWORD *)(v2 + 12) | a2;
  if ( (a2 & 0x780) != 0 )
    v3 |= 0x80u;
  *(_DWORD *)(v2 + 12) = v3;
  return 1;
}
