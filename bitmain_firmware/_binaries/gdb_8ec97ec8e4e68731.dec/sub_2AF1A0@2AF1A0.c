int __fastcall sub_2AF1A0(int result, int a2, int a3, int a4)
{
  int v4; // r4
  char s[12]; // [sp+4h] [bp-Ch] BYREF

  if ( a3 == -1 )
  {
    if ( !a4 )
      return ((int (__fastcall *)(int))loc_2A6C48)(18);
  }
  else
  {
    v4 = result;
    if ( (word_438898[(unsigned __int8)a3] & 0x10) != 0 )
    {
      s[0] = a3;
      s[1] = 0;
    }
    else
    {
      sprintf(s, "\\%03o", (unsigned __int8)a3);
    }
    sub_2A6A5C("%B:%d: unexpected character `%s' in Intel Hex file", v4, a2, s);
    return ((int (__fastcall *)(int))loc_2A6C48)(17);
  }
  return result;
}
