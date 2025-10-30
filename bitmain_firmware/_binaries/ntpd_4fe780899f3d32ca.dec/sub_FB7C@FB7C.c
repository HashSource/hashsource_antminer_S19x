int __fastcall sub_FB7C(int result, unsigned __int64 a2)
{
  unsigned __int64 v3; // r6
  int v4; // r4
  unsigned __int64 v5; // [sp+0h] [bp-18h] BYREF
  unsigned __int64 v6; // [sp+8h] [bp-10h]

  v3 = a2;
  if ( result == 7 )
  {
    v6 = a2;
    v5 = a2;
    result = setrlimit64(7, &v5);
    if ( result == -1 )
      return sub_64E00(3, "Cannot set RLIMIT_NOFILE: %m");
  }
  else
  {
    v4 = result;
    if ( result == 8 )
    {
      if ( (*(int *)((_BYTE *)&elf_hash_bucket[261] + (_DWORD)off_B611C) & 0xF) == 0 )
      {
        v6 = a2;
        v5 = a2;
        result = setrlimit64(8, &v5);
        if ( result == -1 )
          return sub_64E00(3, "Cannot set RLIMIT_MEMLOCK: %m");
      }
    }
    else
    {
      if ( result != 3 )
        sub_C954((int)"ntp_rlimit: unexpected RLIMIT case: %d", result);
      if ( getrlimit64(3, &v5) == -1 )
      {
        return sub_64E00(v4, "getrlimit(RLIMIT_STACK) failed: %m");
      }
      else
      {
        if ( v6 < v3 )
        {
          sub_64E00(4, "ntp_rlimit: using maximum allowed stack limit %lu instead of %lu.", (_DWORD)v6, (_DWORD)v3);
          v3 = v6;
        }
        v5 = v3;
        result = setrlimit64(3, &v5);
        if ( result == -1 )
          return sub_64E00(3, "ntp_rlimit: Cannot set RLIMIT_STACK: %m");
      }
    }
  }
  return result;
}
