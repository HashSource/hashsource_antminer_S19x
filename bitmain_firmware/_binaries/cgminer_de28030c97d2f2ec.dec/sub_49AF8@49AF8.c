void __noreturn sub_49AF8()
{
  unsigned int v0; // r4
  char v1[2048]; // [sp+10h] [bp-844h] BYREF
  char v2[8]; // [sp+810h] [bp-44h] BYREF
  __time_t v3[4]; // [sp+818h] [bp-3Ch] BYREF
  _DWORD *v4; // [sp+828h] [bp-2Ch]
  int v5; // [sp+82Ch] [bp-28h]
  _DWORD *v6; // [sp+830h] [bp-24h]
  int v7; // [sp+834h] [bp-20h]
  __useconds_t useconds; // [sp+838h] [bp-1Ch]
  int v9; // [sp+83Ch] [bp-18h]
  int j; // [sp+840h] [bp-14h]
  unsigned int i; // [sp+844h] [bp-10h]

  v9 = 2;
  useconds = 10000;
  pthread_setcanceltype(1, 0);
  sub_2B968("Watchdog");
  sub_3C718();
  memset(&v3[2], 0, 8u);
  sub_22308(&dword_898C0);
LABEL_2:
  for ( i = 0; ; ++i )
  {
    v0 = i;
    if ( v0 >= sub_68648(1000000 * v9, useconds) )
      break;
    usleep(useconds);
    sub_36BC4();
  }
  sub_3CA5C(-1, 0);
  sub_22308(v3);
  if ( byte_92024 != 1 && !sub_2EB44() )
  {
    if ( byte_91F58 || byte_87769 || dword_8697C > 3 )
    {
      snprintf(v1, 0x800u, "Pausing execution as per stop time %02d:%02d scheduled", dword_94104, dword_94100);
      sub_1E4EC(4, v1, 0);
    }
    if ( byte_951F8 != 1 )
    {
      strcpy(v1, "Terminating execution as planned");
      sub_1E4EC(3, v1, 1);
      sub_4BFB0(0);
    }
    if ( byte_91F58 || byte_87769 || dword_8697C > 3 )
    {
      snprintf(v1, 0x800u, "Will restart execution as scheduled at %02d:%02d", dword_95204, dword_95200);
      sub_1E4EC(4, v1, 0);
    }
    byte_92024 = 1;
    sub_2E59C(&stru_94158, "cgminer.c", "watchdog_thread", 10520);
    for ( j = 0; j < dword_953F0; ++j )
      *(_BYTE *)(*(_DWORD *)(dword_930E8 + 4 * j) + 60) = 1;
    sub_2E704(&stru_94158, "cgminer.c", "watchdog_thread", 10527);
  }
  else if ( byte_92024 && sub_2EB44() )
  {
    if ( byte_91F58 || byte_87769 || dword_8697C > 3 )
    {
      snprintf(v1, 0x800u, "Restarting execution as per start time %02d:%02d scheduled", dword_95204, dword_95200);
      sub_1E4EC(4, v1, 0);
    }
    if ( byte_940F8 && (byte_91F58 || byte_87769 || dword_8697C > 3) )
    {
      snprintf(v1, 0x800u, "Will pause execution as scheduled at %02d:%02d", dword_94104, dword_94100);
      sub_1E4EC(4, v1, 0);
    }
    byte_92024 = 0;
    for ( j = 0; j < dword_953F0; ++j )
    {
      v7 = sub_2EEF8(j);
      if ( *(_DWORD *)(*(_DWORD *)(v7 + 36) + 32) != 1 )
      {
        *(_BYTE *)(v7 + 60) = 0;
        if ( byte_87768 && (byte_91F58 || byte_87769 || dword_8697C > 6) )
        {
          snprintf(v1, 0x800u, "Pushing sem post to thread %d", *(_DWORD *)v7);
          sub_1E4EC(7, v1, 0);
        }
        sub_2BA68((sem_t *)(v7 + 16), "cgminer.c", "watchdog_thread", 10554);
      }
    }
  }
  for ( j = 0; ; ++j )
  {
    if ( j >= dword_941A8 )
      goto LABEL_2;
    v6 = (_DWORD *)sub_2EF94(j);
    v5 = *(_DWORD *)v6[38];
    if ( v5 )
    {
      (*(void (__fastcall **)(_DWORD *))(v6[1] + 32))(v6);
      v4 = v6 + 8;
      snprintf(v2, 8u, "%s %d", *(const char **)(v6[1] + 8), v6[2]);
      if ( !*(_BYTE *)(v5 + 61) && *v4 != 1 )
      {
        if ( v6[24] && v3[0] - *(_DWORD *)(v5 + 44) <= 119 )
        {
          if ( v6[24] != 4 && (byte_91F58 || byte_87769 || dword_8697C > 2) )
          {
            snprintf(v1, 0x800u, "%s: Recovered, declaring WELL!", v2);
            sub_1E4EC(3, v1, 0);
          }
          v6[24] = 0;
          v6[60] = time(0);
        }
        else if ( v6[24] || v3[0] - *(_DWORD *)(v5 + 44) <= 120 )
        {
          if ( v6[24] == 1 && v3[0] - *(_DWORD *)(v5 + 44) > 600 )
          {
            v6[24] = 2;
            if ( byte_91F58 || byte_87769 || dword_8697C > 2 )
            {
              snprintf(v1, 0x800u, "%s: Not responded for more than 10 minutes, declaring DEAD!", v2);
              sub_1E4EC(3, v1, 0);
            }
            sub_22308((__time_t *)(v5 + 52));
            sub_2B5B0(v6, 4);
          }
          else if ( v3[0] - *(_DWORD *)(v5 + 52) > 60 && (v6[24] == 1 || v6[24] == 2) )
          {
            sub_22308((__time_t *)(v5 + 52));
            if ( byte_86C3C )
              goto LABEL_79;
          }
        }
        else
        {
          *((_QWORD *)v6 + 6) = 0;
          v6[24] = 1;
          if ( byte_91F58 || byte_87769 || dword_8697C > 2 )
          {
            snprintf(v1, 0x800u, "%s: Idle for more than 60 seconds, declaring SICK!", v2);
            sub_1E4EC(3, v1, 0);
          }
          sub_22308((__time_t *)(v5 + 52));
          sub_2B5B0(v6, 3);
          if ( byte_86C3C )
          {
            if ( byte_91F58 || byte_87769 || dword_8697C > 2 )
            {
              snprintf(v1, 0x800u, "%s: Attempting to restart", v2);
              sub_1E4EC(3, v1, 0);
            }
LABEL_79:
            sub_49038((int)v6);
            continue;
          }
        }
      }
    }
  }
}
