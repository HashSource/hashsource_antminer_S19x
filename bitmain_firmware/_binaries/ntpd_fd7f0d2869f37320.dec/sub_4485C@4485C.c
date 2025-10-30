_DWORD *__fastcall sub_4485C(int a1)
{
  int v2; // r6
  int v3; // r4
  _DWORD *result; // r0
  unsigned __int8 *v5; // r2
  int v6; // t1
  int v7; // r3
  int v8; // r3
  int v9; // r7
  int v10; // r8
  int v11; // r1
  int v12; // lr
  int v13; // r12
  int v14; // r7
  int v15; // r9
  unsigned int v16; // r10
  int v17; // r2
  _DWORD *v18; // r5
  size_t v19; // r0
  _DWORD *v20; // r7
  int v21; // r1
  _DWORD *v22; // r4
  int v23; // r1
  int v24; // r0
  int v25; // r1
  int v26; // lr
  int v27; // [sp+14h] [bp-10h]

  v2 = *(_DWORD *)(a1 + 4);
  v3 = *(_DWORD *)(v2 + 84);
  result = *(_DWORD **)v3;
  if ( !**(_DWORD **)v3 )
  {
    *result = 1;
    return result;
  }
  if ( *(int *)(a1 + 84) <= 23 )
  {
    v24 = v2;
    v25 = 2;
    return (_DWORD *)sub_39C88(v24, v25);
  }
  v5 = (unsigned __int8 *)(a1 + 88);
  if ( *(_BYTE *)(a1 + 88) != 16 )
  {
    do
      v6 = *++v5;
    while ( v6 != 16 );
  }
  v7 = 10 * (v5[2] >> 4) + (v5[2] & 0xF);
  *(_DWORD *)(v3 + 188) = v7;
  if ( v7 == 94 )
  {
    sub_39C88(v2, 2);
    result = (_DWORD *)write(*(_DWORD *)(v3 + 28), &unk_B7DF0, 0x1Au);
    if ( result == (_UNKNOWN **)((char *)&off_18 + 2) )
      return result;
    v24 = v2;
    v25 = 3;
    return (_DWORD *)sub_39C88(v24, v25);
  }
  if ( v7 <= 98 )
    v7 += 100;
  v8 = v7 + 1900;
  *(_DWORD *)(v3 + 188) = v8;
  v9 = result[2];
  v27 = v9;
  v10 = 100 * (v5[3] & 0xF) + 10 * (v5[4] >> 4) + (v5[4] & 0xF);
  *(_DWORD *)(v3 + 192) = v10;
  if ( v9 <= 10 )
  {
    *(_DWORD *)(v3 + 196) = 10 * (v5[5] >> 4) + (v5[5] & 0xF);
  }
  else
  {
    v11 = 10 * (v5[6] >> 4) + (v5[6] & 0xF);
    *(_DWORD *)(v3 + 196) = v11;
    if ( v11 == 10 )
    {
      v13 = 10 * (v5[7] >> 4) + (v5[7] & 0xF);
      *(_DWORD *)(v3 + 200) = v13;
      v14 = 10 * (v5[8] >> 4) + (v5[8] & 0xF);
      *(_DWORD *)(v3 + 204) = v14;
      v26 = 10 * (v5[9] >> 4) + (v5[9] & 0xF);
      *(_DWORD *)(v3 + 208) = (_DWORD)&unk_F4240 * v26;
      v17 = v5[10] >> 4;
      *(_DWORD *)(v3 + 208) = (_DWORD)&unk_F4240 * v26 + 1000 * v17;
      goto LABEL_21;
    }
  }
  v12 = 10 * (v5[5] >> 4) + (v5[5] & 0xF);
  *(_DWORD *)(v3 + 196) = v12;
  v13 = 10 * (v5[6] >> 4) + (v5[6] & 0xF);
  *(_DWORD *)(v3 + 200) = v13;
  v14 = 10 * (v5[7] >> 4) + (v5[7] & 0xF);
  *(_DWORD *)(v3 + 204) = v14;
  v15 = (_DWORD)&unk_F4240 * (10 * (v5[8] >> 4) + (v5[8] & 0xF));
  *(_DWORD *)(v3 + 208) = v15;
  v16 = v5[9];
  v17 = 1000;
  *(_DWORD *)(v3 + 208) = v15 + 1000 * (v16 >> 4);
  if ( v12 == 10 )
  {
LABEL_21:
    if ( v13 == 10 )
      v17 = v27;
    v12 = 10;
    if ( v13 == 10 )
      result[2] = v17 + 1;
  }
  v18 = (_DWORD *)(a1 + 72);
  sub_6D00C(v3 + 56, 128, "%d %d %d %d %d", v8, v10, v12, v13, v14);
  v19 = strlen((const char *)(v3 + 56));
  v20 = (_DWORD *)(v3 + 232);
  *(_QWORD *)(v3 + 248) = 0x3EE4F8B588E368F1LL;
  *(_DWORD *)(v3 + 184) = v19;
  v21 = v18[1];
  *(_DWORD *)(v3 + 232) = *v18;
  *(_DWORD *)(v3 + 236) = v21;
  if ( !sub_3A4E8((_DWORD *)v3) )
    sub_39C88(v2, 6);
  v22 = (_DWORD *)(v3 + 224);
  v23 = v20[1];
  *v22 = *v20;
  v22[1] = v23;
  return (_DWORD *)sub_3A534(v2);
}
