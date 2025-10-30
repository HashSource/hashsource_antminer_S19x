int sub_5FDE4()
{
  char v0; // r2
  int v1; // r4
  int v2; // r8
  char v3; // r3
  char v5; // [sp+14h] [bp-38h]
  char v6[52]; // [sp+18h] [bp-34h] BYREF

  v0 = byte_5FE78C;
  byte_5FE78C = 0;
  v5 = v0;
  sub_7771C((unsigned __int8)dword_21B3A4);
  usleep(0x7530u);
  sub_77720((unsigned __int8)dword_21B3A4, dword_6084C8);
  usleep(0x4E20u);
  v1 = (unsigned __int8)(*(_DWORD *)(dword_223680 + 64) - 1);
  if ( (unsigned __int8)*(_DWORD *)(dword_223680 + 64) == 1 )
  {
    v2 = -1;
  }
  else
  {
    v2 = -1;
    do
    {
      sub_784A4((unsigned __int8)dword_21B3A4, dword_6084C8 * v1, 1);
      sub_24C80(0, 0, 1, (const char *)(dword_223680 + 48));
      sub_1E938(v6, 0x30u);
      printf("%s ", v6);
      printf(
        "%s : disa asic:%d,find asic num:%d,dummy_data:%d\n",
        "find_bad_ri_asic",
        v1,
        dword_5FE780,
        (unsigned __int8)byte_5FE78C);
      snprintf(
        byte_64D13C,
        0x100u,
        "disa asic:%d,find asic num:%d,dummy_data:%d",
        v1,
        dword_5FE780,
        (unsigned __int8)byte_5FE78C);
      sub_3CC5C((int)byte_64D13C, v6);
      v3 = v1 - 1;
      if ( v1 + 1 < dword_5FE780 )
        v2 = v1;
      v1 = (unsigned __int8)(v1 - 1);
    }
    while ( v3 );
  }
  sub_1E938(v6, 0x30u);
  printf("%s ", v6);
  printf("%s : bad asic index(from 0):%d,\n", "find_bad_ri_asic", v2);
  snprintf(byte_64D23C, 0x100u, "bad asic index(from 0):%d,", v2);
  sub_3CC5C((int)byte_64D23C, v6);
  byte_5FE78C = v5;
  return v2;
}
