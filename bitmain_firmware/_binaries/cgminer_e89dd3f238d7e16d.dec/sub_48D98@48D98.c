void __noreturn sub_48D98()
{
  unsigned int v0; // r0
  char v1[2048]; // [sp+10h] [bp-83Ch] BYREF
  char v2[8]; // [sp+810h] [bp-3Ch] BYREF
  __time_t v3[4]; // [sp+818h] [bp-34h] BYREF
  _DWORD *v4; // [sp+828h] [bp-24h]
  int v5; // [sp+82Ch] [bp-20h]
  _DWORD *v6; // [sp+830h] [bp-1Ch]
  int v7; // [sp+834h] [bp-18h]
  __useconds_t useconds; // [sp+838h] [bp-14h]
  int v9; // [sp+83Ch] [bp-10h]
  int j; // [sp+840h] [bp-Ch]
  unsigned int i; // [sp+844h] [bp-8h]

  v9 = 2;
  useconds = 10000;
  pthread_setcanceltype(1, 0);
  sub_2A95C("Watchdog");
  sub_3B824();
  memset(&v3[2], 0, 8u);
  sub_21AC0(&dword_88728);
LABEL_2:
  for ( i = 0; ; ++i )
  {
    v0 = sub_679D0(1000000 * v9, useconds);
    if ( v0 <= i )
      break;
    usleep(useconds);
    sub_35B90();
  }
  sub_3BB74(-1, 0);
  sub_21AC0(v3);
  if ( byte_90E8C != 1 && !sub_2DB30() )
  {
    if ( byte_90DC0 || byte_865D1 || dword_857E4 > 3 )
    {
      snprintf(v1, 0x800u, "Pausing execution as per stop time %02d:%02d scheduled", dword_92F6C, dword_92F68);
      sub_1DB6C(4, v1, 0);
    }
    if ( byte_94060 != 1 )
    {
      strcpy(v1, "Terminating execution as planned");
      sub_1DB6C(3, v1, 1);
      sub_4B2A0(0);
    }
    if ( byte_90DC0 || byte_865D1 || dword_857E4 > 3 )
    {
      snprintf(v1, 0x800u, "Will restart execution as scheduled at %02d:%02d", dword_9406C, dword_94068);
      sub_1DB6C(4, v1, 0);
    }
    byte_90E8C = 1;
    sub_2D554(&stru_92FC0, "cgminer.c", "watchdog_thread", 10520);
    for ( j = 0; j < dword_94258; ++j )
      *(_BYTE *)(*(_DWORD *)(dword_91F50 + 4 * j) + 60) = 1;
    sub_2D6C8(&stru_92FC0, "cgminer.c", "watchdog_thread", 10527);
  }
  else if ( byte_90E8C && sub_2DB30() )
  {
    if ( byte_90DC0 || byte_865D1 || dword_857E4 > 3 )
    {
      snprintf(v1, 0x800u, "Restarting execution as per start time %02d:%02d scheduled", dword_9406C, dword_94068);
      sub_1DB6C(4, v1, 0);
    }
    if ( byte_92F60 && (byte_90DC0 || byte_865D1 || dword_857E4 > 3) )
    {
      snprintf(v1, 0x800u, "Will pause execution as scheduled at %02d:%02d", dword_92F6C, dword_92F68);
      sub_1DB6C(4, v1, 0);
    }
    byte_90E8C = 0;
    for ( j = 0; j < dword_94258; ++j )
    {
      v7 = sub_2DEEC(j);
      if ( *(_DWORD *)(*(_DWORD *)(v7 + 36) + 32) != 1 )
      {
        *(_BYTE *)(v7 + 60) = 0;
        if ( byte_865D0 && (byte_90DC0 || byte_865D1 || dword_857E4 > 6) )
        {
          snprintf(v1, 0x800u, "Pushing sem post to thread %d", *(_DWORD *)v7);
          sub_1DB6C(7, v1, 0);
        }
        sub_2AA64((sem_t *)(v7 + 16), "cgminer.c", "watchdog_thread", 10554);
      }
    }
  }
  for ( j = 0; ; ++j )
  {
    if ( j >= dword_93010 )
      goto LABEL_2;
    v6 = (_DWORD *)sub_2DF88(j);
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
          if ( v6[24] != 4 && (byte_90DC0 || byte_865D1 || dword_857E4 > 2) )
          {
            snprintf(v1, 0x800u, "%s: Recovered, declaring WELL!", v2);
            sub_1DB6C(3, v1, 0);
          }
          v6[24] = 0;
          v6[60] = time(0);
        }
        else if ( v6[24] || v3[0] - *(_DWORD *)(v5 + 44) <= 120 )
        {
          if ( v6[24] == 1 && v3[0] - *(_DWORD *)(v5 + 44) > 600 )
          {
            v6[24] = 2;
            if ( byte_90DC0 || byte_865D1 || dword_857E4 > 2 )
            {
              snprintf(v1, 0x800u, "%s: Not responded for more than 10 minutes, declaring DEAD!", v2);
              sub_1DB6C(3, v1, 0);
            }
            sub_21AC0((__time_t *)(v5 + 52));
            sub_2A5A0(v6, 4);
          }
          else if ( v3[0] - *(_DWORD *)(v5 + 52) > 60 && (v6[24] == 1 || v6[24] == 2) )
          {
            sub_21AC0((__time_t *)(v5 + 52));
            if ( byte_85AA4 )
              goto LABEL_77;
          }
        }
        else
        {
          *((_QWORD *)v6 + 6) = 0;
          v6[24] = 1;
          if ( byte_90DC0 || byte_865D1 || dword_857E4 > 2 )
          {
            snprintf(v1, 0x800u, "%s: Idle for more than 60 seconds, declaring SICK!", v2);
            sub_1DB6C(3, v1, 0);
          }
          sub_21AC0((__time_t *)(v5 + 52));
          sub_2A5A0(v6, 3);
          if ( byte_85AA4 )
          {
            if ( byte_90DC0 || byte_865D1 || dword_857E4 > 2 )
            {
              snprintf(v1, 0x800u, "%s: Attempting to restart", v2);
              sub_1DB6C(3, v1, 0);
            }
LABEL_77:
            sub_482AC((int)v6);
            continue;
          }
        }
      }
    }
  }
}
