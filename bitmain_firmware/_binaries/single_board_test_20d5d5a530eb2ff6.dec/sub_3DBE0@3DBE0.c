int __fastcall sub_3DBE0(unsigned int a1, char *a2, int a3, int a4)
{
  bool v4; // zf
  int v7; // r7
  unsigned int v9; // r4
  int v11; // r11
  int v12; // r3
  int v13; // r2
  int v14; // r0
  char v16[52]; // [sp+8h] [bp-34h] BYREF

  v4 = a3 == 0;
  if ( a3 )
    v4 = a2 == 0;
  v7 = v4;
  v9 = 0;
  while ( 1 )
  {
    if ( !v7 )
    {
      v11 = *a2;
      if ( a3 > 0 )
      {
        v12 = 0;
        do
        {
          v13 = a2[v12];
          v12 = (unsigned __int8)(v12 + 1);
          if ( v11 < v13 )
            v11 = v13;
        }
        while ( v12 < a3 );
      }
      v14 = sub_3D820(a2, a3);
      if ( v11 - v14 < a4 && v14 <= 35 )
        break;
    }
    ++v9;
    sleep(1u);
    if ( v9 == 10 * (v9 / 0xA) )
    {
      sub_1E938(v16, 0x30u);
      printf("%s ", v16);
      printf("%s : Waiting for Hashboard cool down for %d seconds ...\n", "waiting_cool_down", v9);
      snprintf(byte_635BC8, 0x100u, "Waiting for Hashboard cool down for %d seconds ...", v9);
      sub_3CC5C((int)byte_635BC8, v16);
    }
    if ( v9 > a1 )
    {
      sub_1E938(v16, 0x30u);
      printf("%s ", v16);
      printf("%s : Wait for Hashboard cool down for %d seconds, break\n", "waiting_cool_down", v9);
      snprintf(byte_635CC8, 0x100u, "Wait for Hashboard cool down for %d seconds, break", v9);
      sub_3CC5C((int)byte_635CC8, v16);
      return 0;
    }
  }
  sub_1E938(v16, 0x30u);
  printf("%s ", v16);
  printf("%s : Hashboard cool down, begin test ...\n", "waiting_cool_down");
  strcpy(byte_635AC8, "Hashboard cool down, begin test ...");
  sub_3CC5C((int)byte_635AC8, v16);
  return 1;
}
