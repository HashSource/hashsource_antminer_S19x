int __fastcall sub_34738(int a1)
{
  int v2; // r3
  char v4[2052]; // [sp+0h] [bp-804h] BYREF

  if ( (unsigned int)off_AFC24 > 3 )
  {
    strcpy(v4, "set uart relay");
    sub_3AF5C(3, v4, 0, *(_DWORD *)"ay");
  }
  sub_277CC();
  sub_3D9D4(100);
  if ( (unsigned int)off_AFC24 > 3 )
  {
    snprintf(v4, 0x800u, "set UART baud to %d\n", a1);
    sub_3AF5C(3, v4, 0, v2);
  }
  sub_27624(a1);
  sub_265B0();
  return sub_18218();
}
