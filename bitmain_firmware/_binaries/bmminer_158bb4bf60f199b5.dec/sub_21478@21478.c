void __noreturn sub_21478()
{
  int v0; // r3
  int v1; // r3
  _DWORD v2[2]; // [sp+8h] [bp-8h] BYREF

  prctl(15, "chk_status");
  while ( 1 )
  {
    pthread_mutex_lock(&stru_A0DB0);
    if ( byte_A06B8 )
    {
      sub_4A60C(v2);
      v0 = v2[0] - dword_A0D7C;
      if ( v2[1] - dword_A0D80 < 0 )
        --v0;
      if ( v0 <= 120 )
      {
        if ( dword_A0D60 )
        {
          sub_226C0(1, 0);
          dword_A0D60 = 0;
        }
      }
      else
      {
        v1 = dword_A0D60 + 1;
        dword_A0D60 = v1;
        if ( v1 == 1 )
        {
          sub_226C0(2, "network connection lost");
          v1 = dword_A0D60;
        }
        if ( v1 > 720 )
          sub_226C0(5, "network connection lost");
      }
    }
    sub_206E0();
    pthread_mutex_unlock(&stru_A0DB0);
    sub_21140();
    sub_4A804(1000);
  }
}
