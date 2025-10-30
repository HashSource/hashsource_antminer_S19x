void __fastcall sub_686DC(int a1, char *a2, int a3, _DWORD *a4)
{
  const char *v6; // r8
  int v7; // r0
  int v8; // r6
  int v9; // r11
  int v10; // r9
  _DWORD *v11; // r12
  int v12; // r3
  int v13; // r2
  _DWORD *v14; // r1
  _DWORD *v15; // lr
  _DWORD *v16; // r3
  int v17; // r2
  bool v18; // zf
  int v19; // r2
  int v20; // r10
  int v21; // r3
  time_t v22; // r0
  int v23; // r2
  int v24; // r12
  int v25; // r2
  int v26; // lr
  int v27; // r3
  int v28; // r2
  int v29; // r9
  const char *v30; // r0
  int v31; // r3
  const char *v32; // r9
  int v33; // r0
  const char *v34; // r0

  v6 = a2 + 72;
  v7 = a4[1];
  v8 = (int)&a2[*((_DWORD *)a2 + 16) + 72];
  v9 = *(_DWORD *)(dnschild_contexts + 4 * *((_DWORD *)a2 + 1));
  if ( !v7 )
  {
    if ( (int)a4[2] > 2 )
    {
      *(_DWORD *)(v9 + 4) = time(0);
      if ( debug > 0 )
      {
        v29 = *((_DWORD *)a2 + 1);
        v30 = (const char *)sub_79B0C();
        sub_65C68("DNS success after retry, %u next_dns_timeslot reset (%s)\n", v29, v30);
      }
    }
    goto LABEL_3;
  }
  v20 = *((_DWORD *)a2 + 13) & 1;
  if ( !v20 && !sub_68578(v7) || (v21 = *((_DWORD *)a2 + 4), v21 <= 0) )
  {
LABEL_3:
    v10 = a4[4];
    v11 = a4 + 5;
    if ( v10 - 1 >= 0 )
    {
      v12 = (int)&a4[8 * v10 - 3];
      v13 = 0;
      do
      {
        *(_DWORD *)(v12 + 28) = v13;
        v13 = v12;
        v12 -= 32;
      }
      while ( (_DWORD *)v12 != a4 - 3 );
    }
    v14 = &v11[8 * v10];
    v15 = &v14[7 * v10];
    if ( v10 <= 0 )
    {
      if ( v14 != v15 )
        sub_6FC54("ntp_intres.c", 589, 1, "(char *)psau == canon_start");
      if ( !v10 )
        v11 = 0;
    }
    else
    {
      v16 = a4;
      do
      {
        v17 = v16[10];
        v16 += 8;
        v18 = v17 == 0;
        v19 = v16[3];
        if ( !v18 )
          v16[2] = v14;
        v14 += 7;
        if ( v19 )
          v16[3] = (char *)v15 + v19;
      }
      while ( v16 != &a4[8 * v10] );
    }
    (*((void (__fastcall **)(_DWORD, _DWORD, _DWORD, const char *, int, char *, _DWORD *))a2 + 14))(
      a4[1],
      a4[3],
      *((_DWORD *)a2 + 15),
      v6,
      v8,
      a2 + 20,
      v11);
    free(a2);
    return;
  }
  if ( v21 == 2 && (ntp_syslogmask & 1) != 0 )
  {
    v31 = *((_DWORD *)a2 + 6);
    if ( v31 == 10 )
    {
      v32 = " (AAAA)";
    }
    else if ( v31 == 2 )
    {
      v32 = " (A)";
    }
    else
    {
      v32 = byte_99528;
    }
    v33 = a4[1];
    if ( v33 == -11 )
    {
      *_errno_location() = a4[3];
      sub_65D40(&byte_6, "retrying DNS %s%s: EAI_SYSTEM %d: %m", v6, v32, a4[3]);
    }
    else
    {
      v34 = gai_strerror(v33);
      sub_65D40(&byte_6, "retrying DNS %s%s: %s (%d)", v6, v32, v34, a4[1]);
    }
  }
  v22 = time(0);
  v23 = *((_DWORD *)a2 + 4);
  v24 = v22 + v23;
  v25 = 2 * v23;
  if ( v24 < *(_DWORD *)(v9 + 4) )
    v24 = *(_DWORD *)(v9 + 4);
  *(_DWORD *)(v9 + 4) = v24;
  if ( v20 )
    v26 = 1024;
  else
    v26 = 64;
  v27 = (v25 - 1) & v25;
  *((_DWORD *)a2 + 2) = v22;
  if ( !v27 )
    v27 = v25 - (v25 >> 2);
  *((_DWORD *)a2 + 3) = v24;
  v28 = *(_DWORD *)a2;
  if ( v27 >= v26 )
    v27 = v26;
  *((_DWORD *)a2 + 4) = v27;
  if ( sub_6A0F4(1, a2, v28, sub_686DC, a2) )
  {
    sub_65D40((_BYTE *)&dword_0 + 3, "unable to retry hostname %s", v6);
    goto LABEL_3;
  }
}
