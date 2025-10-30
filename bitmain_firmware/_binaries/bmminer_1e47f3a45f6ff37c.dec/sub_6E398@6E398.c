int __fastcall sub_6E398(unsigned __int8 a1)
{
  int result; // r0
  char v3[2048]; // [sp+8h] [bp-80Ch] BYREF
  int v4; // [sp+808h] [bp-Ch]
  unsigned __int8 i; // [sp+80Fh] [bp-5h]

  v4 = 0;
  sub_6E0A8();
  for ( i = 0x80; i; i >>= 1 )
  {
    sub_6D76C();
    sub_6D56C();
    if ( (i & a1) != 0 )
      sub_6D580();
    else
      sub_6D628();
    sub_6D6C4();
    sub_6D56C();
  }
  while ( 1 )
  {
    result = sub_6E268();
    if ( result )
      break;
    if ( ++v4 > 3 )
    {
      strcpy(v3, "IIC_SendData checkack 3 times,send data checkack error");
      return sub_3B6AC(0, v3, 0, (int)v3);
    }
  }
  return result;
}
