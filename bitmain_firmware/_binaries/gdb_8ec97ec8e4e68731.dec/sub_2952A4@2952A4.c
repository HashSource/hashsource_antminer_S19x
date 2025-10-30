int __fastcall sub_2952A4(int a1)
{
  int v1; // r3
  int v2; // r0
  int v3; // r1
  int result; // r0

  if ( a1 < 0 )
    return sub_295244(-a1);
  v1 = dword_4900DC;
  if ( a1 )
  {
    v2 = a1 + dword_4900D8;
    if ( dword_4900DC <= 0 || dword_46DED4 || off_46DED0 != &unk_46E718 )
      v3 = dword_4900DC;
    else
      v3 = dword_4900DC - 1;
    if ( v3 < v2 )
    {
      dword_4900D8 = v3;
      sub_2945C8();
      v1 = dword_4900DC;
    }
    else
    {
      dword_4900D8 = v2;
    }
  }
  result = 0;
  if ( v1 < 0 )
    dword_4900DC = 0;
  return result;
}
