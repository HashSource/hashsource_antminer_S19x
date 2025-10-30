int __fastcall sub_623D8(unsigned __int8 a1, unsigned __int8 a2, unsigned __int8 a3, int a4, int a5)
{
  char v11[8]; // [sp+14h] [bp-808h] BYREF
  int v12; // [sp+814h] [bp-8h]

  v12 = 0;
  if ( a1 <= 0xFu )
  {
    if ( dword_9C8A88[2 * a1 + 1] )
      return sub_604F8(dword_9C8A88[2 * a1], a2, a3, a4, a5);
    v12 = sub_5E4DC(a1);
    if ( v12 >= 0 )
    {
      return sub_604F8(dword_9C8A88[2 * a1], a2, a3, a4, a5);
    }
    else
    {
      snprintf(v11, 0x800u, "%s: auto exec open_pic, but chain %d open eeprom failed\n", "pic_write_iic", a1);
      sub_3AF5C(0, v11, 0, (int)v11);
      return v12;
    }
  }
  else
  {
    snprintf(v11, 0x800u, "%s: Bad pic param, input chain is %d\n", "pic_write_iic", a1);
    sub_3AF5C(0, v11, 0, (int)v11);
    return -2147483135;
  }
}
