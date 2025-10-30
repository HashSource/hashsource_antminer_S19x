int sub_5602C()
{
  char v1[2048]; // [sp+0h] [bp-804h] BYREF

  if ( pthread_mutex_lock(&stru_535EE0) )
  {
    strcpy(v1, "failed to api lock\n");
    sub_3B6AC(0, v1, 0, (int)v1);
  }
  if ( dword_B380C > 0 )
    sub_6EA9C(dword_B380C);
  return pthread_mutex_unlock(&stru_535EE0);
}
