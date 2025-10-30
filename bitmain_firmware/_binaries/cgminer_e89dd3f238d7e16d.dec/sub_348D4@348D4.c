void __fastcall sub_348D4(unsigned __int8 *a1)
{
  char v2[4]; // [sp+10h] [bp-804h] BYREF

  if ( (unsigned __int8)sub_2E894((int)a1, a1 + 97) != 1 )
  {
    sub_21AC0((__time_t *)a1 + 34);
    if ( a1 == (unsigned __int8 *)sub_2E98C() )
    {
      if ( byte_90DC0 || byte_865D1 || dword_857E4 > 3 )
      {
        snprintf(v2, 0x800u, "Pool %d %s not responding!", *(_DWORD *)a1, *((const char **)a1 + 41));
        sub_1DB6C(4, v2, 0);
      }
      sub_35460(0);
    }
    else if ( byte_90DC0 || byte_865D1 || dword_857E4 > 5 )
    {
      snprintf(v2, 0x800u, "Pool %d %s failed to return work", *(_DWORD *)a1, *((const char **)a1 + 41));
      sub_1DB6C(6, v2, 0);
    }
  }
}
