int sub_1E9A0()
{
  int v0; // r2
  char v1; // r4
  char v2; // r3
  char v4[48]; // [sp+0h] [bp-30h] BYREF

  sub_1E938(v4, 0x30u);
  printf("%s ", v4);
  printf("%s : %s\n", "pic_heart_beat_func", "pic_heart_beat_func");
  strcpy(byte_2333AC, "pic_heart_beat_func");
  sub_3CC5C(byte_2333AC, v4);
  v0 = (unsigned __int8)byte_2334AC;
LABEL_2:
  if ( v0 )
  {
    if ( sub_727A0((unsigned __int8)dword_21B3A4) )
    {
      sub_1E938(v4, 0x30u);
      printf("%s ", v4);
      printf("%s : Pic heart beat fail\n", "pic_heart_beat_func");
      strcpy(byte_2334B0, "Pic heart beat fail");
      sub_3CC5C(byte_2334B0, v4);
    }
    if ( byte_2334AC )
    {
      v1 = 10;
      while ( 1 )
      {
        sleep(1u);
        v0 = (unsigned __int8)byte_2334AC;
        v2 = v1 - 1;
        if ( !byte_2334AC )
          break;
        --v1;
        if ( !v2 )
          goto LABEL_2;
      }
    }
  }
  sub_1E938(v4, 0x30u);
  printf("%s ", v4);
  printf("%s : %s stop\n", "pic_heart_beat_func", "pic_heart_beat_func");
  snprintf(byte_2335B0, 0x100u, "%s stop", "pic_heart_beat_func");
  sub_3CC5C(byte_2335B0, v4);
  return 0;
}
