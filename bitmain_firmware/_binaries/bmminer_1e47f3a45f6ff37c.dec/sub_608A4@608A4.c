int __fastcall sub_608A4(unsigned __int8 a1, const char *a2)
{
  char v6[8]; // [sp+14h] [bp-808h] BYREF
  int v7; // [sp+814h] [bp-8h]

  v7 = 0;
  if ( a1 <= 0xFu )
  {
    if ( dword_9CD940[2 * a1 + 1] )
      return sub_5FCC4(a1, a2);
    v7 = sub_5CAFC(a1);
    if ( v7 >= 0 )
    {
      return sub_5FCC4(a1, a2);
    }
    else
    {
      snprintf(v6, 0x800u, "%s: auto exec open_pic, but chain %d open eeprom failed\n", "upgrade_pic", a1);
      sub_3B6AC(0, v6, 0, (int)v6);
      return v7;
    }
  }
  else
  {
    snprintf(v6, 0x800u, "%s: Bad pic param, input chain is %d\n", "upgrade_pic", a1);
    sub_3B6AC(0, v6, 0, (int)v6);
    return -2147483135;
  }
}
