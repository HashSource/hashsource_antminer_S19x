int __fastcall sub_27F26C(int result)
{
  if ( !dword_46DED4 && off_46DED0 == &unk_46E718 )
    result = sub_2821A4();
  if ( dword_4900D0 && dword_4900D0 <= dword_4900DC )
  {
    off_470784(result);
    dword_48AF04 = 0;
    result = sub_295A9C(1, 10);
  }
  if ( dword_48FF30 )
  {
    if ( !dword_48AACC )
      return result;
  }
  else
  {
    result = off_470784(result);
    dword_48AF04 = 0;
    if ( !dword_48AACC || !dword_48FF30 )
      return result;
  }
  if ( (int (__fastcall *)(_DWORD, _DWORD))dword_48AAD0 == sub_295A9C && !dword_4900D8 && !dword_4900DC )
    return sub_290850(result);
  return result;
}
