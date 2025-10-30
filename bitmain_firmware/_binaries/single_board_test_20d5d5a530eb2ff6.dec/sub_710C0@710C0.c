int sub_710C0()
{
  unsigned int v1; // [sp+4h] [bp-4h] BYREF

  v1 = 0;
  sub_6E060(13, &v1);
  sub_6E0BC(13, ~(~HIWORD(v1) << 16));
  sleep(3u);
  sub_6E060(13, &v1);
  sub_6E0BC(13, HIWORD(v1) << 16);
  sleep(1u);
  return sub_70C48();
}
