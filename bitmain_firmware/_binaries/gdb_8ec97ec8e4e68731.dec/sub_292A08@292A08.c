_BYTE *__fastcall sub_292A08(char a1)
{
  int v2; // r2
  _BYTE *result; // r0
  int v4; // r3

  v2 = dword_48B6F8;
  result = (_BYTE *)dword_48B700;
  v4 = dword_48B6F8 + 1;
  if ( dword_48B6F8 + 1 >= dword_48B6FC )
  {
    if ( dword_48B700 )
    {
      dword_48B6FC += 25;
      result = sub_93050((void *)dword_48B700, dword_48B6FC);
    }
    else
    {
      dword_48B6FC = 25;
      result = sub_93028(0x19u);
    }
    v2 = dword_48B6F8;
    dword_48B700 = (int)result;
    v4 = dword_48B6F8 + 1;
  }
  result[v2] = a1;
  dword_48B6F8 = v4;
  result[v4] = 0;
  return result;
}
