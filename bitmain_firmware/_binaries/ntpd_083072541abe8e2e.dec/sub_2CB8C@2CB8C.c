int __fastcall sub_2CB8C(int a1, int a2)
{
  int v3; // r1
  int v5; // r6
  int v6; // r4
  int v7; // r0
  int v8; // r3
  int v9; // r1
  _DWORD *v10; // r6
  int v11; // r4
  __int16 v12; // r0
  int v13; // r4
  int v14; // r1
  int v15; // r2
  int v16; // r12
  __int64 v17; // r0
  int result; // r0
  __int16 v19; // r2
  __int64 v20; // r2
  __int16 v21; // r1
  __int16 v22; // r3
  __int64 v23; // [sp+0h] [bp-10h] BYREF

  v3 = *(unsigned __int16 *)(a1 + 32);
  if ( *(_WORD *)(a1 + 32) )
  {
    v5 = a1 + 80;
    v6 = 0;
    while ( 1 )
    {
      v7 = sub_6DAF4(a2, v5);
      v8 = *(unsigned __int16 *)(a1 + 32);
      if ( v7 >= 0 )
        break;
      ++v6;
      v5 += 16;
      if ( v8 == v6 )
      {
        v9 = v6 - 1;
        goto LABEL_11;
      }
    }
    v9 = v6 - 1;
    if ( v8 > v6 )
    {
      v10 = (_DWORD *)(a1 + 48);
      v11 = a1 + 16 * v6;
      v12 = *(_WORD *)(v11 + 92);
      *(_QWORD *)(a1 + 64) = *(_QWORD *)(v11 + 80);
      *(_WORD *)(a1 + 36) = v12;
      if ( v9 == -1 )
        goto LABEL_12;
      goto LABEL_7;
    }
LABEL_11:
    v19 = *(_WORD *)(a1 + 34);
    v10 = (_DWORD *)(a1 + 48);
    *(_DWORD *)(a1 + 64) = 0;
    *(_DWORD *)(a1 + 68) = 0;
    *(_WORD *)(a1 + 36) = v19;
    if ( v9 == -1 )
      goto LABEL_12;
LABEL_7:
    v13 = 16 * v9;
    v14 = a1 + 16 * v9;
    v15 = *(__int16 *)(v14 + 92);
    v16 = dword_B9930;
    *(_WORD *)(a1 + 38) = v15;
    *(_BYTE *)(a1 + 72) = *(_BYTE *)(v14 + 94);
    v17 = *(_QWORD *)(v14 + 80);
    *(_QWORD *)(a1 + 48) = v17;
    if ( v16 )
    {
      *(_QWORD *)(a1 + 40) = v17;
    }
    else
    {
      sub_6DC24(&v23, v10, v15 - *(__int16 *)(a1 + 36));
      *(_QWORD *)(a1 + 40) = v23;
    }
    result = sub_6DD38(&v23, v10, *(_DWORD *)(a1 + v13 + 88));
    *(_QWORD *)(a1 + 56) = v23;
  }
  else
  {
    v22 = *(_WORD *)(a1 + 34);
    v10 = (_DWORD *)(a1 + 48);
    *(_DWORD *)(a1 + 64) = v3;
    *(_DWORD *)(a1 + 68) = v3;
    *(_WORD *)(a1 + 36) = v22;
LABEL_12:
    *v10 = -1;
    v10[1] = -1;
    v20 = *(_QWORD *)(a1 + 48);
    v21 = *(_WORD *)(a1 + 36);
    *(_BYTE *)(a1 + 72) = 0;
    *(_QWORD *)(a1 + 56) = v20;
    *(_QWORD *)(a1 + 40) = v20;
    *(_WORD *)(a1 + 38) = v21;
    return 0;
  }
  return result;
}
