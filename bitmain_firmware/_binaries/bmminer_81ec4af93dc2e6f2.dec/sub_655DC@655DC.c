int __fastcall sub_655DC(int a1)
{
  unsigned __int16 i; // [sp+80Ah] [bp-Ah]
  int v4; // [sp+80Ch] [bp-8h]

  v4 = -2147482880;
  for ( i = 0; i <= 2u; ++i )
  {
    v4 = sub_64A6C(a1);
    if ( v4 )
    {
      if ( v4 != -2147482880 )
        break;
    }
  }
  return v4;
}
