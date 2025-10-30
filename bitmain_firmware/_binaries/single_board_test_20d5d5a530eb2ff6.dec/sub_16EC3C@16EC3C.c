char *__fastcall sub_16EC3C(int a1)
{
  if ( a1 < 0 )
    return 0;
  if ( a1 > 7 )
    return (char *)sub_10C01C((_DWORD *)dword_6E2F8C, a1 - 8);
  return (char *)&unk_21FFEC + 24 * a1;
}
