int __fastcall sub_45AA4(int a1)
{
  int v3; // r3
  char v4[2048]; // [sp+0h] [bp-800h] BYREF

  if ( (unsigned int)dword_B308C > 3 )
  {
    snprintf(v4, 0x800u, "Chain %d PIC reset failed.\n", a1);
    sub_3B6AC(3, v4, 0, v3);
  }
  sub_26B64(a1, 0);
  sub_481F0(4, a1);
  sub_458A0(9u, "PIC reset failed.\n");
  return -1;
}
