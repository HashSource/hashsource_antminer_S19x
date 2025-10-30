bool __fastcall sub_CA128(int a1, int *a2, int a3, int a4, int a5)
{
  _DWORD *v5; // r4

  v5 = *(_DWORD **)(a1 + 80);
  if ( v5 )
    return sub_B93C0(a2, a3, a4, v5, a5);
  sub_D0048(16, 131, 111, "crypto/ec/ecp_mont.c", 192);
  return 0;
}
