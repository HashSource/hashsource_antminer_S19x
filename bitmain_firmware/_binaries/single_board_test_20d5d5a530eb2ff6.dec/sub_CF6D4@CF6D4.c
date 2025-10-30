int __fastcall sub_CF6D4(int a1, int *a2)
{
  int result; // r0
  int v5; // r3
  int *v6; // r2
  int v7; // t1
  int v8; // t1

  result = sub_CF48C();
  if ( result )
  {
    v5 = *a2;
    v6 = a2 + 2;
    if ( *a2 )
    {
      do
      {
        *(v6 - 2) = v5 | (a1 << 24);
        v7 = *v6;
        v6 += 2;
        v5 = v7;
      }
      while ( v7 );
    }
    sub_10C554(dword_6DF428);
    if ( *a2 )
    {
      do
      {
        sub_DF7A0(dword_6DF42C, a2);
        v8 = a2[2];
        a2 += 2;
      }
      while ( v8 );
    }
    sub_10C564(dword_6DF428);
    return 1;
  }
  return result;
}
