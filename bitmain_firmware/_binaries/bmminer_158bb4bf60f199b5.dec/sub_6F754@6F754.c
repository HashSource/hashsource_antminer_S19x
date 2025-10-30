unsigned int sub_6F754()
{
  unsigned int v1; // [sp+4h] [bp-8h] BYREF

  v1 = 0;
  sub_6688C(13, &v1);
  v1 = HIWORD(v1) << 16;
  sub_66908(13, v1);
  return sleep(2u);
}
