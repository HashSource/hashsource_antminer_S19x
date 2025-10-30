void __noreturn sub_30F30()
{
  const char *v0; // r0
  time_t v1; // r0
  time_t v2; // r6
  unsigned int v3; // r0
  int v4; // r5
  int v5; // r4
  int v6; // r0

  prctl(15, "chk_sys", 0);
  v0 = (const char *)sub_26A14();
  if ( strcmp(v0, "BHB28601") )
    sub_26A14();
  v1 = sub_309B4();
  v2 = v1;
  while ( 1 )
  {
    if ( sub_40F54(v1) == 3 )
    {
      v3 = sub_309B4() - v2;
      if ( *(_QWORD *)&dbl_9CD900 || v3 > 0x708 )
        break;
    }
    v1 = sub_3E0F0(10);
  }
  sub_30EFC();
  pthread_setcancelstate(1, 0);
  v4 = 1;
  while ( 1 )
  {
    do
    {
      if ( !pthread_mutex_trylock(&stru_B416C) )
      {
        if ( byte_B3068 )
        {
          if ( byte_B4138 )
            sub_449E0();
        }
        pthread_mutex_unlock(&stru_B416C);
      }
      ++v4;
      pthread_setcancelstate(0, 0);
      pthread_testcancel();
      sub_3E0F0(1000);
      pthread_setcancelstate(1, 0);
      v5 = v4 % 30;
    }
    while ( v4 % 30 );
    if ( sub_26C0C(0) )
    {
LABEL_18:
      v6 = sub_26AB4();
      sub_451E8(v5, v6);
    }
    while ( ++v5 != 4 )
    {
      if ( sub_26C0C(v5) )
        goto LABEL_18;
    }
  }
}
