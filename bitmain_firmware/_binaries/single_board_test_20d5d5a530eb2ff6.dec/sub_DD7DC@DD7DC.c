int __fastcall sub_DD7DC(char *a1, int a2, int a3, _DWORD *a4, int a5, int *a6)
{
  int v8; // r4
  int v9; // r5
  int v10; // r0
  int result; // r0
  int v12; // r4
  int v13; // r11
  int v14; // r5
  int v15; // r10
  char v16; // t1
  _BYTE *v17; // r3
  unsigned int v18; // r3
  unsigned int v19; // r2
  char v20; // [sp+0h] [bp-14h]
  char v21; // [sp+1h] [bp-13h]
  char v22; // [sp+2h] [bp-12h]
  char v23; // [sp+3h] [bp-11h]
  char v24; // [sp+4h] [bp-10h]
  char v25; // [sp+5h] [bp-Fh]
  char v26; // [sp+6h] [bp-Eh]
  char v27; // [sp+7h] [bp-Dh]
  unsigned int v28; // [sp+8h] [bp-Ch] BYREF
  unsigned int v29; // [sp+Ch] [bp-8h]
  _BYTE v30[4]; // [sp+10h] [bp-4h] BYREF

  v8 = (*(unsigned __int8 *)(a5 + 5) << 16) | (*(unsigned __int8 *)(a5 + 4) << 24);
  v9 = *(unsigned __int8 *)(a5 + 6);
  v10 = *(unsigned __int8 *)(a5 + 7);
  v28 = _byteswap_ulong(*(_DWORD *)a5);
  v23 = v28;
  result = v10 | v8 | (v9 << 8);
  v20 = HIBYTE(v28);
  v21 = BYTE2(v28);
  v22 = BYTE1(v28);
  v25 = BYTE2(result);
  v26 = BYTE1(result);
  v29 = result;
  v27 = result;
  v24 = HIBYTE(result);
  v12 = *a6;
  if ( a3 )
  {
    v13 = a2 - 1;
    v14 = a3;
    v15 = 0;
    do
    {
      if ( !v12 )
      {
        sub_DCCAC((int *)&v28, a4);
        ++v15;
        v23 = v28;
        v27 = v29;
        v20 = HIBYTE(v28);
        v21 = BYTE2(v28);
        result = HIWORD(v29);
        v22 = BYTE1(v28);
        v24 = HIBYTE(v29);
        v25 = BYTE2(v29);
        v26 = BYTE1(v29);
      }
      v16 = *a1++;
      v17 = &v30[v12];
      --v14;
      v12 = ((_BYTE)v12 + 1) & 7;
      *(_BYTE *)++v13 = *(v17 - 16) ^ v16;
    }
    while ( v14 );
    if ( v15 )
    {
      v18 = v28;
      v19 = v29;
      *(_BYTE *)(a5 + 3) = v28;
      *(_BYTE *)a5 = HIBYTE(v18);
      result = HIWORD(v19);
      *(_BYTE *)(a5 + 1) = BYTE2(v18);
      *(_BYTE *)(a5 + 2) = BYTE1(v18);
      *(_BYTE *)(a5 + 7) = v19;
      *(_BYTE *)(a5 + 4) = HIBYTE(v19);
      *(_BYTE *)(a5 + 5) = BYTE2(v19);
      *(_BYTE *)(a5 + 6) = BYTE1(v19);
    }
  }
  *a6 = v12;
  return result;
}
