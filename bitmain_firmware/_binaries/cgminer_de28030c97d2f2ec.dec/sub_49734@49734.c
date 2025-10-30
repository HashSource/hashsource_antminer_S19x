void __noreturn sub_49734()
{
  __int64 v0; // r0
  int v1; // r4
  char v2[20]; // [sp+10h] [bp-834h] BYREF
  __time_t v3[2]; // [sp+810h] [bp-34h] BYREF
  struct timespec v4; // [sp+818h] [bp-2Ch] BYREF
  double v5; // [sp+820h] [bp-24h]
  _DWORD *v6; // [sp+82Ch] [bp-18h]
  int i; // [sp+830h] [bp-14h]
  int v8; // [sp+834h] [bp-10h]

  v8 = 0;
  pthread_setcanceltype(1, 0);
  sub_2B968("Watchpool");
  sub_3C718();
  sub_22424(&v4);
  while ( 1 )
  {
    if ( ++v8 > 120 )
      v8 = 0;
    sub_22308(v3);
    for ( i = 0; i < dword_92028; ++i )
    {
      v6 = *(_DWORD **)(dword_920CC + 4 * i);
      if ( byte_87FB0 != 1 && !dword_91F78 )
      {
        sub_49078((int)v6);
        sub_49264(v6);
      }
      if ( v8 > 119 )
      {
        v0 = *((_QWORD *)v6 + 5) - (int)v6[38];
        v5 = sub_68E84(v0, HIDWORD(v0));
        v6[38] = v6[10];
        *((double *)v6 + 18) = (*((double *)v6 + 18) + v5 * 0.63) / 1.63;
        v6[39] = (int)*((double *)v6 + 18);
      }
      if ( v6[25] && !*((_BYTE *)v6 + 284) )
      {
        if ( sub_41C38((pthread_mutex_t *)v6, 1) )
        {
          if ( sub_2F908((int)v6, (unsigned __int8 *)v6 + 97) )
            sub_42C34((int)v6);
        }
        else
        {
          sub_22308(v6 + 34);
        }
        if ( *((_BYTE *)v6 + 97) != 1 && !dword_87E6C )
        {
          v1 = v6[1];
          if ( v1 < sub_3F424() && v3[0] - v6[34] > dword_86C34 )
          {
            if ( byte_91F58 || byte_87769 || dword_8697C > 3 )
            {
              snprintf(v2, 0x800u, "Pool %d %s stable for >%d seconds", *v6, (const char *)v6[41], dword_86C34);
              sub_1E4EC(4, v2, 0);
            }
            sub_364AC(0);
          }
        }
      }
    }
    if ( *(_BYTE *)(sub_2F984() + 97) )
      sub_364AC(0);
    if ( dword_87E6C == 2 && v3[0] - dword_898C0 > 60 * dword_930E4 )
    {
      sub_22308(&dword_898C0);
      sub_364AC(0);
    }
    sub_22484(&v4, 5000);
    sub_22424(&v4);
  }
}
