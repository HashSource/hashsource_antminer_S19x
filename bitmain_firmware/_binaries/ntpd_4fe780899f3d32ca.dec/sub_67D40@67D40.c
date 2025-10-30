void __fastcall sub_67D40(int a1, _DWORD *a2, int a3, _DWORD *a4)
{
  int v6; // r0
  int v7; // r9
  _DWORD *v8; // r8
  time_t v9; // r0
  int v10; // r6
  time_t v11; // r0
  int v12; // r3
  int v13; // r1
  int v14; // r3
  int v15; // r2
  int v16; // r3
  bool v17; // cc
  int v18; // r6
  const char *v19; // r0
  const char *v20; // r0

  v6 = a4[1];
  v7 = *(_DWORD *)(dnschild_contexts + 4 * a2[1]);
  if ( !v6 )
  {
    v8 = a2 + 10;
    if ( (int)a4[3] <= 2 )
    {
LABEL_3:
      ((void (__fastcall *)(int, _DWORD, _DWORD *))a2[8])(v6, a4[2], v8);
      free(a2);
      return;
    }
    v9 = time(0);
    *(_DWORD *)(v7 + 4) = v9;
    if ( debug > 0 )
    {
      v18 = a2[1];
      v19 = (const char *)sub_78840(v9);
      sub_64D28("DNS success after retry, %u next_dns_timeslot reset (%s)\n", v18, v19);
      v6 = a4[1];
      goto LABEL_3;
    }
LABEL_5:
    v6 = a4[1];
    goto LABEL_3;
  }
  v10 = sub_67590(v6);
  if ( (int)a2[4] <= 0 )
    goto LABEL_7;
  v11 = time(0);
  v12 = a2[4];
  v13 = v11 + v12;
  v14 = 2 * v12;
  if ( v13 < *(_DWORD *)(v7 + 4) )
    v13 = *(_DWORD *)(v7 + 4);
  *(_DWORD *)(v7 + 4) = v13;
  v15 = (v14 - 1) & v14;
  a2[2] = v11;
  if ( !v15 )
    v15 = v14 - (v14 >> 2);
  a2[3] = v13;
  v16 = v15 >= 64 ? 64 : v15;
  v17 = v10 <= 0;
  if ( v10 )
    v17 = v15 <= 0;
  a2[4] = v16;
  if ( v17 )
  {
LABEL_7:
    v8 = a2 + 10;
    v6 = a4[1];
    goto LABEL_3;
  }
  if ( sub_69188(0, a2, *a2, sub_67D40, a2) )
  {
    v8 = a2 + 10;
    v20 = (const char *)sub_6C2E8(a2 + 10);
    sub_64E00((_BYTE *)&dword_0 + 3, "unable to retry reverse lookup of %s", v20);
    goto LABEL_5;
  }
}
