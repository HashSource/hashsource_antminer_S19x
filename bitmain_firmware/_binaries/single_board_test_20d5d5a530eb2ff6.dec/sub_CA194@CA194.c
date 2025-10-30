int __fastcall sub_CA194(int a1, int *a2, int a3, int a4)
{
  _DWORD *v4; // r4

  v4 = *(_DWORD **)(a1 + 80);
  if ( v4 )
    return sub_B9428(a2, a3, v4, a4);
  sub_D0048(16, 133, 111, "crypto/ec/ecp_mont.c", 273);
  return 0;
}
