int __fastcall sub_C5D50(int a1, _BYTE *a2, int a3)
{
  _DWORD *v4; // r4
  int v5; // r1
  _DWORD *v6; // r4
  int result; // r0
  int v9; // r0

  v4 = *(_DWORD **)(a1 + 20);
  v5 = a3;
  if ( v4 || (v9 = sub_B8264(), v5 = a3, v4 = (_DWORD *)v9, (*(_DWORD *)(a1 + 20) = v9) != 0) )
  {
    v6 = sub_B8AEC(a2, v5, v4);
    result = 1;
    if ( !v6 )
    {
      sub_D0048(16, 259, 3, "crypto/ec/ec_key.c", 671);
      return 0;
    }
  }
  else
  {
    sub_D0048(16, 259, 65, "crypto/ec/ec_key.c", 667);
    return 0;
  }
  return result;
}
