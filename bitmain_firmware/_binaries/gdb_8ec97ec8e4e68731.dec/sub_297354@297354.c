int __fastcall sub_297354(int a1)
{
  int result; // r0

  sub_2950FC(*(const char **)a1, 0);
  result = dword_4900DC;
  dword_48B6E0 = *(_DWORD *)(a1 + 8);
  dword_4900D8 = dword_4900DC;
  dword_4900D4 = 0;
  if ( !dword_46DED4 )
  {
    dword_4900D8 = 0;
    dword_4900D4 = dword_4900DC;
  }
  return result;
}
