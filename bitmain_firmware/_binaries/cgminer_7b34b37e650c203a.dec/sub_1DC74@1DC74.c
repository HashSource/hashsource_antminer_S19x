int sub_1DC74()
{
  void *v0; // r0
  int result; // r0
  char v2[2048]; // [sp+0h] [bp-800h] BYREF

  v0 = calloc(1u, 0x40u);
  if ( !v0 )
  {
    strcpy(v2, "Failed to calloc mcast thr");
    sub_20F58(3, v2, 1);
    sub_3EBA0(1);
  }
  result = sub_25164(v0, 0, sub_16D60);
  if ( result )
  {
    strcpy(v2, "API mcast thread create failed");
    sub_20F58(3, v2, 1);
    sub_3EBA0(1);
  }
  return result;
}
