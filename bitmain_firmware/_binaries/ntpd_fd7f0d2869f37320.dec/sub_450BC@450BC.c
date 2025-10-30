void __fastcall sub_450BC(int a1, int a2)
{
  int v3; // r5
  int *v4; // r4
  int v5; // r0
  int v6; // r3
  int *v7; // r2
  int *v8; // r3
  bool v9; // zf
  const char *v10; // r2

  v3 = *(_DWORD *)(a2 + 84);
  v4 = *(int **)v3;
  if ( *(_DWORD *)v3 )
  {
    if ( v4[2] != a2 )
    {
      if ( *(_DWORD *)(v3 + 28) != -1 )
      {
        sub_190FC(v3 + 8);
        *(_DWORD *)(v3 + 28) = -1;
      }
      v5 = v4[34];
      if ( v5 != -1 )
        close(v5);
    }
    v6 = v4[1] - 1;
    v4[1] = v6;
    if ( !v6 )
    {
      v7 = &dword_BDD70;
      v8 = (int *)dword_BDD70;
      while ( v8 )
      {
        v9 = v4 == v8;
        if ( v4 == v8 )
        {
          v8 = (int *)*v4;
        }
        else
        {
          v7 = v8;
          v8 = (int *)*v8;
        }
        if ( v9 )
          *v7 = (int)v8;
      }
      free((void *)v4[5]);
      free((void *)v4[6]);
      free(v4);
    }
    *(_DWORD *)v3 = 0;
    if ( (ntp_syslogmask & 0x100) != 0 )
    {
      v10 = (const char *)sub_6B36C(a2 + 16);
      sub_65D40(5, "%s: shutdown", v10);
    }
  }
}
