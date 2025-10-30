int sub_447FC()
{
  void *v0; // r0
  int result; // r0
  char v2[2048]; // [sp+0h] [bp-800h] BYREF

  v0 = calloc(1u, 0x40u);
  if ( !v0 )
  {
    strcpy(v2, "Failed to calloc mcast thr");
    sub_47AB4(3, v2, 1);
    sub_62EC0(1);
  }
  result = sub_4BDCC(v0, 0, sub_3D8EC);
  if ( result )
  {
    strcpy(v2, "API mcast thread create failed");
    sub_47AB4(3, v2, 1);
    sub_62EC0(1);
  }
  return result;
}
