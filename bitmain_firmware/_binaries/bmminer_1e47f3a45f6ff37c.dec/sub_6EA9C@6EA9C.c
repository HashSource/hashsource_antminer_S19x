int __fastcall sub_6EA9C(int a1)
{
  char v3[2048]; // [sp+8h] [bp-804h] BYREF

  if ( !dword_53696C )
    return -2;
  if ( a1 == dword_536968 )
  {
    if ( pthread_mutex_lock(&stru_536970) )
    {
      strcpy(v3, "failed to lcd lock\n");
      sub_3B6AC(0, v3, 0, (int)v3);
      return -4;
    }
    else
    {
      memset(&unk_536988, 32, 0x40u);
      lseek(dword_536968, 0, 0);
      write(dword_536968, &unk_536988, 0x40u);
      pthread_mutex_unlock(&stru_536970);
      return 0;
    }
  }
  else
  {
    strcpy(v3, "bad param\n");
    sub_3B6AC(1, v3, 0, (int)v3);
    return -3;
  }
}
