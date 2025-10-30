int __fastcall sub_283B4C(int result, int a2)
{
  int v3; // r4
  int v4; // r1
  bool v5; // zf
  int v6; // r0

  if ( result )
  {
    v3 = result;
    v4 = dword_48AAD0;
    v5 = dword_48AAD0 == (_DWORD)sub_283AC8;
    if ( (int (__fastcall *)(int, int))dword_48AAD0 != sub_283AC8 )
      v5 = dword_48AAD0 == (_DWORD)sub_283B4C;
    if ( !v5 )
      sub_283708(result);
    if ( dword_48ABCC )
    {
      if ( v3 > 0 )
        v4 = -1;
      v6 = abs32(v3);
      if ( v3 <= 0 )
        v4 = 1;
      return sub_2839A8(v6, v4);
    }
    else
    {
      return sub_2974E4(v3, a2);
    }
  }
  return result;
}
