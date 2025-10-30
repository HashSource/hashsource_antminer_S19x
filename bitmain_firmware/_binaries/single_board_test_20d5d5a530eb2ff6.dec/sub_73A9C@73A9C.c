int __fastcall sub_73A9C(unsigned int a1, __int16 a2, __int16 a3, int a4, int a5)
{
  int v10; // r6
  char s[2048]; // [sp+8h] [bp-800h] BYREF

  if ( a1 > 0xF )
  {
    snprintf(s, 0x800u, "%s: Bad pic param, input chain is %d\n", "pic_write_iic", a1);
    nullsub_8();
    return -2147483135;
  }
  else
  {
    if ( dword_71ED68[2 * a1 + 1] )
      return sub_72900(dword_71ED68[2 * a1], a2, a3, a4, a5);
    v10 = sub_71FBC(a1);
    if ( v10 >= 0 )
    {
      return sub_72900(dword_71ED68[2 * a1], a2, a3, a4, a5);
    }
    else
    {
      snprintf(s, 0x800u, "%s: auto exec open_pic, but chain %d open eeprom failed\n", "pic_write_iic", a1);
      nullsub_8();
      return v10;
    }
  }
}
