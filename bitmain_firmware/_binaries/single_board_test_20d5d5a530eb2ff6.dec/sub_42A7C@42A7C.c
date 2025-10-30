int sub_42A7C()
{
  int v0; // r0
  int v2; // r4
  char v3[52]; // [sp+0h] [bp-34h] BYREF

  dword_705344 = 1;
  v0 = pthread_create(&dword_6E345C, 0, (void *(*)(void *))sub_3EEC4, &unk_6E3468);
  if ( v0 )
  {
    v2 = v0;
    sub_1E938(v3, 0x30u);
    printf("%s ", v3);
    printf("%s : create read temp thread failed\n", "start_temp_thread");
    strcpy(byte_63F1D8, "create read temp thread failed");
    sub_3CC5C((int)byte_63F1D8, v3);
    return v2;
  }
  else
  {
    while ( !byte_705330 )
    {
      sub_1E938(v3, 0x30u);
      printf("%s ", v3);
      printf("%s : can not read senor temp\n", "start_temp_thread");
      strcpy(byte_63F0D8, "can not read senor temp");
      sub_3CC5C((int)byte_63F0D8, v3);
      sleep(1u);
    }
    return 0;
  }
}
