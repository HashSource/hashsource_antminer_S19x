int __fastcall sub_2975E4(int a1, int a2)
{
  int v2; // r4
  int v4; // r0
  int v5; // r2

  v2 = a1;
  if ( a1 < 0 )
    return sub_2974E4(-a1, a2);
  if ( a1 )
  {
    sub_297220(a1);
    if ( dword_4707A8 == -1 )
    {
      v5 = dword_4900D8;
      if ( dword_4900D8 )
      {
        if ( dword_4900D8 == dword_4900DC )
          v5 = -1;
      }
      else if ( !dword_4900DC )
      {
        goto LABEL_6;
      }
      dword_4707A8 = v5;
    }
LABEL_6:
    while ( 1 )
    {
      v4 = sub_297988();
      if ( !v4 )
        break;
      if ( !--v2 )
      {
        sub_297354(v4);
        sub_296B3C();
        return 0;
      }
    }
    sub_29728C();
    return 0;
  }
  return v2;
}
