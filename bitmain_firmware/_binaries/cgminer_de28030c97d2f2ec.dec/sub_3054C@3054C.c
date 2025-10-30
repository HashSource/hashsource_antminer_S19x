const char *__fastcall sub_3054C(const char *a1)
{
  size_t v2; // r4
  char v5[24]; // [sp+14h] [bp-848h] BYREF
  char v6[24]; // [sp+44h] [bp-818h] BYREF
  char *v7; // [sp+844h] [bp-18h]
  size_t size; // [sp+848h] [bp-14h]
  int v9; // [sp+84Ch] [bp-10h]

  if ( !dword_880A0 )
  {
    if ( ++dword_88098 > dword_92028 )
      sub_2F5CC();
    v9 = *(_DWORD *)(dword_920CC + 4 * (dword_88098 + 0x3FFFFFFF));
    if ( dword_87AD0 == 1 )
    {
      if ( sub_132A4(v5, 0x2Eu) )
        return "Failed to get modified IP address";
      v2 = strlen(a1);
      size = v2 + strlen(v5) + 2;
      v7 = (char *)malloc(size);
      if ( !v7 )
        return "Memory allocation failed";
      snprintf(v7, size, "%s.%s", a1, v5);
      sub_551C4(v7, v9 + 172);
      if ( byte_91F58 || byte_87769 || dword_8697C > 3 )
      {
        snprintf(v6, 0x800u, "opt_bitmain_user_ip_cat %d ", dword_87AD0);
        sub_1E4EC(4, v6, 0);
      }
    }
    else
    {
      sub_551C4(a1, v9 + 172);
    }
    return 0;
  }
  return "Use only user + pass or userpass, but not both";
}
