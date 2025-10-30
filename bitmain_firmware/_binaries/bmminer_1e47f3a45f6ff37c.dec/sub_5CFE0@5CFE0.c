int __fastcall sub_5CFE0(unsigned __int8 a1)
{
  char v4[8]; // [sp+14h] [bp-808h] BYREF
  int v5; // [sp+814h] [bp-8h]

  v5 = 0;
  if ( a1 <= 0xFu )
  {
    if ( dword_9CD940[2 * a1 + 1] )
      return sub_5BDD4(dword_9CD940[2 * a1]);
    v5 = sub_5CAFC(a1);
    if ( v5 >= 0 )
    {
      return sub_5BDD4(dword_9CD940[2 * a1]);
    }
    else
    {
      snprintf(v4, 0x800u, "%s: auto exec open_pic, but chain %d open eeprom failed\n", "jump_from_loader_to_app", a1);
      sub_3B6AC(0, v4, 0, (int)v4);
      return v5;
    }
  }
  else
  {
    snprintf(v4, 0x800u, "%s: Bad pic param, input chain is %d\n", "jump_from_loader_to_app", a1);
    sub_3B6AC(0, v4, 0, (int)v4);
    return -2147483135;
  }
}
