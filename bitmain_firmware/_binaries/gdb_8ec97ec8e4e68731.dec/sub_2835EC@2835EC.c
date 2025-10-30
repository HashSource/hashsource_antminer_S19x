int __fastcall sub_2835EC(int result)
{
  unsigned __int8 *v1; // r4
  unsigned __int8 *v2; // r5
  int v3; // r3

  if ( result )
  {
    v1 = (unsigned __int8 *)result;
    v2 = (unsigned __int8 *)(result + 2056);
    do
    {
      v3 = *v1;
      if ( v3 == 1 )
      {
        sub_2835EC(*((_DWORD *)v1 + 1));
        result = sub_297758(*((_DWORD *)v1 + 1));
      }
      else if ( v3 == 2 )
      {
        result = sub_297758(*((_DWORD *)v1 + 1));
      }
      v1 += 8;
    }
    while ( v1 != v2 );
  }
  return result;
}
