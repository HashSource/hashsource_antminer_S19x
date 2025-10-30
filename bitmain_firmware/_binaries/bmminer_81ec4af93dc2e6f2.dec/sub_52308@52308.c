int sub_52308()
{
  unsigned int *v1; // r0
  int v2; // r0
  int v3; // r0
  char v5[2048]; // [sp+0h] [bp-804h] BYREF

  if ( dword_530F14 )
    return 0;
  if ( sub_529AC() )
  {
    strcpy(v5, "fpga init failed\n");
    sub_3AF5C(0, v5, 0, (int)v5);
    return -1;
  }
  else if ( sub_5315C() )
  {
    strcpy(v5, "gpio init failed\n");
    sub_3AF5C(0, v5, 0, (int)v5);
    return -2;
  }
  else
  {
    memset(dword_530F1C, 0, sizeof(dword_530F1C));
    sub_51DC0(dword_530F1C);
    v1 = sub_51D1C(dword_530F1C);
    dword_530F14 = 1;
    v2 = sub_526CC(v1);
    v3 = sub_568D8(v2);
    sub_550B4(v3);
    return 0;
  }
}
