bool __fastcall sub_4CBA4(int a1, int a2, int a3)
{
  __int16 *v3; // r5
  __int16 v6; // r3
  int (**v8)(); // r2
  __int16 v9; // r3
  int v10; // r1
  int (**v11)(); // r3
  char *v12; // r9
  size_t v13; // r10
  int v14; // r3
  int v16; // r0
  char v17[120]; // [sp+Ch] [bp-7Ch] BYREF

  v3 = (__int16 *)(a3 + 504);
  v6 = *(_WORD *)(a3 + 504);
  if ( v6 > 0 )
  {
    v8 = &off_B56E4[5 * v6];
    if ( !v8[135] )
      return 1;
    if ( *(_DWORD *)(a1 + 76) != 100 && v8[138] == (int (*)())&byte_6 && *(__int16 *)(a3 + 406) <= 4 )
    {
      sub_4C054(a1, a3);
      v9 = *v3 + 1;
      ++*(_WORD *)(a3 + 406);
      v10 = v9;
      goto LABEL_6;
    }
LABEL_5:
    v9 = v6 + 1;
    v10 = v9;
    goto LABEL_6;
  }
  if ( *(_WORD *)(a3 + 504) )
    goto LABEL_5;
  if ( *(_DWORD *)(a1 + 76) == 100 )
  {
    v10 = 8;
    v9 = 8;
  }
  else
  {
    v10 = 1;
    *(_BYTE *)(a3 + 488) = 0;
    *(_BYTE *)(a3 + 489) = 0;
    *(_BYTE *)(a3 + 490) = 0;
    *(_BYTE *)(a3 + 491) = 0;
    *(_BYTE *)(a3 + 492) = 0;
    *(_WORD *)(a3 + 406) = 0;
    v9 = 1;
  }
LABEL_6:
  *v3 = v9;
  v11 = &off_B56E4[5 * v10];
  v12 = (char *)v11[135];
  if ( !v12 )
    return 1;
  v13 = (size_t)v11[136];
  if ( write(*(_DWORD *)(a2 + 28), v11[135], v13) != v13 )
    sub_39C88(a1, 3);
  v14 = *v3;
  if ( off_B56E4[5 * v14 + 138] == (int (*)())&byte_6 )
  {
    v16 = *(__int16 *)(a3 + 406);
    if ( v16 > 4 )
    {
      sub_6D00C(
        v17,
        119,
        "refclock_jjy.c ; teljjy_conn_send ; iClockCommandSeq=%d iLoopbackCount=%d MAX_LOOPBACK=%d",
        v14,
        v16,
        5);
      sub_4B63C(a1, 8, v17);
      sub_65D40(3, "%s", v17);
      *(_BYTE *)(a3 + 405) = 0;
    }
    else
    {
      gettimeofday((struct timeval *)(a3 + 8 * (v16 + 51)), 0);
      *(_BYTE *)(a3 + 405) = 1;
    }
  }
  else
  {
    *(_BYTE *)(a3 + 405) = 0;
  }
  sub_4B63C(a1, 2, v12);
  return off_B56E4[5 * *v3 + 140] == 0;
}
