int __fastcall sub_53658(int a1)
{
  char v4[2048]; // [sp+8h] [bp-844h] BYREF
  char s[64]; // [sp+808h] [bp-44h] BYREF

  if ( pthread_mutex_lock(&stru_531060) )
  {
    strcpy(v4, "failed to api lock\n");
    sub_3AF5C(0, v4, 0, (int)v4);
    return -1;
  }
  else
  {
    snprintf(s, 0x40u, "/sys/class/gpio/gpio%d", a1);
    if ( access(s, 0) )
    {
      pthread_mutex_unlock(&stru_531060);
      return 0;
    }
    else
    {
      pthread_mutex_unlock(&stru_531060);
      return 1;
    }
  }
}
