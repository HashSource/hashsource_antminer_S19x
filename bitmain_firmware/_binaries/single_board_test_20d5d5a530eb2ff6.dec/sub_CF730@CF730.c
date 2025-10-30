int __fastcall sub_CF730(_DWORD *a1)
{
  int result; // r0
  int v3; // t1

  result = sub_CF48C();
  if ( result )
  {
    sub_10C554(dword_6DF428);
    if ( *a1 )
    {
      do
      {
        sub_DF7A0(dword_6DF42C, a1);
        v3 = a1[2];
        a1 += 2;
      }
      while ( v3 );
    }
    sub_10C564(dword_6DF428);
    return 1;
  }
  return result;
}
