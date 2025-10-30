void __fastcall sub_3466C(int a1)
{
  char s[2048]; // [sp+8h] [bp-800h] BYREF

  if ( !sub_2F098(a1, (_BYTE *)(a1 + 97)) )
  {
    sub_239A4((struct timeval *)(a1 + 136));
    if ( a1 == sub_31FF4() )
    {
      if ( byte_74500 || byte_68BD4 || dword_67DB4 > 3 )
      {
        snprintf(s, 0x800u, "Pool %d %s not responding!", *(_DWORD *)a1, *(const char **)(a1 + 164));
        sub_20F58(4, s, 0);
      }
      sub_34178(0);
    }
    else if ( byte_74500 || byte_68BD4 || dword_67DB4 > 5 )
    {
      snprintf(s, 0x800u, "Pool %d %s failed to return work", *(_DWORD *)a1, *(const char **)(a1 + 164));
      sub_20F58(6, s, 0);
    }
  }
}
