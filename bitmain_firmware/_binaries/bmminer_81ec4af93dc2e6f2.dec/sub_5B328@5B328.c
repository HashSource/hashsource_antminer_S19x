unsigned int sub_5B328()
{
  unsigned int v1; // [sp+4h] [bp-8h] BYREF

  v1 = 0;
  sub_52E24(13, &v1);
  v1 = HIWORD(v1) << 16;
  sub_52EA0(13, v1);
  return sleep(2u);
}
