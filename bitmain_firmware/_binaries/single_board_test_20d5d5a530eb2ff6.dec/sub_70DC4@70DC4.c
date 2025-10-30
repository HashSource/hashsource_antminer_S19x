unsigned int sub_70DC4()
{
  unsigned int v1; // [sp+4h] [bp-8h] BYREF

  v1 = 0;
  sub_6E060(13, &v1);
  v1 = ~(~HIWORD(v1) << 16);
  sub_6E0BC(13, v1);
  return sleep(2u);
}
