int __fastcall sub_5BF7C(int a1, int a2, int a3)
{
  int v5; // r4
  int v6; // r0
  int v7; // r0
  int v9; // [sp+8h] [bp-8h] BYREF
  _BYTE v10[4]; // [sp+Ch] [bp-4h] BYREF

  v5 = 0;
  v9 = 0;
  while ( 1 )
  {
    v6 = sub_602EC("-break-watch", a3, a2, &off_358DBC, &v9, v10);
    if ( v6 < 0 )
      break;
    if ( v6 )
    {
      if ( v6 == 1 )
        v5 = 2;
    }
    else
    {
      v5 = 1;
    }
  }
  if ( v9 >= a3 )
    sub_946E0("-break-watch: Missing <expression>");
  if ( v9 < a3 - 1 )
    sub_946E0("-break-watch: Garbage following <expression>");
  v7 = *(_DWORD *)(a2 + 4 * v9);
  if ( v5 == 1 )
    return sub_D9E5C(v7, 0);
  if ( v5 == 2 )
    return sub_D9E6C(v7, 0);
  return sub_D9E4C(v7, 0);
}
