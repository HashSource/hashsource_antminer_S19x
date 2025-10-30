int __fastcall sub_69128(int a1)
{
  int result; // r0
  char v2[2052]; // [sp+0h] [bp-804h] BYREF

  if ( dword_1B11FC )
    return 0;
  if ( a1 )
  {
    result = open64(a1, 2050);
    dword_1B1200 = result;
    if ( result < 0 )
    {
      strcpy(v2, "open lcd failed!!!\n");
      sub_47AB4(0, v2, 0);
      return -1;
    }
    else
    {
      dword_1B11FC = 1;
    }
  }
  else
  {
    strcpy(v2, "bad param\n");
    sub_47AB4(0, v2, 0);
    return -3;
  }
  return result;
}
