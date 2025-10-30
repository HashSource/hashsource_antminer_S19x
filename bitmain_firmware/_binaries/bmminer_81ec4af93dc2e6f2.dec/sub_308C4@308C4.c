void __noreturn sub_308C4()
{
  const char *v0; // r0
  time_t v1; // r0
  time_t v2; // r5
  unsigned int v3; // r0
  time_t v4; // r0
  unsigned int v5; // r5
  unsigned int v6; // r4
  int v7; // r0

  prctl(15, "chk_sys", 0);
  v0 = (const char *)sub_26510();
  if ( strcmp(v0, "BHB28601") )
    sub_26510();
  v1 = sub_30368();
  v2 = v1;
  while ( 1 )
  {
    if ( sub_3F36C(v1) == 3 )
    {
      v3 = sub_30368() - v2;
      if ( qword_9C8A48 || v3 > 0x708 )
        break;
    }
    v1 = sub_3D9D4(10);
  }
  v4 = sub_30368();
  qword_5BAF78 = 0;
  v5 = 1;
  dword_B13F4 = v4;
  dword_B13CC = v4;
  dword_B13F8 = v4;
  dword_B13F0 = v4;
  pthread_setcancelstate(1, 0);
  while ( 1 )
  {
    do
    {
      if ( !pthread_mutex_trylock(&stru_B13FC) )
      {
        if ( byte_AFC00 )
        {
          if ( byte_B13C8 )
            sub_42CB4();
        }
        pthread_mutex_unlock(&stru_B13FC);
      }
      ++v5;
      pthread_setcancelstate(0, 0);
      pthread_testcancel();
      sub_3D9D4(1000);
      pthread_setcancelstate(1, 0);
      v6 = v5 % 0x1E;
    }
    while ( v5 != 30 * (v5 / 0x1E) );
    if ( sub_266F0(v5 % 0x1E) )
    {
LABEL_18:
      v7 = sub_265B0();
      sub_43484(v6, v7);
    }
    while ( ++v6 != 4 )
    {
      if ( sub_266F0(v6) )
        goto LABEL_18;
    }
  }
}
