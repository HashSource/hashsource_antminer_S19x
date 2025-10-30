int sub_257E4()
{
  float v0; // s0
  int v2; // r0
  char v3; // [sp+7h] [bp-801h] BYREF
  char v4[2048]; // [sp+8h] [bp-800h] BYREF

  v3 = 0;
  if ( (unsigned int)dword_9E31C > 3 )
  {
    strcpy(v4, "reopen_core start!\n");
    sub_47AB4(3, v4, 0);
  }
  pthread_mutex_lock(&stru_A0D98);
  pthread_mutex_lock(&stru_A0DB0);
  memset(v4, 0, 0x40u);
  sprintf(v4, "echo %d > %s", 0, "/sys/class/gpio/gpio941/value");
  system(v4);
  memset(v4, 0, 0x40u);
  sprintf(v4, "echo %d > %s", 0, "/sys/class/gpio/gpio942/value");
  system(v4);
  if ( !sub_249B0() && !sub_24B88() && !sub_22D34() )
  {
    sub_15C50();
    if ( sub_15DA8() )
      sub_14B6C();
    sub_4A804(10);
    sub_21F2C();
    sub_4A804(10);
    sub_15E90(0);
    if ( !sub_228FC() )
    {
      pthread_mutex_unlock(&stru_A0DB0);
      sub_22DD8();
      sub_22E9C((int)v0, dword_9EE34, 90);
      sub_31368(&v3);
      if ( v3 )
        v2 = sub_1A488();
      else
        v2 = sub_1A3B8();
      if ( !v2 )
      {
        sub_21F4C(0);
        pthread_mutex_unlock(&stru_A0D98);
        sub_4A60C(&dword_A0D7C);
        sub_4A804(500);
        if ( (unsigned int)dword_9E31C > 3 )
        {
          strcpy(v4, "reopen_core done!\n");
          sub_47AB4(3, v4, 0);
        }
      }
    }
  }
  return 0;
}
