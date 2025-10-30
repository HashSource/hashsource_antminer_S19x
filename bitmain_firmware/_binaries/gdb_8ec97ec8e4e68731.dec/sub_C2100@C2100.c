__int64 __fastcall sub_C2100(__int64 result)
{
  _DWORD *v1; // r5
  int v2; // r3
  int v3; // r4
  _DWORD *v4; // r2
  _DWORD *v5; // r3
  int v6; // r12
  bool v7; // zf
  int v8; // r3

  v1 = (_DWORD *)result;
  v2 = *(_DWORD *)(HIDWORD(result) + 12);
  v3 = HIDWORD(result);
  LODWORD(result) = *(_DWORD *)(HIDWORD(result) + 16);
  if ( (unsigned int)(result - v2) <= 7 )
  {
    obstack_newchunk((struct obstack *)HIDWORD(result), 8);
    v2 = *(_DWORD *)(v3 + 12);
    LODWORD(result) = *(_DWORD *)(v3 + 16);
  }
  v4 = *(_DWORD **)(v3 + 8);
  v5 = (_DWORD *)(v2 + 8);
  v6 = *(_DWORD *)(v3 + 24);
  *(_DWORD *)(v3 + 12) = v5;
  v7 = v5 == v4;
  if ( v5 == v4 )
    BYTE4(result) = *(_BYTE *)(v3 + 40);
  v8 = ((unsigned int)v5 + v6) & ~v6;
  *(_DWORD *)(v3 + 12) = v8;
  if ( v7 )
    *(_BYTE *)(v3 + 40) = BYTE4(result) | 2;
  HIDWORD(result) = 0;
  if ( v8 - *(_DWORD *)(v3 + 4) > (unsigned int)(result - *(_DWORD *)(v3 + 4)) )
  {
    v8 = result;
    *(_DWORD *)(v3 + 12) = result;
  }
  *(_DWORD *)(v3 + 8) = v8;
  *v1 = v4;
  *v4 = 0;
  v4[1] = 0;
  return result;
}
