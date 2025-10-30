void __fastcall sub_5A31C(int a1)
{
  char s[2048]; // [sp+8h] [bp-800h] BYREF

  if ( !sub_55170(a1, (_BYTE *)(a1 + 97)) )
  {
    sub_4A60C((struct timeval *)(a1 + 136));
    if ( a1 == sub_58084() )
    {
      if ( byte_244080 || byte_1AECC4 || dword_9E320 > 3 )
      {
        snprintf(s, 0x800u, "Pool %d %s not responding!", *(_DWORD *)a1, *(const char **)(a1 + 164));
        sub_47AB4(4, s, 0);
      }
      sub_59E6C(0);
    }
    else if ( byte_244080 || byte_1AECC4 || dword_9E320 > 5 )
    {
      snprintf(s, 0x800u, "Pool %d %s failed to return work", *(_DWORD *)a1, *(const char **)(a1 + 164));
      sub_47AB4(6, s, 0);
    }
  }
}
