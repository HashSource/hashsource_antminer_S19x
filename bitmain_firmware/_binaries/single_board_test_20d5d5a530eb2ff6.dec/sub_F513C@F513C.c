int *__fastcall sub_F513C(int *result, int a2)
{
  _DWORD *v2; // r8
  int v3; // r10
  int v4; // r9
  unsigned int v5; // r4
  int v6; // r2
  unsigned int v7; // r6
  unsigned int v8; // r12
  unsigned int v9; // lr
  unsigned int v10; // r3
  int v11; // r2
  unsigned __int16 v12; // r4
  int v13; // r4

  v2 = (_DWORD *)(a2 + 200);
  v3 = 3;
  v4 = 5;
  v5 = result[1];
  v6 = *(_DWORD *)(a2 + 252);
  v7 = (unsigned __int16)*result;
  v8 = HIWORD(*result);
  v9 = HIWORD(v5);
  v10 = (unsigned __int16)v5;
  while ( 1 )
  {
    __pld(v2);
    v9 = (unsigned __int16)(((v9 >> 5) | ((_WORD)v9 << 11)) - (v7 & ~(_WORD)v10) - (v8 & v10) - v6);
    --v4;
    v11 = (unsigned __int16)((v10 >> 3) | ((_WORD)v10 << 13)) - ((unsigned __int16)v9 & ~v8) - (v7 & v8) - v2[12];
    v10 = (unsigned __int16)v11;
    v12 = ((v8 >> 2) | ((_WORD)v8 << 14)) - (v11 & ~(_WORD)v7) - (v7 & v9) - v2[11];
    v8 = v12;
    v13 = v12 & 0x3F;
    v7 = (unsigned __int16)(((v7 >> 1) | ((_WORD)v7 << 15)) - (v8 & ~(_WORD)v9) - (v9 & v11) - v2[10]);
    if ( v4 )
      goto LABEL_6;
    if ( !--v3 )
      break;
    if ( v3 == 2 )
      v4 = 6;
    else
      v4 = 5;
    v10 = (unsigned __int16)(v11 - *(_DWORD *)(a2 + 4 * v13));
    v8 = (unsigned __int16)(v8 - *(_DWORD *)(a2 + 4 * (v7 & 0x3F)));
    v9 = (unsigned __int16)(v9 - *(_DWORD *)(a2 + 4 * (v11 & 0x3F)));
    v7 = (unsigned __int16)(v7 - *(_DWORD *)(a2 + 4 * (v9 & 0x3F)));
LABEL_6:
    v6 = v2[9];
    v2 -= 4;
  }
  *result = (unsigned __int16)v7 | (v8 << 16);
  result[1] = (unsigned __int16)v11 | (v9 << 16);
  return result;
}
