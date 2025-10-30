void __fastcall sub_68948(int a1)
{
  char v1[2052]; // [sp+0h] [bp-804h] BYREF

  snprintf(v1, 0x800u, "gpio port %d is not a supported key\n", a1);
  sub_47AB4(1, v1, 0);
}
