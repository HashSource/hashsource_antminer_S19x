int __fastcall sub_57C1C(int a1)
{
  char v3[2048]; // [sp+8h] [bp-804h] BYREF

  if ( !dword_5313E8 )
    return -2;
  if ( a1 == dword_5313E4 )
  {
    if ( pthread_mutex_lock(&stru_5313EC) )
    {
      strcpy(v3, "failed to lcd lock\n");
      sub_3AF5C(0, v3, 0, (int)v3);
      return -4;
    }
    else
    {
      memset(&unk_531404, 32, 0x40u);
      lseek(dword_5313E4, 0, 0);
      write(dword_5313E4, &unk_531404, 0x40u);
      pthread_mutex_unlock(&stru_5313EC);
      return 0;
    }
  }
  else
  {
    strcpy(v3, "bad param\n");
    sub_3AF5C(1, v3, 0, (int)v3);
    return -3;
  }
}
