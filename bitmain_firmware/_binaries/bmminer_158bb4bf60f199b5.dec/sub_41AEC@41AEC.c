int __fastcall sub_41AEC(int a1, int a2, int a3, int a4)
{
  int v6; // r6
  const char *v7; // r0
  const char *v8; // r0
  char **v9; // r0
  int result; // r0
  const char *v11; // r0
  const char *v12; // r0
  char **v13; // r1

  sub_3F65C((unsigned int *)a1, 16, 0, 0, a4);
  if ( a4 )
  {
    v6 = sub_3C770((unsigned int *)a1, ",\"NONCENUM\":[");
    v7 = sub_3F3D8(0, "10min nonce", 1, byte_245234, 0);
    v8 = sub_3F3D8((int)v7, "30min nonce", 1, byte_2440FC, 0);
    v9 = (char **)sub_3F3D8((int)v8, "60min nonce", 1, byte_243004, 0);
    result = sub_3E88C((unsigned int *)a1, v9, 1, 0);
    if ( v6 )
      *(_BYTE *)(a1 + 13) = 1;
  }
  else
  {
    sub_3C770((unsigned int *)a1, "NONCENUM,");
    v11 = sub_3F3D8(0, "10min nonce", 1, byte_245234, 0);
    v12 = sub_3F3D8((int)v11, "30min nonce", 1, byte_2440FC, 0);
    v13 = (char **)sub_3F3D8((int)v12, "60min nonce", 1, byte_243004, 0);
    return sub_3E88C((unsigned int *)a1, v13, 0, 0);
  }
  return result;
}
