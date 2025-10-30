bool __fastcall sub_4B4B4(int a1, int a2, int a3)
{
  __int16 *v3; // r5
  int v5; // r3
  int (**v8)(); // r2
  int v9; // r3
  int (**v10)(); // r2
  char *v11; // r9
  size_t v12; // r10
  __int16 v14; // r2
  int v15; // r3
  int v16; // r0
  int (**v17)(); // r2
  int (**v18)(); // r2
  char v19[120]; // [sp+Ch] [bp-7Ch] BYREF

  v3 = (__int16 *)(a3 + 504);
  v5 = *(__int16 *)(a3 + 504);
  if ( v5 <= 0 )
  {
    if ( !*(_WORD *)(a3 + 504) )
    {
      if ( *(_DWORD *)(a1 + 76) == 100 )
      {
        v14 = 8;
        v11 = "TIME\r";
      }
      else
      {
        v14 = 1;
        *(_DWORD *)(a3 + 488) = 0;
        *(_BYTE *)(a3 + 492) = 0;
        v11 = "LOOP\r";
        *(_WORD *)(a3 + 406) = 0;
      }
      v12 = 5;
      *v3 = v14;
      goto LABEL_14;
    }
    v9 = (__int16)(v5 + 1);
    v18 = &off_B46E4[5 * v9];
    v11 = (char *)v18[135];
    v12 = (size_t)v18[136];
  }
  else
  {
    v8 = &off_B46E4[5 * v5];
    if ( !v8[135] )
      return 1;
    if ( *(_DWORD *)(a1 + 76) != 100 && v8[138] == (int (*)())&byte_6 && *(__int16 *)(a3 + 406) <= 4 )
    {
      sub_4A9A4(a1, a3);
      v9 = (__int16)(*v3 + 1);
      ++*(_WORD *)(a3 + 406);
      v17 = &off_B46E4[5 * v9];
      v11 = (char *)v17[135];
      v12 = (size_t)v17[136];
    }
    else
    {
      v9 = (__int16)(v5 + 1);
      v10 = &off_B46E4[5 * v9];
      v11 = (char *)v10[135];
      v12 = (size_t)v10[136];
    }
  }
  *v3 = v9;
  if ( !v11 )
    return 1;
LABEL_14:
  if ( write(*(_DWORD *)(a2 + 28), v11, v12) != v12 )
    sub_394A0((__int16 *)a1, 3);
  v15 = *v3;
  if ( off_B46E4[5 * v15 + 138] == (int (*)())&byte_6 )
  {
    v16 = *(__int16 *)(a3 + 406);
    if ( v16 > 4 )
    {
      sub_6C054(
        v19,
        119,
        "refclock_jjy.c ; teljjy_conn_send ; iClockCommandSeq=%d iLoopbackCount=%d MAX_LOOPBACK=%d",
        v15,
        v16,
        5);
      sub_4A084(a1, 8, v19);
      sub_64E00(3, "%s", v19);
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
  sub_4A084(a1, 2, v11);
  return off_B46E4[5 * *v3 + 140] == 0;
}
