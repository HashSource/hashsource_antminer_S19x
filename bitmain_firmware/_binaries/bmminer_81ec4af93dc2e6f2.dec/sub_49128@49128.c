int __fastcall sub_49128(int a1)
{
  int v2; // r3
  char v3[2056]; // [sp-808h] [bp-808h] BYREF

  if ( (unsigned int)off_AFC24 > 1 )
  {
    snprintf(v3, 0x800u, "input value error: %c\n", a1);
    sub_3AF5C(1, v3, 0, v2);
  }
  return 255;
}
