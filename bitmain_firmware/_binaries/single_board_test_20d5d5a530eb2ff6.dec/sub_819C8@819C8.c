int __fastcall sub_819C8(int a1)
{
  int v1; // r0
  int v2; // r0

  v1 = sub_D8D8C(a1);
  v2 = sub_D8C70(v1);
  if ( v2 != 64 )
  {
    if ( v2 > 64 )
    {
      if ( (unsigned int)(v2 - 672) > 3 )
        return 0;
    }
    else if ( v2 != 4 )
    {
      return 0;
    }
  }
  return 1;
}
