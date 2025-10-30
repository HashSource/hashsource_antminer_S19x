int __fastcall sub_42A6C(_DWORD *a1)
{
  int v3; // r0
  int v4; // r5
  const char *v5; // r0
  int v6; // r6
  const char *v7; // r0
  int v8; // r0
  int v9; // r5
  const char *v10; // r0
  int v11; // r5
  int v12; // r0

  if ( a1[5] )
  {
    if ( dword_47202C )
    {
      v3 = sub_23E408(*a1, a1[1], a1[2]);
      if ( *(_DWORD *)(v3 + 224) )
      {
        v9 = *(_DWORD *)sub_242FC8(v3);
        v10 = (const char *)sub_23095C(*a1, a1[1], a1[2]);
        sub_2594B0(v9, "LNSL: already stopped/stop_requested %s\n", v10);
      }
      else
      {
        v4 = *(_DWORD *)sub_242FC8(v3);
        v5 = (const char *)sub_23095C(*a1, a1[1], a1[2]);
        sub_2594B0(v4, "LNSL: already stopped/no stop_requested yet %s\n", v5);
      }
    }
  }
  else
  {
    if ( !dword_47202C )
    {
      if ( a1[7] == 2 )
        return 0;
      goto LABEL_4;
    }
    v6 = *(_DWORD *)sub_242FC8(a1);
    v7 = (const char *)sub_23095C(*a1, a1[1], a1[2]);
    v8 = sub_2594B0(v6, "LNSL: running -> suspending %s\n", v7);
    if ( a1[7] != 2 )
    {
      if ( a1[5] )
      {
        a1[7] = 2;
        return 0;
      }
LABEL_4:
      if ( !a1[4] )
        ((void (__fastcall *)(_DWORD *))loc_42938)(a1);
      a1[7] = 2;
      return 0;
    }
    if ( dword_47202C )
    {
      v11 = *(_DWORD *)sub_242FC8(v8);
      v12 = sub_98F68(a1);
      sub_2594B0(v11, "linux-nat: already stopping LWP %ld at GDB's request\n", v12);
    }
  }
  return 0;
}
