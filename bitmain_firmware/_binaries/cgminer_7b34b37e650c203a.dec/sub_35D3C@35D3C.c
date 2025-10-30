int __fastcall sub_35D3C(_DWORD *a1)
{
  int v2; // r5
  pthread_t v4; // r0
  int v5; // r5
  int *v6; // r0
  int *v7; // r0
  int *v8; // r0
  int *v9; // r0
  char s[2048]; // [sp+10h] [bp-800h] BYREF

  if ( !*((_BYTE *)a1 + 107) )
  {
    v4 = pthread_self();
    pthread_detach(v4);
  }
LABEL_3:
  v2 = *((unsigned __int8 *)a1 + 105);
  if ( !*((_BYTE *)a1 + 105) )
  {
    while ( !sub_2F1E8(a1, v2) )
    {
      sub_3466C((int)a1);
      if ( *((_BYTE *)a1 + 107) )
        goto LABEL_23;
      sleep(0x1Eu);
      if ( !byte_74500 && !byte_68BD4 && dword_67DB4 <= 4 )
        goto LABEL_3;
      snprintf(s, 0x800u, "%s pool[%d] url = %s retry\n", "test_pool_thread", *a1, (const char *)a1[41]);
      sub_20F58(5, s, 0);
      v2 = *((unsigned __int8 *)a1 + 105);
      if ( *((_BYTE *)a1 + 105) )
        goto LABEL_10;
    }
    sub_2F180((int)a1, (_BYTE *)a1 + 97);
    if ( pthread_mutex_lock(&stru_7453C) )
    {
      v6 = _errno_location();
      snprintf(
        s,
        0x800u,
        "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d",
        *v6,
        "cgminer.c",
        "test_pool_thread",
        10771);
    }
    else if ( pthread_rwlock_wrlock(&rwlock) )
    {
      v7 = _errno_location();
      snprintf(
        s,
        0x800u,
        "WTF WRLOCK ERROR ON LOCK! errno=%d in %s %s():%d",
        *v7,
        "cgminer.c",
        "test_pool_thread",
        10771);
    }
    else
    {
      if ( !byte_69170 )
      {
        v5 = *a1;
        dword_69060 = (int)a1;
        byte_69170 = 1;
        v2 = v5 != 0;
      }
      if ( pthread_rwlock_unlock(&rwlock) )
      {
        v8 = _errno_location();
        snprintf(
          s,
          0x800u,
          "WTF RWLOCK ERROR ON UNLOCK! errno=%d in %s %s():%d",
          *v8,
          "cgminer.c",
          "test_pool_thread",
          10785);
      }
      else
      {
        if ( !pthread_mutex_unlock(&stru_7453C) )
        {
          off_67ED8();
          if ( v2 && (byte_74500 || byte_68BD4 || dword_67DB4 > 4) )
          {
            snprintf(s, 0x800u, "Switching to pool %d %s - first alive pool", *a1, (const char *)a1[41]);
            sub_20F58(5, s, 0);
          }
          sub_32238(a1);
          sub_34178(0);
LABEL_23:
          *((_BYTE *)a1 + 284) = 0;
          goto LABEL_10;
        }
        v9 = _errno_location();
        snprintf(
          s,
          0x800u,
          "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d",
          *v9,
          "cgminer.c",
          "test_pool_thread",
          10785);
      }
    }
    sub_20F58(3, s, 1);
    sub_2E6B0(1, 1);
  }
LABEL_10:
  if ( byte_74500 || byte_68BD4 || dword_67DB4 > 4 )
  {
    snprintf(s, 0x800u, "end test_pool_thread pool[%d]\n", *a1);
    sub_20F58(5, s, 0);
  }
  return 0;
}
