int __fastcall sub_711D0(char *a1)
{
  unsigned int v1; // r1
  int v3; // [sp+4h] [bp-8h] BYREF

  v1 = (unsigned int)&loc_1FFFC + 3;
  if ( (char *)&loc_1FFFC + 3 >= a1 )
    v1 = (unsigned int)a1;
  sub_6E0BC(20, v1 | 0x80000000);
  return sub_6E060(20, &v3);
}
