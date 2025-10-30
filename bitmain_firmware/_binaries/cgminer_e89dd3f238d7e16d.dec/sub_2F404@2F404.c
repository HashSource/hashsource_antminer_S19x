const char *__fastcall sub_2F404(const char *a1)
{
  size_t v2; // r4
  char v5[24]; // [sp+14h] [bp-848h] BYREF
  char v6[24]; // [sp+44h] [bp-818h] BYREF
  char *v7; // [sp+844h] [bp-18h]
  size_t size; // [sp+848h] [bp-14h]
  int v9; // [sp+84Ch] [bp-10h]

  if ( !dword_86F08 )
  {
    if ( ++dword_86F00 > dword_90E90 )
      sub_2E5D4();
    v9 = *(_DWORD *)(dword_90F34 + 4 * (dword_86F00 + 0x3FFFFFFF));
    if ( dword_86938 == 1 )
    {
      if ( sub_12AD4(v5, 0x2Eu) )
        return "Failed to get modified IP address";
      v2 = strlen(a1);
      size = v2 + strlen(v5) + 2;
      v7 = (char *)malloc(size);
      if ( !v7 )
        return "Memory allocation failed";
      snprintf(v7, size, "%s.%s", a1, v5);
      sub_5452C(v7, v9 + 172);
      if ( byte_90DC0 || byte_865D1 || dword_857E4 > 3 )
      {
        snprintf(v6, 0x800u, "opt_bitmain_user_ip_cat %d ", dword_86938);
        sub_1DB6C(4, v6, 0);
      }
    }
    else
    {
      sub_5452C(a1, v9 + 172);
    }
    return 0;
  }
  return "Use only user + pass or userpass, but not both";
}
