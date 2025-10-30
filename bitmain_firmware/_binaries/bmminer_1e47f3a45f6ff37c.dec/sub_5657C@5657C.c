int sub_5657C()
{
  char v2[2048]; // [sp+0h] [bp-804h] BYREF

  if ( dword_535DA0 )
  {
    dword_535F20 = 1;
    pthread_create((pthread_t *)&dword_535F1C, 0, (void *(*)(void *))sub_56230, 0);
    return 0;
  }
  else
  {
    strcpy(v2, "please init platform first!!\n");
    sub_3B6AC(0, v2, 0, (int)v2);
    return -1;
  }
}
