void *__fastcall sub_2CEF0(int a1, int a2)
{
  int v4; // r5
  int v5; // r4
  int v6; // r0
  int v7; // r3
  int v8; // r2
  int v9; // r4
  __int16 v10; // r3
  int v11; // r1
  __int16 v12; // r0
  int v13; // r3
  bool v14; // zf
  __int64 v15; // r2
  void *result; // r0
  __int16 v17; // r2
  __int16 v18; // r3
  __int64 v19; // [sp+0h] [bp-10h] BYREF

  if ( *(_WORD *)(a1 + 32) )
  {
    v4 = a1 + 80;
    v5 = 0;
    while ( 1 )
    {
      v6 = sub_6EAC0(a2, v4);
      v7 = *(unsigned __int16 *)(a1 + 32);
      if ( v6 >= 0 )
        break;
      ++v5;
      v4 += 16;
      if ( v7 == v5 )
        goto LABEL_10;
    }
    if ( v7 <= v5 )
    {
LABEL_10:
      v9 = v5 - 1;
      goto LABEL_11;
    }
    v8 = a1 + 16 * v5;
    v9 = v5 - 1;
    v10 = *(_WORD *)(v8 + 92);
    *(_QWORD *)(a1 + 64) = *(_QWORD *)(v8 + 80);
    *(_WORD *)(a1 + 36) = v10;
    if ( v9 < 0 )
      goto LABEL_12;
  }
  else
  {
    v9 = -1;
LABEL_11:
    v17 = *(_WORD *)(a1 + 34);
    *(_BYTE *)(a1 + 64) = 0;
    *(_BYTE *)(a1 + 65) = 0;
    *(_WORD *)(a1 + 36) = v17;
    *(_BYTE *)(a1 + 66) = 0;
    *(_BYTE *)(a1 + 67) = 0;
    *(_BYTE *)(a1 + 68) = 0;
    *(_BYTE *)(a1 + 69) = 0;
    *(_BYTE *)(a1 + 70) = 0;
    *(_BYTE *)(a1 + 71) = 0;
    if ( v9 < 0 )
    {
LABEL_12:
      result = memset((void *)(a1 + 48), 255, 8u);
      v18 = *(_WORD *)(a1 + 36);
      *(_BYTE *)(a1 + 72) = 0;
      *(_QWORD *)(a1 + 56) = -1;
      *(_WORD *)(a1 + 38) = v18;
      *(_QWORD *)(a1 + 40) = -1;
      return result;
    }
  }
  v11 = a1 + 16 * v9;
  v12 = *(_WORD *)(v11 + 92);
  v13 = dword_BA930;
  *(_WORD *)(a1 + 38) = v12;
  v14 = v13 == 0;
  *(_BYTE *)(a1 + 72) = *(_BYTE *)(v11 + 94);
  v15 = *(_QWORD *)(v11 + 80);
  *(_QWORD *)(a1 + 48) = v15;
  if ( v14 )
  {
    sub_6EBD8(&v19, a1 + 48, v12 - *(__int16 *)(a1 + 36));
    *(_QWORD *)(a1 + 40) = v19;
  }
  else
  {
    *(_QWORD *)(a1 + 40) = v15;
  }
  result = (void *)sub_6ECEC(&v19, a1 + 48, *(_DWORD *)(a1 + 16 * v9 + 88));
  *(_QWORD *)(a1 + 56) = v19;
  return result;
}
