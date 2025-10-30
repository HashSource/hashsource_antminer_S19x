int sub_5BC1C()
{
  char v2[4]; // [sp+8h] [bp-824h] BYREF
  _BYTE v3[32]; // [sp+808h] [bp-24h] BYREF

  sub_5BAF4((int)v3);
  if ( sub_5787C((int)v3, 32) )
  {
    if ( byte_90DC0 || byte_865D1 || dword_857E4 > 2 )
    {
      snprintf(v2, 0x800u, "%s: api detect failed.", "bitmain_c5_prepare");
      sub_1DB6C(3, v2, 0);
    }
    return 0;
  }
  else
  {
    sub_4DB08();
    return 1;
  }
}
