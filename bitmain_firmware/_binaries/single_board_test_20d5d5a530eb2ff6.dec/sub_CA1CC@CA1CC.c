bool __fastcall sub_CA1CC(int a1, int a2)
{
  int v2; // r4

  v2 = *(_DWORD *)(a1 + 84);
  if ( v2 )
    return sub_B89E4(a2, v2) != 0;
  sub_D0048(16, 209, 111, "crypto/ec/ecp_mont.c", 284);
  return 0;
}
