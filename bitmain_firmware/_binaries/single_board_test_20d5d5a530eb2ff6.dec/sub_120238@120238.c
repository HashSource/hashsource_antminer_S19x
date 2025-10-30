char *__fastcall sub_120238(int a1)
{
  if ( a1 < 0 )
    return 0;
  if ( a1 > 8 )
    return (char *)sub_10C01C((_DWORD *)dword_6E1C5C, a1 - 9);
  return (char *)&unk_21FD54 + 28 * a1;
}
