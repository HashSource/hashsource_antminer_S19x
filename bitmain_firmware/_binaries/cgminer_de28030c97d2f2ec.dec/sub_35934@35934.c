void __fastcall sub_35934(unsigned __int8 *a1)
{
  char v2[4]; // [sp+10h] [bp-804h] BYREF

  if ( (unsigned __int8)sub_2F88C((int)a1, a1 + 97) != 1 )
  {
    sub_22308((__time_t *)a1 + 34);
    if ( (unsigned __int8 *)sub_2F984() == a1 )
    {
      if ( byte_91F58 || byte_87769 || dword_8697C > 3 )
      {
        snprintf(v2, 0x800u, "Pool %d %s not responding!", *(_DWORD *)a1, *((const char **)a1 + 41));
        sub_1E4EC(4, v2, 0);
      }
      sub_364AC(0);
    }
    else if ( byte_91F58 || byte_87769 || dword_8697C > 5 )
    {
      snprintf(v2, 0x800u, "Pool %d %s failed to return work", *(_DWORD *)a1, *((const char **)a1 + 41));
      sub_1E4EC(6, v2, 0);
    }
  }
}
