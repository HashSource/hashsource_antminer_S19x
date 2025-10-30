int __fastcall sub_43D78(int a1)
{
  int v3; // r3
  char v4[2048]; // [sp+0h] [bp-800h] BYREF

  if ( (unsigned int)off_AFC24 > 3 )
  {
    snprintf(v4, 0x800u, "Chain %d PIC reset failed.\n", a1);
    sub_3AF5C(3, v4, 0, v3);
  }
  sub_26650(a1, 0);
  sub_46318(4, a1);
  sub_43B4C(9u, "PIC reset failed.\n");
  return -1;
}
