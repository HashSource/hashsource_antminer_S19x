int sub_6E268()
{
  char v2[8]; // [sp+Ch] [bp-808h] BYREF
  char v3; // [sp+80Eh] [bp-6h]
  char v4; // [sp+80Fh] [bp-5h]

  v4 = 0;
  sub_6D76C();
  sub_6D56C();
  sub_6DF48();
  while ( 1 )
  {
    v3 = sub_6D808();
    if ( !v3 )
    {
      sub_6D6C4();
      sub_6D56C();
      return 1;
    }
    if ( v3 == -1 )
      break;
    ++v4;
    sub_6D6C4();
    sub_6D56C();
    sub_6D76C();
    sub_6D56C();
  }
  snprintf(v2, 0x800u, "%s:%d ack error\n", "i2c_check_ack", 290);
  sub_3B6AC(3, v2, 0, (int)v2);
  sub_6D6C4();
  sub_6D56C();
  return 0;
}
