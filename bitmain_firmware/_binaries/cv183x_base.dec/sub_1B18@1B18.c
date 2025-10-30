__int64 __fastcall sub_1B18(__int64 a1)
{
  __int64 v2; // x28
  __int64 v3; // x23
  int v4; // w1
  int v5; // w3
  __int64 v6; // x26
  int v7; // w4
  __int64 v8; // x5
  __int64 v9; // x7
  int v10; // w8
  int v11; // w2
  __int64 v12; // x0
  _DWORD *v13; // x0
  int v15; // w21
  _DWORD *v16; // x2
  int v17; // w0
  int v18; // w6
  int v19; // w7
  unsigned int v20; // w27
  _DWORD *v21; // x24
  unsigned int *v22; // x8

  v2 = qword_4208 + 594068;
  v3 = qword_4208 + 644500;
  seq_printf(
    a1,
    "\nModule: [SYS], Version[%s], Build Time[%s]\n",
    (const char *)(qword_4208 + 644500),
    "#1 SMP PREEMPT Wed May 12 01:18:51 CST 2021");
  seq_puts(
    a1,
    "-----BIND RELATION TABLE--------------------------------------------------------------------------------------------"
    "---------------\n");
  seq_printf(
    a1,
    "%-10s%-10s%-10s%-10s%-10s%-10s%-10s%-10s%-10s\n",
    "1stMod",
    "1stDev",
    "1stChn",
    "2ndMod",
    "2ndDev",
    "2ndChn",
    "3rdMod",
    "3rdDev",
    "3rdChn");
  do
  {
    if ( *(_BYTE *)v2 && *(_DWORD *)(v2 + 16) )
    {
      v4 = *(_DWORD *)(v2 + 4);
      v5 = *(_DWORD *)(v2 + 8);
      v6 = qword_4208 + 594068;
      v7 = *(_DWORD *)(v2 + 12);
      v8 = qword_4208 + 644500;
      v9 = qword_4208 + 594068;
      while ( 1 )
      {
        if ( *(_BYTE *)v9 )
        {
          v10 = *(_DWORD *)(v9 + 16);
          if ( v10 )
          {
            if ( *(_DWORD *)(v9 + 4) != v4 || *(_DWORD *)(v9 + 8) != v5 || *(_DWORD *)(v9 + 12) != v7 )
              break;
          }
        }
LABEL_17:
        v9 += 788;
        if ( v9 == v8 )
        {
          v15 = 0;
          while ( 2 )
          {
            v16 = (_DWORD *)(v2 + 12LL * v15);
            v17 = v16[5];
            v18 = v16[6];
            v19 = v16[7];
            while ( !*(_BYTE *)v6
                 || *(_DWORD *)(v6 + 4) != v17
                 || *(_DWORD *)(v6 + 8) != v18
                 || *(_DWORD *)(v6 + 12) != v19
                 || !*(_DWORD *)(v6 + 16) )
            {
              v6 += 788;
              if ( v8 == v6 )
                goto LABEL_32;
            }
            if ( !v6 )
            {
LABEL_32:
              seq_printf(
                a1,
                "%-10s%-10d%-10d%-10s%-10d%-10d%-10s%-10d%-10d\n",
                off_28A8[v4],
                v5,
                v7,
                off_28A8[v17],
                v18,
                v19,
                "null",
                0,
                0);
              goto LABEL_30;
            }
            v20 = 0;
            v21 = (_DWORD *)(v2 + 12LL * v15);
            while ( 1 )
            {
              v22 = (unsigned int *)(v6 + 12LL * (int)v20++);
              seq_printf(
                a1,
                "%-10s%-10d%-10d%-10s%-10d%-10d%-10s%-10d%-10d\n",
                off_28A8[v4],
                v5,
                v7,
                off_28A8[v17],
                v18,
                v19,
                off_28A8[v22[5]],
                v22[6],
                v22[7]);
              if ( *(_DWORD *)(v6 + 16) <= v20 )
                break;
              v17 = v21[5];
              v18 = v21[6];
              v19 = v21[7];
              v4 = *(_DWORD *)(v2 + 4);
              v5 = *(_DWORD *)(v2 + 8);
              v7 = *(_DWORD *)(v2 + 12);
            }
LABEL_30:
            if ( *(_DWORD *)(v2 + 16) > (unsigned int)++v15 )
            {
              v4 = *(_DWORD *)(v2 + 4);
              v5 = *(_DWORD *)(v2 + 8);
              v7 = *(_DWORD *)(v2 + 12);
              v6 = qword_4208 + 594068;
              v8 = qword_4208 + 644500;
              continue;
            }
            goto LABEL_13;
          }
        }
      }
      v11 = 0;
      while ( 1 )
      {
        v12 = v11++;
        v13 = (_DWORD *)(v9 + 12 * v12);
        if ( v13[5] == v4 && v13[6] == v5 && v13[7] == v7 )
          break;
        if ( v11 == v10 )
          goto LABEL_17;
      }
    }
LABEL_13:
    v2 += 788;
  }
  while ( v3 != v2 );
  seq_puts(
    a1,
    "\n"
    "--------------------------------------------------------------------------------------------------------------------"
    "---------------\n");
  return 0;
}
