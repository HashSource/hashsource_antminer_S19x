int __fastcall sub_64540(int a1)
{
  unsigned __int16 i; // [sp+80Ah] [bp-Ah]
  int v4; // [sp+80Ch] [bp-8h]

  v4 = -2147482880;
  for ( i = 0; i <= 2u; ++i )
  {
    v4 = sub_6379C(a1);
    if ( v4 )
    {
      if ( v4 != -2147482880 )
        break;
    }
  }
  return v4;
}
