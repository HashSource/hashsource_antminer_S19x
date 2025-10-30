int __fastcall sub_244A4(int a1, char *a2, int a3)
{
  int *v6; // r0
  int result; // r0
  int v8; // r4
  int *v9; // r0
  char s[2052]; // [sp+10h] [bp-804h] BYREF

  if ( byte_73398 && byte_68BD5 && (byte_74500 || byte_68BD4 || dword_67DB4 > 6) )
  {
    snprintf(s, 0x800u, "SEND: %s", a2);
    sub_20F58(7, s, 0);
  }
  if ( pthread_mutex_lock((pthread_mutex_t *)(a1 + 704)) )
  {
    v9 = _errno_location();
    snprintf(s, 0x800u, "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d", *v9, "util.c", "stratum_send", 1688);
    sub_20F58(3, s, 1);
    sub_3EBA0(1);
  }
  if ( *(_BYTE *)(a1 + 641) )
  {
    v8 = sub_21CA0(a1, a2, a3);
    if ( !pthread_mutex_unlock((pthread_mutex_t *)(a1 + 704)) )
    {
      off_67ED8();
      switch ( v8 )
      {
        case 2:
          if ( byte_68BD5 && (byte_74500 || byte_68BD4 || dword_67DB4 > 6) )
          {
            strcpy(s, "Failed to send in stratum_send");
            sub_20F58(7, s, 0);
            sub_24340(a1);
            return 0;
          }
          break;
        case 3:
          goto LABEL_12;
        case 1:
          if ( byte_68BD5 && (byte_74500 || byte_68BD4 || dword_67DB4 > 6) )
          {
            snprintf(s, 0x800u, "Write select failed on pool %d sock", *(_DWORD *)a1);
            sub_20F58(7, s, 0);
          }
          break;
        default:
          return v8 == 0;
      }
      sub_24340(a1);
      return 0;
    }
LABEL_7:
    v6 = _errno_location();
    snprintf(s, 0x800u, "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d", *v6, "util.c", "stratum_send", 1694);
    sub_20F58(3, s, 1);
    sub_3EBA0(1);
  }
  if ( pthread_mutex_unlock((pthread_mutex_t *)(a1 + 704)) )
    goto LABEL_7;
  off_67ED8();
LABEL_12:
  result = (unsigned __int8)byte_68BD5;
  if ( byte_68BD5 )
  {
    if ( byte_74500 || (result = (unsigned __int8)byte_68BD4, byte_68BD4) || dword_67DB4 > 6 )
    {
      strcpy(s, "Stratum send failed due to no pool stratum_active");
      sub_20F58(7, s, 0);
      return 0;
    }
  }
  return result;
}
