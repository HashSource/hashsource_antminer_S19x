int __fastcall sub_18C28(const struct sockaddr *a1)
{
  int result; // r0
  int v3; // r4
  int sa_family; // r1
  int v5; // r3
  int v6; // r2
  int v7; // r11
  int v8; // r1
  int v9; // r3
  int v10; // r0
  int v11; // r11
  int v12; // r0
  int v13; // r10
  _BOOL4 v14; // r3
  int v15; // r10

  result = sub_17818(a1, 132, 1);
  if ( !result )
  {
    v3 = ep_list;
    if ( ep_list )
    {
      sa_family = a1->sa_family;
      while ( 1 )
      {
        v5 = *(_DWORD *)(v3 + 144);
        if ( (v5 & 0x80) != 0 )
          goto LABEL_4;
        if ( *(_DWORD *)(v3 + 180) )
          goto LABEL_4;
        v6 = *(unsigned __int16 *)(v3 + 24);
        if ( v6 != sa_family || (v5 & 4) != 0 )
          goto LABEL_4;
        if ( sa_family == 2 )
        {
          v8 = *(_DWORD *)&a1->sa_data[2];
          if ( (v8 & 0xF0) == 0xE0 && (v5 & 0x10) != 0
            || *(_WORD *)(v3 + 80) == 2 && *(_DWORD *)(v3 + 84) == v8
            || ((*(_DWORD *)(v3 + 28) ^ v8) & *(_DWORD *)(v3 + 56)) == 0 )
          {
            return v3;
          }
          goto LABEL_23;
        }
        if ( (unsigned __int8)a1->sa_data[6] == 255 && (v5 & 0x10) != 0 )
        {
          if ( sa_family != 10 || (a1->sa_data[7] & 0xF) != 2 || (*(_DWORD *)(v3 + 32) & 0xC0FF) == 0x80FE )
            return v3;
LABEL_23:
          sa_family = *(unsigned __int16 *)(v3 + 24);
          goto LABEL_4;
        }
        if ( v6 != 10 )
          goto LABEL_23;
        if ( *(_WORD *)(v3 + 80) == 10
          && !memcmp((const void *)(v3 + 88), &a1->sa_data[6], 0x10u)
          && *(_DWORD *)(v3 + 104) == *(_DWORD *)&a1[1].sa_data[6] )
        {
          return v3;
        }
        v7 = *(unsigned __int16 *)sub_663AC(v3 + 24);
        if ( *(unsigned __int16 *)sub_663AC(a1) == v7 )
        {
          v9 = *(unsigned __int16 *)sub_663AC(v3 + 24);
          v10 = v3 + 24;
          if ( v9 == 2 )
          {
            v15 = *(_DWORD *)(sub_663AC(v10) + 4);
            v14 = v15 == *(_DWORD *)(sub_663AC(a1) + 4);
LABEL_37:
            if ( v14 )
              return v3;
            goto LABEL_15;
          }
          v11 = sub_663AC(v10);
          v12 = sub_663AC(a1);
          if ( !memcmp((const void *)(v11 + 8), (const void *)(v12 + 8), 0x10u) )
          {
            v13 = *(_DWORD *)(sub_663AC(v3 + 24) + 24);
            v14 = v13 == *(_DWORD *)(sub_663AC(a1) + 24);
            goto LABEL_37;
          }
        }
LABEL_15:
        sa_family = a1->sa_family;
LABEL_4:
        v3 = *(_DWORD *)v3;
        if ( !v3 )
          goto LABEL_17;
      }
    }
    sa_family = a1->sa_family;
LABEL_17:
    if ( sa_family == 2 )
      return any_interface;
    else
      return any6_interface;
  }
  return result;
}
