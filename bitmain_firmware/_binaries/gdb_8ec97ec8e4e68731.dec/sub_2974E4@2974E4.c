int __fastcall sub_2974E4(int a1, int a2)
{
  int v2; // r4
  int v3; // r5
  int v4; // r0
  int v6; // r2

  v2 = a1;
  if ( a1 < 0 )
    return sub_2975E4(-a1, a2);
  if ( !a1 )
    return 0;
  if ( dword_4707A8 == -1 )
  {
    v6 = dword_4900D8;
    if ( dword_4900D8 )
    {
      if ( dword_4900D8 == dword_4900DC )
        v6 = -1;
    }
    else if ( !dword_4900DC )
    {
      goto LABEL_4;
    }
    dword_4707A8 = v6;
  }
LABEL_4:
  if ( !dword_48BB24 )
    a1 = (int)sub_296C40();
  v3 = 0;
  v4 = sub_297220(a1);
  while ( 1 )
  {
    v4 = sub_297958(v4);
    if ( !v4 )
      break;
    --v2;
    v3 = v4;
    if ( !v2 )
    {
      sub_297354(v4);
      sub_296B3C();
      return 0;
    }
  }
  if ( v3 )
  {
    sub_297354(v3);
    sub_296B3C();
    return 0;
  }
  sub_2945C8();
  return 0;
}
