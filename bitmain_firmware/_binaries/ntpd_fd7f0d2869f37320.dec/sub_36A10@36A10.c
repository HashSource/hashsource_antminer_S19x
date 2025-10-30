int __fastcall sub_36A10(int a1)
{
  unsigned int v2; // r7
  int v3; // r3
  int v4; // r9
  int v5; // r3
  int v6; // r2
  int v7; // r2
  int v8; // r3
  double v9; // r0
  int v10; // r3
  int v11; // r3
  double v12; // r0
  unsigned int v13; // r2
  int v14; // r3

  v2 = *(unsigned __int8 *)(a1 + 64);
  if ( *(_DWORD *)(a1 + 716) > *(_DWORD *)(a1 + 728) && !*(_BYTE *)(a1 + 298) )
    *(_BYTE *)(a1 + 94) = *(_BYTE *)(a1 + 66);
  if ( (*(_BYTE *)(a1 + 72) & 6) != 0 )
  {
    *(_DWORD *)(a1 + 716) = current_time;
    LODWORD(v9) = sub_348C4(a1, v2);
    if ( sys_leap == 3 )
      return LODWORD(v9);
    goto LABEL_20;
  }
  if ( (*(_BYTE *)(a1 + 72) & 0x10) != 0 )
  {
    *(_DWORD *)(a1 + 716) = current_time;
    LODWORD(v9) = sub_348C4(a1, v2);
    v10 = *(_DWORD *)(a1 + 708);
    if ( v10 <= (int)sys_beacon )
    {
      HIDWORD(v12) = sys_survivors;
      if ( sys_survivors < sys_minclock || (HIDWORD(v12) = peer_associations, peer_associations < sys_maxclock) )
      {
        LODWORD(v12) = a1;
        v13 = *(_DWORD *)(a1 + 76);
        if ( v13 < sys_ttlmax )
          *(_DWORD *)(a1 + 76) = v13 + 1;
        LODWORD(v9) = sub_33F68(v12);
        v10 = *(_DWORD *)(a1 + 708);
      }
    }
    else
    {
      *(_DWORD *)(a1 + 708) = 0;
      LODWORD(v9) = a1;
      *(_DWORD *)(a1 + 76) = 0;
      LODWORD(v9) = sub_33F68(v9);
      v10 = *(_DWORD *)(a1 + 708);
    }
    *(_DWORD *)(a1 + 708) = v10 + 1;
  }
  else
  {
    if ( (*(_BYTE *)(a1 + 72) & 8) == 0 )
    {
      v3 = *(_DWORD *)(a1 + 308);
      if ( v3 )
      {
        v11 = v3 - 1;
        *(_DWORD *)(a1 + 308) = v11;
        if ( !v11 )
        {
          if ( mode_ntpdate )
          {
            if ( !--peer_ntpdate )
            {
              sub_65D40(5, "ntpd: no servers found");
              if ( !msyslog_term )
                puts("ntpd: no servers found");
              exit(0);
            }
          }
        }
        goto LABEL_40;
      }
      v4 = *(unsigned __int8 *)(a1 + 298);
      v5 = *(_DWORD *)(a1 + 708) + 1;
      *(_DWORD *)(a1 + 708) = v5;
      v6 = current_time;
      *(_BYTE *)(a1 + 298) = 2 * v4;
      *(_DWORD *)(a1 + 716) = v6;
      if ( 2 * (_BYTE)v4 )
      {
        v7 = *(_DWORD *)(a1 + 68);
        v2 = (unsigned __int8)sys_poll;
        if ( (v7 & 2) != 0 )
        {
          if ( (v7 & 0x40) == 0 )
          {
LABEL_13:
            if ( v5 <= 9 )
              goto LABEL_40;
            goto LABEL_14;
          }
        }
        else
        {
          *(_DWORD *)(a1 + 708) = 0;
          if ( (v7 & 0x40) == 0 )
            goto LABEL_40;
        }
        if ( !*(_DWORD *)(a1 + 312) && !sub_33534(a1) )
          goto LABEL_50;
      }
      else
      {
        sub_35AF4(a1);
        if ( v4 )
        {
          sub_33534(a1);
          sub_26294(131, a1, (const char *)(unsigned __int8)(2 * v4));
        }
        if ( (*(_DWORD *)(a1 + 68) & 0x100) != 0 && !*(_DWORD *)(a1 + 312) )
        {
LABEL_50:
          *(_DWORD *)(a1 + 312) = 3;
          if ( *(int *)(a1 + 708) <= 9 )
          {
            v14 = *(_DWORD *)(a1 + 312);
LABEL_41:
            *(_DWORD *)(a1 + 312) = v14 - 1;
LABEL_42:
            LODWORD(v9) = sub_348C4(a1, v2);
            if ( *(_BYTE *)(a1 + 63) == 6 )
              return LODWORD(v9);
LABEL_20:
            LODWORD(v9) = a1;
            LODWORD(v9) = sub_33F68(v9);
            return LODWORD(v9);
          }
LABEL_14:
          v8 = *(_DWORD *)(a1 + 68);
          v2 = (unsigned __int8)(v2 + 1);
          if ( (v8 & 3) == 0 || (v8 & 2) != 0 && peer_associations > sys_maxclock && sub_322B0(a1) )
          {
            sub_26294(133, a1, "timeout");
            sub_367D8(a1, (int *)"TIME");
            LODWORD(v9) = sub_324CC(a1);
            return LODWORD(v9);
          }
LABEL_40:
          v14 = *(_DWORD *)(a1 + 312);
          if ( v14 <= 0 )
            goto LABEL_42;
          goto LABEL_41;
        }
      }
      v5 = *(_DWORD *)(a1 + 708);
      goto LABEL_13;
    }
    *(_DWORD *)(a1 + 716) = current_time;
    LODWORD(v9) = sub_348C4(a1, v2);
    if ( peer_associations <= 2 * sys_maxclock && (sys_maxclock > peer_associations || sys_survivors < sys_minclock) )
      LODWORD(v9) = sub_336A4(a1);
  }
  return LODWORD(v9);
}
