int __fastcall sub_CA0F0(int a1, int a2, int a3, int a4)
{
  int v4; // r4

  v4 = *(_DWORD *)(a1 + 80);
  if ( v4 )
    return sub_B872C(a2, a3, v4, a4);
  sub_D0048(16, 134, 111, "crypto/ec/ecp_mont.c", 262);
  return 0;
}
