int __fastcall sub_CF770(int a1, _DWORD *a2)
{
  int result; // r0
  int v4; // t1

  result = sub_10C594(&unk_6E1440, sub_CF3E8);
  if ( result )
  {
    result = dword_6DF430;
    if ( dword_6DF430 )
    {
      sub_10C554(dword_6DF428);
      if ( *a2 )
      {
        do
        {
          sub_DF92C(dword_6DF42C, a2);
          v4 = a2[2];
          a2 += 2;
        }
        while ( v4 );
      }
      sub_10C564(dword_6DF428);
      return 1;
    }
  }
  return result;
}
