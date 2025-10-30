int __fastcall sub_70EA8(int a1)
{
  char s[2052]; // [sp+8h] [bp-804h] BYREF

  snprintf(s, 0x800u, "%s: Bad pic param, input chain is %d\n", "open_pic", a1);
  sub_47AB4(0, s, 0);
  return -2147483135;
}
