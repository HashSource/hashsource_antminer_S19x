int __fastcall sub_381F0(int a1, int a2)
{
  int v2; // r3
  int v3; // r0
  char s[2052]; // [sp+8h] [bp-804h] BYREF

  if ( byte_5BC044 || byte_4B6CA5 || dword_AFC2C > 4 )
  {
    snprintf(s, 0x800u, "%s %d\n", "bitmain_shutdown_cb", a2);
    a1 = sub_3AF5C(5, s, 0, v2);
  }
  sub_3F2C8(a1);
  sub_3D384(dword_B3914);
  sub_3D384(dword_B3918);
  sub_3D384(dword_B3910);
  sub_3D384(dword_B390C);
  v3 = sub_3D384(dword_5BC040);
  sub_5B764(v3);
  *(_BYTE *)(dword_5BAF94 + 364) = 1;
  return 0;
}
