int __fastcall sub_FCE4(int result, unsigned __int64 a2)
{
  int v3; // r4
  unsigned __int64 v4; // r6
  unsigned __int64 v5; // [sp+0h] [bp-18h] BYREF
  unsigned __int64 v6; // [sp+8h] [bp-10h]

  v3 = result;
  v4 = a2;
  switch ( result )
  {
    case 7:
      v6 = a2;
      v5 = a2;
      result = setrlimit64(7, &v5);
      if ( result == -1 )
        return sub_65D40(3, "Cannot set RLIMIT_NOFILE: %m");
      break;
    case 8:
      if ( (*(int *)((_BYTE *)&elf_hash_bucket[261] + (_DWORD)off_B711C) & 0xF) == 0 )
      {
        v6 = a2;
        v5 = a2;
        result = setrlimit64(8, &v5);
        if ( result == -1 )
          return sub_65D40(3, "Cannot set RLIMIT_MEMLOCK: %m");
      }
      break;
    case 3:
      if ( getrlimit64(3, &v5) == -1 )
      {
        return sub_65D40(v3, "getrlimit(RLIMIT_STACK) failed: %m");
      }
      else
      {
        if ( v4 > v6 )
        {
          sub_65D40(4, "ntp_rlimit: using maximum allowed stack limit %lu instead of %lu.", (_DWORD)v6, (_DWORD)v4);
          v4 = v6;
        }
        v5 = v4;
        result = setrlimit64(3, &v5);
        if ( result == -1 )
          return sub_65D40(3, "ntp_rlimit: Cannot set RLIMIT_STACK: %m");
      }
      break;
    default:
      sub_CA54((int)"ntp_rlimit: unexpected RLIMIT case: %d", result);
  }
  return result;
}
