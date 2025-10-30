int sub_42B74()
{
  int v0; // r6
  char v2[48]; // [sp+0h] [bp-30h] BYREF

  dword_705340 = 1;
  dword_705348 = 0;
  v0 = pthread_create(&dword_705350, 0, (void *(*)(void *))sub_3ED58, &unk_6E3468);
  if ( v0 )
  {
    sub_1E938(v2, 0x30u);
    printf("%s ", v2);
    printf("%s : create recv thread failed\n", "start_recv_thread");
    strcpy(byte_63F2D8, "create recv thread failed");
    sub_3CC5C((int)byte_63F2D8, v2);
  }
  return v0;
}
