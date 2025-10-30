int sub_5C808()
{
  char v2[4]; // [sp+8h] [bp-824h] BYREF
  _BYTE v3[32]; // [sp+808h] [bp-24h] BYREF

  sub_5C62C((int)v3);
  if ( sub_583F0((int)v3, 32) )
  {
    if ( byte_91F58 || byte_87769 || dword_8697C > 2 )
    {
      snprintf(v2, 0x800u, "%s: api detect failed.", "bitmain_c5_prepare");
      sub_1E4EC(3, v2, 0);
    }
    return 0;
  }
  else
  {
    sub_4E78C();
    return 1;
  }
}
