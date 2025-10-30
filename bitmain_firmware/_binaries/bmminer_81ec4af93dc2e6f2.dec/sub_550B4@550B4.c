int sub_550B4()
{
  char v2[2048]; // [sp+0h] [bp-804h] BYREF

  if ( dword_530F14 )
    return 0;
  strcpy(v2, "please init platform first!!\n");
  sub_3AF5C(0, v2, 0, (int)v2);
  return -1;
}
