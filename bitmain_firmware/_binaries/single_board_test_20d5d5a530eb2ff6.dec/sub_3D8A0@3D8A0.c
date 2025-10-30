int __fastcall sub_3D8A0(int a1)
{
  int v2; // r2
  int *v3; // r1
  int v4; // t1
  char v7[48]; // [sp+4h] [bp-154h] BYREF
  _DWORD v8[73]; // [sp+34h] [bp-124h] BYREF

  sub_6DD44(v8);
  v2 = v8[0] - 1;
  if ( v8[0] - 1 < 0 )
  {
LABEL_6:
    sub_1E938(v7, 0x30u);
    printf("%s ", v7);
    printf("%s : user input chain ID %d not connected\n", "pf_check_specific_chain", a1);
    snprintf(byte_6352C8, 0x100u, "user input chain ID %d not connected", a1);
    sub_3CC5C((int)byte_6352C8, v7);
    return 0;
  }
  if ( v8[18 * v2 + 1] != a1 )
  {
    v3 = &v8[18 * v8[0] - 35];
    while ( v2-- != 0 )
    {
      v4 = *v3;
      v3 -= 18;
      if ( v4 == a1 )
        return 1;
    }
    goto LABEL_6;
  }
  return 1;
}
