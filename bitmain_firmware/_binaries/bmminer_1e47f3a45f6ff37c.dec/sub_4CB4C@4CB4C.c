int __fastcall sub_4CB4C(int a1)
{
  int i; // r4
  int v2; // r4
  int v4; // r3
  char v5[2048]; // [sp+0h] [bp-800h] BYREF

  if ( (unsigned int)dword_B308C > 4 )
  {
    snprintf(v5, 0x800u, "[DEBUG] Board init, is_power_off = %d.\n", a1);
    sub_3B6AC(4, v5, 0, v4);
  }
  for ( i = 0; i != 4; ++i )
  {
    if ( sub_26C0C(i) )
      sub_78648((unsigned __int8)i);
  }
  sub_4251C();
  v2 = sub_463EC();
  sub_3E0F0();
  sub_34E9C();
  sub_3E0F0();
  return v2;
}
