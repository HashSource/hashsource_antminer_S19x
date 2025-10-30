int __fastcall sub_8D184(int a1)
{
  int v1; // r2
  int v2; // r3
  int v3; // t1

  v1 = *(unsigned __int8 *)(a1 + 1);
  v2 = a1 + 1;
  if ( v1 == 35 )
  {
    do
    {
      v3 = *(unsigned __int8 *)++v2;
      v1 = v3;
    }
    while ( v3 == 35 );
  }
  if ( v1 == 34 )
    return v2 - a1;
  else
    return 0;
}
