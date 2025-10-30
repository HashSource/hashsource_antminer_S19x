int sub_5B7C4()
{
  unsigned int v0; // r0
  unsigned int v2; // [sp+4h] [bp-8h] BYREF

  v2 = 0;
  sub_52E24(13, &v2);
  sub_52EA0(13, ~(~HIWORD(v2) << 16));
  sleep(3u);
  sub_52E24(13, &v2);
  sub_52EA0(13, HIWORD(v2) << 16);
  v0 = sleep(1u);
  return sub_5AB70(v0);
}
