int sub_6FB14()
{
  unsigned int v1; // [sp+4h] [bp-4h] BYREF

  v1 = 0;
  sub_6688C(13, &v1);
  sub_66908(13, ~(~HIWORD(v1) << 16));
  sleep(3u);
  sub_6688C(13, &v1);
  sub_66908(13, HIWORD(v1) << 16);
  sleep(1u);
  return sub_6F508();
}
