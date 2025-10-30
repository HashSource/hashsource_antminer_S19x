void *__fastcall sub_30B2DC(int a1, const void *a2, size_t a3, unsigned __int16 a4)
{
  int v4; // r12
  int v5; // lr
  __int16 v9; // r2
  int v10; // r0
  int v11; // r12
  int v12; // r12
  int v13; // lr
  int v14; // r12
  int v15; // lr
  int v16; // r3
  int v17; // r12
  void *result; // r0
  int v19; // r0
  int v20; // lr
  int v21; // r1
  int v22; // r0
  char v23; // r2
  int v24; // r2

  v4 = a1 + 4096;
  v5 = *(_DWORD *)(a1 + 5820);
  v9 = *(_WORD *)(a1 + 5816) | (a4 << v5);
  if ( v5 > 13 )
  {
    v19 = *(_DWORD *)(a1 + 20);
    v20 = *(_DWORD *)(a1 + 8);
    *(_WORD *)(v4 + 1720) = v9;
    *(_DWORD *)(a1 + 20) = v19 + 1;
    *(_BYTE *)(v20 + v19) = v9;
    v21 = *(_DWORD *)(a1 + 20);
    v22 = *(_DWORD *)(a1 + 8);
    v23 = HIBYTE(*(_WORD *)(v4 + 1720));
    *(_DWORD *)(a1 + 20) = v21 + 1;
    *(_BYTE *)(v22 + v21) = v23;
    v24 = *(_DWORD *)(v4 + 1724);
    *(_DWORD *)(v4 + 1724) = v24 - 13;
    *(_WORD *)(v4 + 1720) = (int)a4 >> (16 - v24);
  }
  else
  {
    *(_WORD *)(a1 + 5816) = v9;
    *(_DWORD *)(a1 + 5820) = v5 + 3;
  }
  sub_30B0EC(a1);
  v10 = *(_DWORD *)(a1 + 20);
  v11 = *(_DWORD *)(a1 + 8);
  *(_DWORD *)(a1 + 20) = v10 + 1;
  *(_BYTE *)(v11 + v10) = a3;
  v12 = *(_DWORD *)(a1 + 20);
  v13 = *(_DWORD *)(a1 + 8);
  *(_DWORD *)(a1 + 20) = v12 + 1;
  *(_BYTE *)(v13 + v12) = BYTE1(a3);
  v14 = *(_DWORD *)(a1 + 20);
  v15 = *(_DWORD *)(a1 + 8);
  *(_DWORD *)(a1 + 20) = v14 + 1;
  *(_BYTE *)(v15 + v14) = ~(_BYTE)a3;
  v16 = *(_DWORD *)(a1 + 20);
  v17 = *(_DWORD *)(a1 + 8);
  *(_DWORD *)(a1 + 20) = v16 + 1;
  *(_BYTE *)(v17 + v16) = (unsigned __int16)~(_WORD)a3 >> 8;
  result = memcpy((void *)(*(_DWORD *)(a1 + 8) + *(_DWORD *)(a1 + 20)), a2, a3);
  *(_DWORD *)(a1 + 20) += a3;
  return result;
}
