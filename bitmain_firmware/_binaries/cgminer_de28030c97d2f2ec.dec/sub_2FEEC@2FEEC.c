int __fastcall sub_2FEEC(char **a1, char *a2)
{
  char v6[4]; // [sp+8h] [bp-804h] BYREF

  if ( (unsigned __int8)sub_22720(a2, a1 + 154, a1 + 146) != 1 )
    return 0;
  if ( !strncasecmp(a2, "stratum+tcp://", 0xEu) )
  {
    a1[41] = strdup(a2);
    *((_BYTE *)a1 + 656) = 1;
    a1[144] = a1[154];
    *((_BYTE *)a1 + 592) = 0;
    if ( byte_91F58 || byte_87769 || dword_8697C > 4 )
    {
      snprintf(v6, 0x800u, "Pool %d is tcp pool.", *a1);
      sub_1E4EC(5, v6, 0);
    }
    return 1;
  }
  else if ( !strncasecmp(a2, "stratum+tls://", 0xEu) )
  {
    a1[41] = strdup(a2);
    *((_BYTE *)a1 + 656) = 1;
    a1[144] = a1[154];
    *((_BYTE *)a1 + 592) = 1;
    if ( byte_91F58 || byte_87769 || dword_8697C > 4 )
    {
      snprintf(v6, 0x800u, "Pool %d is tls pool.", *a1);
      sub_1E4EC(5, v6, 0);
    }
    return 1;
  }
  else
  {
    return 0;
  }
}
