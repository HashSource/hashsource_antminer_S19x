int __fastcall sub_5430C(int a1, unsigned int a2)
{
  int v3; // r3
  int v5; // [sp+0h] [bp-80Ch]
  char v6[2048]; // [sp+8h] [bp-804h] BYREF

  if ( a1 - 1 <= 1 )
  {
    if ( a1 == 1 )
    {
      v3 = a2;
      if ( a2 >= 0x64 )
        v3 = 100;
      v5 = v3;
      sub_52EA0(19, (v3 << 16) | (100 - v3));
      sub_52EA0(23, (v5 << 16) | (100 - v5));
    }
    else
    {
      snprintf(v6, 0x800u, "pwm type %d not supported\n", a1 - 1);
      sub_3AF5C(0, v6, 0, (int)v6);
    }
    return 0;
  }
  else
  {
    strcpy(v6, "bad param\n");
    sub_3AF5C(0, v6, 0, (int)v6);
    return -3;
  }
}
