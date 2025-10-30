int __fastcall sub_6D460(int a1)
{
  int v3; // [sp+4h] [bp-810h] BYREF
  char v4[2048]; // [sp+8h] [bp-80Ch] BYREF
  void *ptr; // [sp+808h] [bp-Ch] BYREF
  int v6; // [sp+80Ch] [bp-8h]

  v3 = a1;
  v6 = -1;
  if ( pthread_mutex_lock(&stru_536944) )
  {
    strcpy(v4, "failed to get i2c lock");
    sub_3B6AC(0, v4, 0, (int)v4);
    return -4;
  }
  else if ( sub_59620((_DWORD *)dword_53695C, (int)&v3, (int)&ptr) )
  {
    pthread_mutex_unlock(&stru_536944);
    v6 = *((_DWORD *)ptr + 1);
    free(ptr);
    return v6;
  }
  else
  {
    pthread_mutex_unlock(&stru_536944);
    return -2;
  }
}
