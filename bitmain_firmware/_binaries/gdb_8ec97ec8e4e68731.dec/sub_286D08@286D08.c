_DWORD *__fastcall sub_286D08(
        const char *a1,
        int a2,
        int a3,
        int (__fastcall *a4)(const char *, signed int),
        int a5,
        int a6)
{
  _DWORD *result; // r0

  dword_4900F0 = a5;
  dword_4900F8 = a6;
  if ( !off_48AD28 )
    return sub_286C1C(a1, a4);
  ++dword_48B6BC;
  result = (_DWORD *)off_48AD28();
  if ( dword_48B6BC > 0 )
    --dword_48B6BC;
  if ( !result && !dword_48AD2C )
    return sub_286C1C(a1, a4);
  dword_48AD2C = 0;
  return result;
}
