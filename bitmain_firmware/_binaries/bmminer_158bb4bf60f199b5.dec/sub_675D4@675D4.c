int __fastcall sub_675D4(int a1, unsigned int a2)
{
  int v2; // r4
  int v4; // r5
  char v5[2052]; // [sp+0h] [bp-804h] BYREF

  if ( a1 > 2 )
  {
    strcpy(v5, "bad param\n");
    sub_47AB4(0, v5, 0);
    return -3;
  }
  else
  {
    v2 = a1 - 1;
    if ( a1 == 1 )
    {
      if ( a2 >= 0x64 )
        a2 = 100;
      v4 = (100 - a2) | (a2 << 16);
      sub_66908(19, v4);
      sub_66908(23, v4);
      return v2;
    }
    else
    {
      snprintf(v5, 0x800u, "pwm type %d not supported\n", a1 - 1);
      sub_47AB4(0, v5, 0);
      return 0;
    }
  }
}
