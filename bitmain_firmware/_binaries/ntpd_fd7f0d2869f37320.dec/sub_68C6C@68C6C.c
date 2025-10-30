void __fastcall sub_68C6C(int a1, _DWORD *a2, int a3, _DWORD *a4)
{
  int v6; // r0
  int v7; // r8
  _DWORD *v8; // r6
  int v9; // r6
  time_t v10; // r0
  int v11; // r2
  int v12; // r1
  int v13; // r2
  int v14; // r3
  bool v15; // cc
  time_t v16; // r0
  int v17; // r8
  const char *v18; // r0
  const char *v19; // r0

  v6 = a4[1];
  v7 = *(_DWORD *)(dnschild_contexts + 4 * a2[1]);
  if ( !v6 )
  {
    if ( (int)a4[3] <= 2 )
    {
      v8 = a2 + 10;
LABEL_5:
      ((void (__fastcall *)(int, _DWORD, _DWORD *))a2[8])(v6, a4[2], v8);
      free(a2);
      return;
    }
    v16 = time(0);
    *(_DWORD *)(v7 + 4) = v16;
    if ( debug > 0 )
    {
      v17 = a2[1];
      v18 = (const char *)sub_79B0C(v16);
      v8 = a2 + 10;
      sub_65C68("DNS success after retry, %u next_dns_timeslot reset (%s)\n", v17, v18);
      v6 = a4[1];
      goto LABEL_5;
    }
LABEL_19:
    v8 = a2 + 10;
    v6 = a4[1];
    goto LABEL_5;
  }
  v9 = sub_68578(v6);
  if ( (int)a2[4] <= 0 )
    goto LABEL_19;
  v10 = time(0);
  v11 = a2[4];
  v12 = v10 + v11;
  v13 = 2 * v11;
  if ( v12 < *(_DWORD *)(v7 + 4) )
    v12 = *(_DWORD *)(v7 + 4);
  v14 = (v13 - 1) & v13;
  if ( !v14 )
    v14 = v13 - (v13 >> 2);
  *(_DWORD *)(v7 + 4) = v12;
  a2[2] = v10;
  a2[3] = v12;
  if ( v14 >= 64 )
    v14 = 64;
  v15 = v9 <= 0;
  if ( v9 )
    v15 = v14 <= 0;
  a2[4] = v14;
  if ( v15 )
    goto LABEL_19;
  if ( sub_6A0F4(0, a2, *a2, sub_68C6C, a2) )
  {
    v8 = a2 + 10;
    v19 = (const char *)sub_6D2C0(a2 + 10);
    sub_65D40((_BYTE *)&dword_0 + 3, "unable to retry reverse lookup of %s", v19);
    v6 = a4[1];
    goto LABEL_5;
  }
}
