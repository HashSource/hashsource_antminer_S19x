int sub_631A0()
{
  char v1[52]; // [sp+0h] [bp-34h] BYREF

  byte_5FE774 = 0;
  byte_5FE77A = 0;
  byte_2334AC = 0;
  byte_611FD4 = 0;
  byte_5FE775 = 0;
  if ( dword_5FE760 )
  {
    pthread_join(dword_5FE760, 0);
    dword_5FE760 = 0;
  }
  if ( dword_5FE764 )
  {
    pthread_join(dword_5FE764, 0);
    dword_5FE764 = 0;
  }
  if ( dword_5FE768 )
  {
    pthread_join(dword_5FE768, 0);
    dword_5FE768 = 0;
  }
  if ( dword_5FE76C )
  {
    pthread_join(dword_5FE76C, 0);
    dword_5FE76C = 0;
  }
  if ( dword_5FE770 )
  {
    pthread_join(dword_5FE770, 0);
    dword_5FE770 = 0;
  }
  sub_1E938(v1, 0x30u);
  printf("%s ", v1);
  printf("%s : clear all thread.\n", "clear_all_thread");
  strcpy(byte_651740, "clear all thread.");
  return sub_3CC5C((int)byte_651740, v1);
}
