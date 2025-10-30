int sub_57828()
{
  char v1[2048]; // [sp+0h] [bp-804h] BYREF

  if ( pthread_mutex_lock(&stru_5313A4) )
  {
    strcpy(v1, "failed to api lock\n");
    return sub_3AF5C(0, v1, 0, (int)v1);
  }
  else
  {
    if ( dword_B097C > 0 )
      sub_57C1C(dword_B097C);
    return pthread_mutex_unlock(&stru_5313A4);
  }
}
