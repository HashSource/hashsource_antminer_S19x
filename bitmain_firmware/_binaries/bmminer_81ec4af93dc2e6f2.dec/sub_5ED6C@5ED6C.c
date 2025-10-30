int __fastcall sub_5ED6C(unsigned __int8 a1)
{
  char v4[8]; // [sp+14h] [bp-808h] BYREF
  int v5; // [sp+814h] [bp-8h]

  v5 = 0;
  if ( a1 <= 0xFu )
  {
    if ( dword_9C8A88[2 * a1 + 1] )
      return sub_5E240(dword_9C8A88[2 * a1]);
    v5 = sub_5E4DC(a1);
    if ( v5 >= 0 )
    {
      return sub_5E240(dword_9C8A88[2 * a1]);
    }
    else
    {
      snprintf(v4, 0x800u, "%s: auto exec open_pic, but chain %d open eeprom failed\n", "send_pic_heart_beat", a1);
      sub_3AF5C(0, v4, 0, (int)v4);
      return v5;
    }
  }
  else
  {
    snprintf(v4, 0x800u, "%s: Bad pic param, input chain is %d\n", "send_pic_heart_beat", a1);
    sub_3AF5C(0, v4, 0, (int)v4);
    return -2147483135;
  }
}
