int __fastcall sub_1898C(const struct sockaddr *a1)
{
  char *v2; // r4
  int sa_family; // r1
  int v5; // r3
  int v6; // r2
  int v7; // r1
  int v8; // r11
  int v9; // r3
  char *v10; // r0
  int v11; // r11
  int v12; // r0
  int v13; // r10
  _BOOL4 v14; // r3
  int v15; // r10

  v2 = sub_1759C(a1, 132, 1);
  if ( !v2 )
  {
    sa_family = a1->sa_family;
    v2 = (char *)ep_list;
    if ( !ep_list )
    {
LABEL_15:
      if ( sa_family == 2 )
        return any_interface;
      else
        return any6_interface;
    }
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v5 = *((_DWORD *)v2 + 36);
          if ( (v5 & 0x80) != 0 )
            goto LABEL_14;
          if ( *((_DWORD *)v2 + 45) )
            goto LABEL_14;
          v6 = *((unsigned __int16 *)v2 + 12);
          if ( v6 != sa_family || (v5 & 4) != 0 )
            goto LABEL_14;
          if ( sa_family != 2 )
            break;
          v7 = *(_DWORD *)&a1->sa_data[2];
          if ( (v7 & 0xF0) == 0xE0 && (v5 & 0x10) != 0
            || *((_WORD *)v2 + 40) == 2 && *((_DWORD *)v2 + 21) == v7
            || ((v7 ^ *((_DWORD *)v2 + 7)) & *((_DWORD *)v2 + 14)) == 0 )
          {
            return (int)v2;
          }
LABEL_18:
          v2 = *(char **)v2;
          sa_family = v6;
          if ( !v2 )
            goto LABEL_15;
        }
        if ( (unsigned __int8)a1->sa_data[6] != 255 || (v5 & 0x10) == 0 )
          break;
        if ( sa_family != 10 || (a1->sa_data[7] & 0xF) != 2 || (*((_DWORD *)v2 + 8) & 0xC0FF) == 0x80FE )
          return (int)v2;
LABEL_14:
        v2 = *(char **)v2;
        if ( !v2 )
          goto LABEL_15;
      }
      if ( sa_family != 10 )
        goto LABEL_18;
      if ( *((_WORD *)v2 + 40) == 10
        && !memcmp(v2 + 88, &a1->sa_data[6], 0x10u)
        && *((_DWORD *)v2 + 26) == *(_DWORD *)&a1[1].sa_data[6] )
      {
        return (int)v2;
      }
      v8 = *(unsigned __int16 *)sub_65468(v2 + 24);
      if ( *(unsigned __int16 *)sub_65468(a1) == v8 )
      {
        v9 = *(unsigned __int16 *)sub_65468(v2 + 24);
        v10 = v2 + 24;
        if ( v9 == 2 )
        {
          v15 = *(_DWORD *)(sub_65468(v10) + 4);
          v14 = *(_DWORD *)(sub_65468(a1) + 4) == v15;
        }
        else
        {
          v11 = sub_65468(v10);
          v12 = sub_65468(a1);
          if ( memcmp((const void *)(v11 + 8), (const void *)(v12 + 8), 0x10u) )
            goto LABEL_29;
          v13 = *(_DWORD *)(sub_65468(v2 + 24) + 24);
          v14 = *(_DWORD *)(sub_65468(a1) + 24) == v13;
        }
        if ( v14 )
          return (int)v2;
      }
LABEL_29:
      v2 = *(char **)v2;
      sa_family = a1->sa_family;
      if ( !v2 )
        goto LABEL_15;
    }
  }
  return (int)v2;
}
