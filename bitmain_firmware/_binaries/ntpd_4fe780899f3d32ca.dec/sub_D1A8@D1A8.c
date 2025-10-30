void __fastcall sub_D1A8(int a1, int a2, int *ptr, const char *a4, int a5, int a6, int a7)
{
  int v10; // r4
  int v11; // r3
  const char *v12; // r4
  const char *v13; // r0
  const char *v14; // r0
  unsigned __int16 v15[14]; // [sp+20h] [bp-24h] BYREF

  v10 = a7;
  if ( a1 )
  {
    free(ptr);
    v14 = gai_strerror(a1);
    sub_64E00(3, "giving up resolving host %s: %s (%d)", a4, v14, a1);
  }
  else
  {
    if ( a7 )
    {
      while ( 1 )
      {
        _memcpy_chk(v15, *(_DWORD *)(v10 + 20));
        if ( sub_CC78(v15, ptr[1]) )
          break;
        v10 = *(_DWORD *)(v10 + 28);
        if ( !v10 )
          goto LABEL_12;
      }
      if ( (ntp_syslogmask & 1) != 0 )
      {
        v11 = *((unsigned __int16 *)ptr + 4);
        if ( v11 == 10 )
        {
          v12 = "(AAAA) ";
        }
        else if ( v11 == 2 )
        {
          v12 = "(A) ";
        }
        else
        {
          v12 = (const char *)&unk_97F7C;
        }
        v13 = (const char *)sub_6C2E8(v15);
        sub_64E00(6, "DNS %s %s-> %s", a4, v12, v13);
      }
      sub_32898(
        v15,
        0,
        0,
        -1,
        *((unsigned __int8 *)ptr + 16),
        *((unsigned __int8 *)ptr + 17),
        *((unsigned __int8 *)ptr + 18),
        *((unsigned __int8 *)ptr + 19),
        *ptr,
        ptr[5],
        ptr[3],
        ptr[6]);
    }
LABEL_12:
    free(ptr);
  }
}
