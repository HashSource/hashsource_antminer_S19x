int __fastcall sub_6F958(int a1)
{
  int *v2; // r2
  int v3; // r3
  int v5; // r4
  int v7; // r0
  int v8; // r0

  if ( pthread_mutex_lock(&stru_65E2CC) )
  {
    nullsub_8();
    return -1;
  }
  else
  {
    if ( !dword_65E304 )
    {
      v7 = sub_6F620(0x100u);
      sub_6E140(v7, (unsigned int)sub_6F700);
      v8 = sub_6F620(0x101u);
      sub_6E140(v8, (unsigned int)sub_6F700);
      dword_65E304 = 1;
    }
    v2 = &dword_65E2E8;
    v3 = 0;
    while ( *v2++ )
    {
      if ( ++v3 == 5 )
      {
        v5 = -2;
        nullsub_8();
        goto LABEL_8;
      }
    }
    v5 = 0;
    dword_65E2C8[v3 + 8] = a1;
LABEL_8:
    pthread_mutex_unlock(&stru_65E2CC);
    return v5;
  }
}
