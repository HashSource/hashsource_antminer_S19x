int __fastcall sub_281D10(int a1, int a2)
{
  int v3; // r2
  int v4; // r1
  bool v5; // zf
  int v7; // r3
  bool v8; // zf

  v3 = dword_4900D8;
  if ( dword_4900D8 >= dword_4900DC )
    goto LABEL_6;
  v4 = *(unsigned __int8 *)(dword_48AAD4 + dword_4900D8);
  v5 = v4 == 32;
  if ( v4 != 32 )
    v5 = v4 == 9;
  if ( v5 )
  {
LABEL_6:
    if ( a2 == 42 )
    {
LABEL_15:
      sub_286DA0(a2);
LABEL_17:
      dword_46DF0C = dword_46DEE0;
      off_46DED0 = &dword_46DF10;
      dword_46DF04 = a2;
      dword_46DF08 = 1;
      dword_48ABA0 = a2;
      return 0;
    }
  }
  else
  {
    v7 = *(unsigned __int8 *)(dword_48AAD4 + dword_4900D8 + 1);
    v8 = v7 == 32;
    if ( v7 != 32 )
      v8 = v7 == 9;
    if ( !v8 )
    {
      sub_281CAC(1, 69);
      v3 = dword_4900D8;
    }
    dword_4900D8 = v3 + 1;
    if ( a2 == 42 )
      goto LABEL_15;
  }
  if ( a2 != 61 )
  {
    if ( a2 != 92 )
    {
      sub_2872E8(0, a2);
      return 0;
    }
    sub_286DA0(9);
    goto LABEL_17;
  }
  sub_286DA0(63);
  return 0;
}
