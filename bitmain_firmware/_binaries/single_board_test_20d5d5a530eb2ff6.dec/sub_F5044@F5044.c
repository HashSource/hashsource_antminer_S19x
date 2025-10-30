int *__fastcall sub_F5044(int *result, int *a2)
{
  int v2; // r8
  int v3; // r12
  int v4; // r7
  _DWORD *v5; // lr
  int v6; // r10
  unsigned int v7; // r4
  int v8; // r2
  unsigned int v9; // r3
  unsigned __int16 v10; // r5
  int v11; // r7
  __int16 v12; // r6
  unsigned int v13; // r6
  int v14; // r9

  v2 = 3;
  v3 = 5;
  v5 = a2 + 13;
  v4 = *a2;
  LOWORD(v6) = *result;
  v7 = HIWORD(*result);
  LOWORD(v8) = result[1];
  v9 = HIWORD(result[1]);
  while ( 1 )
  {
    --v3;
    v10 = (v8 & v9) + (v7 & ~(_WORD)v9) + v6 + v4;
    v11 = *(v5 - 12);
    v12 = *(v5 - 11) + v8;
    __pld(v5);
    v6 = (v10 >> 15) | (2 * v10);
    v7 = ((unsigned __int16)((v8 & ~(_WORD)v6) + v11 + v7 + (v9 & v6)) >> 14)
       | (4 * (unsigned __int16)((v8 & ~(_WORD)v6) + v11 + v7 + (v9 & v6)));
    v13 = (unsigned __int16)(v12 + (v6 & v7) + (v9 & ~(_WORD)v7));
    v8 = (v13 >> 13) | (8 * v13);
    v14 = v9 + *(v5 - 10) + (v7 & v8);
    v9 = ((unsigned __int16)((v6 & ~(_WORD)v8) + v14) >> 11) | (32 * (unsigned __int16)((v6 & ~(_WORD)v8) + v14));
    if ( v3 )
      goto LABEL_6;
    if ( !--v2 )
      break;
    if ( v2 == 2 )
      v3 = 6;
    else
      v3 = 5;
    v6 += a2[v9 & 0x3F];
    v7 += a2[v6 & 0x3F];
    v8 += a2[v7 & 0x3F];
    v9 += a2[v8 & 0x3F];
LABEL_6:
    v4 = *(v5 - 9);
    v5 += 4;
  }
  *result = (unsigned __int16)v6 | (v7 << 16);
  result[1] = (unsigned __int16)v8 | (v9 << 16);
  return result;
}
