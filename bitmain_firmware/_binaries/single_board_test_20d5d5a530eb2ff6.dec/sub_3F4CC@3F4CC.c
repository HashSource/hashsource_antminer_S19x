int __fastcall sub_3F4CC(int a1)
{
  int result; // r0
  int *v3; // r2
  int v4; // r3
  int v5; // t1
  char v6[48]; // [sp+8h] [bp-30h] BYREF

  result = dword_705354[0];
  if ( dword_705354[0] <= 0 )
    goto LABEL_9;
  if ( a1 == dword_705358 )
    return result;
  v3 = &dword_705358;
  v4 = 0;
  while ( ++v4 != dword_705354[0] )
  {
    v5 = v3[1];
    ++v3;
    if ( v5 == a1 )
      return result;
  }
  if ( v4 <= 11 )
  {
LABEL_9:
    dword_705354[dword_705354[0] + 1] = a1;
    sub_1E938(v6, 0x30u);
    printf("%s ", v6);
    printf("%s : bad asic list[%d]:%d\n", "add_bad_asic_ids", dword_705354[0], dword_705354[dword_705354[0] + 1]);
    snprintf(byte_637DD0, 0x100u, "bad asic list[%d]:%d", dword_705354[0], dword_705354[dword_705354[0] + 1]);
    sub_3CC5C((int)byte_637DD0, v6);
    ++dword_705354[0];
  }
  sub_1E938(v6, 0x30u);
  printf("%s ", v6);
  printf("%s : bad asic list size:%d\n", "add_bad_asic_ids", dword_705354[0]);
  snprintf(byte_637ED0, 0x100u, "bad asic list size:%d", dword_705354[0]);
  return sub_3CC5C((int)byte_637ED0, v6);
}
