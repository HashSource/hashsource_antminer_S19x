__int16 *__fastcall sub_43A3C(__int16 *result)
{
  int v1; // r6
  int v2; // r4
  _DWORD *v3; // r1
  __int16 *v4; // r5
  unsigned __int8 *v5; // r2
  int v6; // t1
  int v7; // r3
  int v8; // r0
  int v9; // r3
  int v10; // r7
  char *v11; // lr
  int v12; // r12
  int v13; // r8
  int v14; // r9
  unsigned int v15; // r10
  int *v16; // r5
  _DWORD *v17; // r7
  int v18; // r0
  int v19; // r1
  _DWORD *v20; // r4
  int v21; // r1
  __int16 *v22; // r0
  int v23; // r1
  int v24; // r0
  int v25; // r0
  unsigned __int8 *v26; // [sp+14h] [bp-10h]

  v1 = *((_DWORD *)result + 1);
  v2 = *(_DWORD *)(v1 + 84);
  v3 = *(_DWORD **)v2;
  if ( !**(_DWORD **)v2 )
  {
    *v3 = 1;
    return result;
  }
  v4 = result;
  if ( *((int *)result + 21) <= 23 )
  {
    v22 = (__int16 *)*((_DWORD *)result + 1);
    v23 = 2;
    return sub_394A0(v22, v23);
  }
  v5 = (unsigned __int8 *)(result + 44);
  if ( *((_BYTE *)result + 88) != 16 )
  {
    do
      v6 = *++v5;
    while ( v6 != 16 );
  }
  v7 = 10 * (v5[2] >> 4) + (v5[2] & 0xF);
  *(_DWORD *)(v2 + 188) = v7;
  if ( v7 == 94 )
  {
    sub_394A0((__int16 *)v1, 2);
    result = (__int16 *)write(*(_DWORD *)(v2 + 28), &unk_B6DF0, 0x1Au);
    if ( result == (_WORD *)&off_18 + 1 )
      return result;
    v22 = (__int16 *)v1;
    v23 = 3;
    return sub_394A0(v22, v23);
  }
  v8 = v3[2];
  if ( v7 <= 98 )
    v7 += 100;
  v9 = v7 + 1900;
  v26 = (unsigned __int8 *)v3[2];
  *(_DWORD *)(v2 + 188) = v9;
  v10 = 100 * (v5[3] & 0xF) + 10 * (v5[4] >> 4) + (v5[4] & 0xF);
  *(_DWORD *)(v2 + 192) = v10;
  if ( v8 > 10 )
  {
    v24 = 10 * (v5[6] >> 4) + (v5[6] & 0xF);
    *(_DWORD *)(v2 + 196) = v24;
    if ( v24 == 10 )
    {
      v11 = (char *)&unk_F4240;
      v12 = 10 * (v5[7] >> 4) + (v5[7] & 0xF);
      *(_DWORD *)(v2 + 200) = v12;
      *(_DWORD *)(v2 + 204) = 10 * (v5[8] >> 4) + (v5[8] & 0xF);
      v25 = (_DWORD)&unk_F4240 * (10 * (v5[9] >> 4) + (v5[9] & 0xF));
      *(_DWORD *)(v2 + 208) = v25;
      *(_DWORD *)(v2 + 208) = v25 + 1000 * (v5[10] >> 4);
LABEL_21:
      v9 = *(_DWORD *)(v2 + 188);
      if ( v12 == 10 )
        v5 = v26;
      else
        v11 = byte_9 + 1;
      v10 = *(_DWORD *)(v2 + 192);
      if ( v12 == 10 )
      {
        v11 = byte_9 + 1;
        v13 = *(_DWORD *)(v2 + 204);
        ++v5;
      }
      else
      {
        v13 = *(_DWORD *)(v2 + 204);
      }
      if ( v12 == 10 )
        v3[2] = v5;
      goto LABEL_12;
    }
  }
  else
  {
    *(_DWORD *)(v2 + 196) = 10 * (v5[5] >> 4) + (v5[5] & 0xF);
  }
  v11 = (char *)(10 * (v5[5] >> 4) + (v5[5] & 0xF));
  *(_DWORD *)(v2 + 196) = v11;
  v12 = 10 * (v5[6] >> 4) + (v5[6] & 0xF);
  *(_DWORD *)(v2 + 200) = v12;
  v13 = 10 * (v5[7] >> 4) + (v5[7] & 0xF);
  *(_DWORD *)(v2 + 204) = v13;
  v14 = (_DWORD)&unk_F4240 * (10 * (v5[8] >> 4) + (v5[8] & 0xF));
  *(_DWORD *)(v2 + 208) = v14;
  v15 = v5[9];
  v5 = (_BYTE *)(elf_hash_bucket + 556);
  *(_DWORD *)(v2 + 208) = v14 + 1000 * (v15 >> 4);
  if ( v11 == &byte_9[1] )
    goto LABEL_21;
LABEL_12:
  v16 = (int *)(v4 + 36);
  sub_6C054(v2 + 56, 128, "%d %d %d %d %d", v9, v10, v11, v12, v13);
  v17 = (_DWORD *)(v2 + 232);
  *(_DWORD *)(v2 + 184) = strlen((const char *)(v2 + 56));
  v18 = *v16;
  v19 = v16[1];
  *(_QWORD *)(v2 + 248) = 0x3EE4F8B588E368F1LL;
  *(_DWORD *)(v2 + 232) = v18;
  *(_DWORD *)(v2 + 236) = v19;
  if ( !sub_39CF8((_DWORD *)v2) )
    sub_394A0((__int16 *)v1, 6);
  v20 = (_DWORD *)(v2 + 224);
  v21 = v17[1];
  *v20 = *v17;
  v20[1] = v21;
  return (__int16 *)sub_39D44(v1);
}
