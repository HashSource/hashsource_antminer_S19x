int __fastcall sub_15280(int a1)
{
  int v1; // r3
  char v3[2056]; // [sp-808h] [bp-808h] BYREF

  if ( (unsigned int)dword_B308C > 1 )
  {
    snprintf(v3, 0x800u, "input value error: %c\n", a1);
    sub_3B6AC(1, v3, 0, v1);
  }
  return 255;
}
