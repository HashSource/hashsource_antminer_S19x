int __fastcall sub_2928A4(int a1)
{
  int v1; // r4
  int v2; // r1

  v1 = a1;
  if ( a1 > 0 )
  {
    while ( 1 )
    {
      a1 = sub_2924E0(a1);
      if ( !a1 )
        break;
      if ( !--v1 )
        return 0;
    }
    sub_2945C8(0, v2);
  }
  return 0;
}
