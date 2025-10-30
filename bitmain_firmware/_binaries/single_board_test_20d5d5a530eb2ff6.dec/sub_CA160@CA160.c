bool __fastcall sub_CA160(int a1, int *a2, int a3, int a4)
{
  _DWORD *v4; // r4

  v4 = *(_DWORD **)(a1 + 80);
  if ( v4 )
    return sub_B93C0(a2, a3, a3, v4, a4);
  sub_D0048(16, 132, 111, "crypto/ec/ecp_mont.c", 203);
  return 0;
}
