size_t __fastcall sub_609D8(unsigned __int8 a1, unsigned __int8 a2, unsigned __int8 a3, void *a4, int a5)
{
  char v11[8]; // [sp+14h] [bp-808h] BYREF
  int v12; // [sp+814h] [bp-8h]

  v12 = 0;
  if ( a1 <= 0xFu )
  {
    if ( dword_9CD940[2 * a1 + 1] || (v12 = sub_5CAFC(a1), v12 >= 0) )
    {
      v12 = sub_5EBB0(dword_9CD940[2 * a1], a2, a3, 0, 0);
      if ( v12 >= 0 )
      {
        usleep(0x2710u);
        return sub_5E754(dword_9CD940[2 * a1], a2, a4, a5);
      }
      else
      {
        snprintf(v11, 0x800u, "%s: select slave: 0x%02x, reg/command: 0x%02x is failed", "pic_read_iic", a2, a3);
        sub_3B6AC(0, v11, 0, (int)v11);
        return v12;
      }
    }
    else
    {
      snprintf(v11, 0x800u, "%s: auto exec open_pic, but chain %d open eeprom failed\n", "pic_read_iic", a1);
      sub_3B6AC(0, v11, 0, (int)v11);
      return v12;
    }
  }
  else
  {
    snprintf(v11, 0x800u, "%s: Bad pic param, input chain is %d\n", "pic_read_iic", a1);
    sub_3B6AC(0, v11, 0, (int)v11);
    return -2147483135;
  }
}
