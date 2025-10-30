int __fastcall sub_69348(int a1)
{
  int v1; // r6
  int v2; // r1
  char v4[2048]; // [sp+8h] [bp-800h] BYREF

  if ( !dword_1B11FC )
    return -2;
  if ( dword_1B1200 == a1 )
  {
    if ( pthread_mutex_lock(&stru_1B1204) )
    {
      strcpy(v4, "failed to lcd lock\n");
      sub_47AB4(0, v4, 0);
      return -4;
    }
    else
    {
      memset(&unk_1B121C, 0x20, 0x40u);
      v1 = dword_1B1200;
      lseek64(dword_1B1200, v2, 0, 0, 0);
      write(v1, &unk_1B121C, 0x40u);
      pthread_mutex_unlock(&stru_1B1204);
      return 0;
    }
  }
  else
  {
    strcpy(v4, "bad param\n");
    sub_47AB4(1, v4, 0);
    return -3;
  }
}
