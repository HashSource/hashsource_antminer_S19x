int __fastcall sub_66298(int a1)
{
  int v1; // r6
  void *v3; // r0
  int v4; // r0
  int v5; // r0
  int v6; // r0
  char v7[2052]; // [sp+0h] [bp-804h] BYREF

  if ( dword_1B0E60 )
    return 0;
  if ( sub_667A0(a1) )
  {
    v1 = -1;
    strcpy(v7, "fpga init failed\n");
    sub_47AB4(0, v7, 0);
    return v1;
  }
  if ( sub_669C4(0) )
  {
    v1 = -2;
    strcpy(v7, "gpio init failed\n");
    sub_47AB4(0, v7, 0);
    return v1;
  }
  v3 = memset(dword_1B0D38, 0, sizeof(dword_1B0D38));
  if ( sub_694C4(v3) )
  {
    v6 = sub_667C0();
    nullsub_1(v6);
    v1 = -3;
    strcpy(v7, "failed to load hal config\n");
    sub_47AB4(0, v7, 0);
    return v1;
  }
  sub_6607C();
  dword_1B0E60 = 1;
  v4 = sub_66474();
  v5 = sub_68B54(v4);
  sub_67EA0(v5);
  return 0;
}
