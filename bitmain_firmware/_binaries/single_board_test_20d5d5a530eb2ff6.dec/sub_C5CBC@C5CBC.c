unsigned int __fastcall sub_C5CBC(int a1, int a2, unsigned int a3)
{
  int v6; // r0
  _DWORD *v7; // r5
  int v8; // r4
  unsigned int v9; // r4

  v6 = sub_C6248(*(_DWORD *)(a1 + 12));
  v7 = *(_DWORD **)(a1 + 20);
  v8 = v6 + 14;
  if ( v6 + 7 >= 0 )
    v8 = v6 + 7;
  if ( !v7 )
    return 0;
  v9 = v8 >> 3;
  if ( a2 )
  {
    if ( v9 > a3 )
      return 0;
    if ( sub_B8CD4(v7, a2, v9) == -1 )
    {
      sub_D0048(16, 260, 100, "crypto/ec/ec_key.c", 644);
      return 0;
    }
  }
  return v9;
}
