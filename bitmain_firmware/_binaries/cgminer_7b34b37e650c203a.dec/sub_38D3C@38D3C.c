void __noreturn sub_38D3C()
{
  int v0; // r5
  int v1; // r3
  int v2; // r0
  int v3; // r4
  int v4; // r6
  int v5; // r1
  int v6; // r3
  int v7; // r3
  int *v8; // r3
  int v9; // r1
  int v10; // t1
  int v11; // r4
  int v12; // r0
  sem_t *v13; // r5
  int v14; // r3
  int *v15; // r0
  int *v16; // r0
  struct timeval v17; // [sp+28h] [bp-814h] BYREF
  char v18[8]; // [sp+30h] [bp-80Ch] BYREF
  char s[2052]; // [sp+38h] [bp-804h] BYREF

  pthread_setcanceltype(1, 0);
  sub_250A8("Watchdog");
  sub_2C148();
  sub_239A4((struct timeval *)&dword_69180);
LABEL_2:
  while ( 1 )
  {
    sleep(2u);
    sub_37134();
    sub_375EC(-1, 0);
    sub_239A4(&v17);
    if ( byte_73460 )
      goto LABEL_91;
    if ( byte_7339C || byte_732E4 )
    {
      if ( !sub_2BD14() )
      {
        if ( !byte_74500 && !byte_68BD4 && dword_67DB4 <= 3 )
        {
          if ( !byte_7339C )
            goto LABEL_85;
          goto LABEL_50;
        }
        snprintf(s, 0x800u, "Pausing execution as per stop time %02d:%02d scheduled", dword_732F0, dword_732EC);
        sub_20F58(4, s, 0);
        if ( !byte_7339C )
        {
LABEL_85:
          strcpy(s, "Terminating execution as planned");
          sub_20F58(3, s, 1);
          sub_2E6B0(0, 1);
        }
        if ( byte_74500 || byte_68BD4 )
        {
LABEL_60:
          snprintf(s, 0x800u, "Will restart execution as scheduled at %02d:%02d", dword_733A8, dword_733A4);
          sub_20F58(4, s, 0);
        }
        else
        {
LABEL_50:
          if ( dword_67DB4 > 3 )
            goto LABEL_60;
        }
        byte_73460 = 1;
        if ( pthread_rwlock_rdlock(&stru_744A8) )
        {
          v15 = _errno_location();
          snprintf(
            s,
            0x800u,
            "WTF RDLOCK ERROR ON LOCK! errno=%d in %s %s():%d",
            *v15,
            "cgminer.c",
            "watchdog_thread",
            10425);
          goto LABEL_87;
        }
        if ( dword_75588 > 0 )
        {
          v8 = (int *)dword_744A4;
          v9 = dword_744A4 + 4 * dword_75588;
          do
          {
            v10 = *v8++;
            *(_BYTE *)(v10 + 60) = 1;
          }
          while ( v8 != (int *)v9 );
        }
        if ( pthread_rwlock_unlock(&stru_744A8) )
        {
          v16 = _errno_location();
          snprintf(
            s,
            0x800u,
            "WTF RWLOCK ERROR ON UNLOCK! errno=%d in %s %s():%d",
            *v16,
            "cgminer.c",
            "watchdog_thread",
            10432);
LABEL_87:
          sub_20F58(3, s, 1);
          sub_2E6B0(1, 1);
        }
        off_67ED8();
        goto LABEL_6;
      }
      if ( byte_73460 )
      {
LABEL_91:
        if ( !byte_7339C && !byte_732E4 || sub_2BD14() )
          break;
      }
    }
LABEL_6:
    if ( dword_755C0 > 0 )
    {
      v0 = 0;
      while ( 1 )
      {
        v2 = sub_3046C(v0);
        v3 = v2;
        v4 = **(_DWORD **)(v2 + 152);
        if ( !v4 )
          goto LABEL_20;
        (*(void (**)(void))(*(_DWORD *)(v2 + 4) + 32))();
        snprintf(v18, 8u, "%s %d", *(const char **)(*(_DWORD *)(v3 + 4) + 8), *(_DWORD *)(v3 + 8));
        if ( *(_BYTE *)(v4 + 61) || *(_DWORD *)(v3 + 32) == 1 )
          goto LABEL_20;
        v5 = *(_DWORD *)(v3 + 96);
        v6 = v17.tv_sec - *(_DWORD *)(v4 + 44);
        if ( !v5 )
        {
          if ( v6 <= 120 )
            goto LABEL_20;
          v1 = (unsigned __int8)byte_74500;
          *(_QWORD *)(v3 + 48) = 0;
          *(_DWORD *)(v3 + 96) = 1;
          if ( v1 || byte_68BD4 || dword_67DB4 > 2 )
          {
            snprintf(s, 0x800u, "%s: Idle for more than 60 seconds, declaring SICK!", v18);
            sub_20F58(3, s, 0);
          }
          sub_239A4((struct timeval *)(v4 + 52));
          sub_24DC4((_DWORD *)v3, 3);
          if ( !byte_6875C )
            goto LABEL_20;
          if ( byte_74500 || byte_68BD4 || dword_67DB4 > 2 )
          {
            snprintf(s, 0x800u, "%s: Attempting to restart", v18);
            sub_20F58(3, s, 0);
          }
LABEL_18:
          if ( *(_DWORD *)(v3 + 32) != 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)(v3 + 4) + 16))(v3);
          goto LABEL_20;
        }
        if ( v6 <= 119 )
        {
          if ( v5 != 4 && (byte_74500 || byte_68BD4 || dword_67DB4 > 2) )
          {
            snprintf(s, 0x800u, "%s: Recovered, declaring WELL!", v18);
            sub_20F58(3, s, 0);
          }
          *(_DWORD *)(v3 + 96) = 0;
          *(_DWORD *)(v3 + 240) = time(0);
          goto LABEL_20;
        }
        if ( v5 != 1 )
          break;
        if ( v6 > 600 )
        {
          v7 = (unsigned __int8)byte_74500;
          *(_DWORD *)(v3 + 96) = 2;
          if ( v7 || byte_68BD4 || dword_67DB4 > 2 )
          {
            snprintf(s, 0x800u, "%s: Not responded for more than 10 minutes, declaring DEAD!", v18);
            sub_20F58(3, s, 0);
          }
          sub_239A4((struct timeval *)(v4 + 52));
          sub_24DC4((_DWORD *)v3, 4);
          goto LABEL_20;
        }
        if ( v17.tv_sec - *(_DWORD *)(v4 + 52) > 60 )
          goto LABEL_41;
LABEL_20:
        if ( dword_755C0 <= ++v0 )
          goto LABEL_2;
      }
      if ( v17.tv_sec - *(_DWORD *)(v4 + 52) <= 60 || v5 != 2 )
        goto LABEL_20;
LABEL_41:
      sub_239A4((struct timeval *)(v4 + 52));
      if ( byte_6875C )
        goto LABEL_18;
      goto LABEL_20;
    }
  }
  if ( byte_74500 || byte_68BD4 || dword_67DB4 > 3 )
  {
    snprintf(s, 0x800u, "Restarting execution as per start time %02d:%02d scheduled", dword_733A8, dword_733A4);
    sub_20F58(4, s, 0);
    if ( !byte_732E4 )
      goto LABEL_67;
    if ( byte_74500 || byte_68BD4 )
    {
LABEL_81:
      snprintf(s, 0x800u, "Will pause execution as scheduled at %02d:%02d", dword_732F0, dword_732EC);
      sub_20F58(4, s, 0);
LABEL_67:
      v11 = 0;
      for ( byte_73460 = 0; dword_75588 > v11; ++v11 )
      {
        v12 = sub_31B04(v11);
        v13 = (sem_t *)v12;
        if ( *(_DWORD *)(*(_DWORD *)(v12 + 36) + 32) != 1 )
        {
          v14 = (unsigned __int8)byte_68BD5;
          *(_BYTE *)(v12 + 60) = 0;
          if ( v14 && (byte_74500 || byte_68BD4 || dword_67DB4 > 6) )
          {
            snprintf(s, 0x800u, "Pushing sem post to thread %d", *(_DWORD *)v12);
            sub_20F58(7, s, 0);
          }
          sub_251AC(v13 + 1, "cgminer.c", "watchdog_thread", 10459);
        }
      }
      goto LABEL_6;
    }
  }
  else if ( !byte_732E4 )
  {
    goto LABEL_67;
  }
  if ( dword_67DB4 <= 3 )
    goto LABEL_67;
  goto LABEL_81;
}
