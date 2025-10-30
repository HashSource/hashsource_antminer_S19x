int __fastcall sub_4AC1C(int a1)
{
  int i; // r4
  int v2; // r4
  int v4; // r3
  char v5[2048]; // [sp+0h] [bp-800h] BYREF

  if ( (unsigned int)off_AFC24 > 4 )
  {
    snprintf(v5, 0x800u, "[DEBUG] Board init, is_power_off = %d.\n", a1);
    sub_3AF5C(4, v5, 0, v4);
  }
  for ( i = 0; i != 4; ++i )
  {
    if ( sub_266F0(i) )
      sub_751EC((unsigned __int8)i);
  }
  sub_40968();
  v2 = sub_4460C();
  sub_3D9D4();
  sub_347EC();
  sub_3D9D4();
  return v2;
}
