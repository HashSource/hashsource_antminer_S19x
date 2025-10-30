const char *sub_42F3C()
{
  const char *v0; // r7
  unsigned int v1; // r4
  const char *v2; // r5
  int v3; // r6
  size_t v4; // r0
  const char *v5; // r8
  size_t v6; // r5
  size_t v7; // r0
  int v8; // r3
  int *v10; // r0
  int *v11; // r0
  int *v12; // r0
  char s[2052]; // [sp+20h] [bp-804h] BYREF

  v0 = (const char *)dword_6ACD4;
  if ( !dword_6ACD4 )
    return v0;
  if ( pthread_mutex_lock(&stru_76874) )
  {
    v10 = _errno_location();
    snprintf(
      s,
      0x800u,
      "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d",
      *v10,
      "driver-btm-c5_socketa.c",
      "bitmain_api_stats",
      387);
    sub_20F58(3, s, 1);
    sub_3EBA0(1);
  }
  if ( dword_6ACD0 == 296 )
  {
    v0 = 0;
LABEL_14:
    if ( pthread_mutex_unlock(&stru_76874) )
    {
      v11 = _errno_location();
      snprintf(
        s,
        0x800u,
        "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d",
        *v11,
        "driver-btm-c5_socketa.c",
        "bitmain_api_stats",
        413);
      sub_20F58(3, s, 1);
      sub_3EBA0(1);
    }
    off_67ED8();
    return v0;
  }
  v1 = 0;
  v0 = 0;
  do
  {
    v2 = (const char *)(dword_6ACD4 + v1 + 4);
    v3 = *(_DWORD *)(dword_6ACD4 + v1);
    v4 = strlen(v2) + v1 + 5;
    v5 = (const char *)(dword_6ACD4 + v4);
    if ( byte_68BD5 && (byte_74500 || byte_68BD4 || dword_67DB4 > 6) )
    {
      snprintf(
        s,
        0x800u,
        "[%s], update %s type %d value 0x%x",
        "bitmain_api_stats",
        v2,
        v3,
        *(unsigned __int8 *)(dword_6ACD4 + v4));
      sub_20F58(7, s, 0);
    }
    v0 = sub_18850((int)v0, v2, v3, v5, 1);
    v6 = strlen(v2);
    switch ( v3 )
    {
      case 0:
      case 1:
      case 2:
        v7 = strlen(v5) + 1;
        break;
      case 3:
      case 4:
      case 5:
      case 6:
      case 7:
      case 8:
      case 9:
      case 16:
      case 19:
      case 22:
      case 26:
        v7 = 4;
        break;
      case 10:
      case 11:
      case 12:
      case 13:
      case 15:
      case 17:
      case 18:
      case 20:
      case 21:
      case 23:
      case 24:
      case 25:
        v7 = 8;
        break;
      case 14:
        v7 = 1;
        break;
      default:
        if ( byte_74500 || (v7 = (unsigned __int8)byte_68BD4, byte_68BD4) || dword_67DB4 > 2 )
        {
          snprintf(s, 0x800u, "Should not happy for unknown data type %d", v3);
          sub_20F58(3, s, 0);
          v7 = 0;
        }
        break;
    }
    v1 += v7 + v6 + 5;
    v8 = dword_6ACD0 - 296;
  }
  while ( dword_6ACD0 - 296 > v1 );
  if ( v8 == v1 )
    goto LABEL_14;
  if ( byte_74500 || byte_68BD4 || dword_67DB4 > 2 )
  {
    snprintf(s, 0x800u, "length mismatch; sckt %d; actual %d", v8, v1);
    sub_20F58(3, s, 0);
  }
  if ( pthread_mutex_unlock(&stru_76874) )
  {
    v12 = _errno_location();
    snprintf(
      s,
      0x800u,
      "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d",
      *v12,
      "driver-btm-c5_socketa.c",
      "bitmain_api_stats",
      407);
    sub_20F58(3, s, 1);
    sub_3EBA0(1);
  }
  off_67ED8();
  return 0;
}
