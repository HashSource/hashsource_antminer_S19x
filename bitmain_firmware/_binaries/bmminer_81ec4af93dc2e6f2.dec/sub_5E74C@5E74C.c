int __fastcall sub_5E74C(unsigned __int8 a1)
{
  char v4[12]; // [sp+10h] [bp-80Ch] BYREF
  int v5; // [sp+810h] [bp-Ch]
  int v6; // [sp+814h] [bp-8h]

  v6 = 0;
  v5 = 0;
  if ( a1 <= 0xFu )
  {
    if ( dword_9C8A88[2 * a1 + 1] )
      return sub_5D4D8(dword_9C8A88[2 * a1]);
    v6 = sub_5E4DC(a1);
    if ( v6 >= 0 )
    {
      return sub_5D4D8(dword_9C8A88[2 * a1]);
    }
    else
    {
      snprintf(v4, 0x800u, "%s: auto exec open_pic, but chain %d open eeprom failed\n", "get_pic_version", a1);
      sub_3AF5C(0, v4, 0, (int)v4);
      return v6;
    }
  }
  else
  {
    snprintf(v4, 0x800u, "%s: Bad pic param, input chain is %d\n", "get_pic_version", a1);
    sub_3AF5C(0, v4, 0, (int)v4);
    return -2147483135;
  }
}
