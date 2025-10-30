_DWORD *__fastcall sub_1733A4(int a1)
{
  int v1; // r2
  int v3; // r4
  int v4; // r1
  int v5; // r3
  char v6; // r2
  _DWORD *result; // r0
  _DWORD *v8; // r3
  int v9; // r12
  bool v10; // zf
  int v11; // r3

  v1 = *(_DWORD *)(a1 + 24);
  v10 = (*(_WORD *)(v1 + 2) & 0x10) == 0;
  *(_WORD *)(v1 + 2) = *(_WORD *)(v1 + 2) & 0xFC7F | 0x100;
  if ( v10 )
  {
    result = sub_93028(4u);
  }
  else
  {
    v3 = *(_DWORD *)(v1 + 16);
    v4 = *(_DWORD *)(v3 + 64);
    v5 = *(_DWORD *)(v3 + 60);
    v6 = v4 - v5;
    if ( (unsigned int)(v4 - v5) <= 3 )
    {
      obstack_newchunk((struct obstack *)(v3 + 48), 4);
      v5 = *(_DWORD *)(v3 + 60);
      v4 = *(_DWORD *)(v3 + 64);
    }
    result = *(_DWORD **)(v3 + 56);
    v8 = (_DWORD *)(v5 + 4);
    v9 = *(_DWORD *)(v3 + 72);
    *(_DWORD *)(v3 + 60) = v8;
    v10 = v8 == result;
    if ( v8 == result )
      v6 = *(_BYTE *)(v3 + 88);
    v11 = ((unsigned int)v8 + v9) & ~v9;
    *(_DWORD *)(v3 + 60) = v11;
    if ( v10 )
      *(_BYTE *)(v3 + 88) = v6 | 2;
    if ( v11 - *(_DWORD *)(v3 + 52) > (unsigned int)(v4 - *(_DWORD *)(v3 + 52)) )
    {
      v11 = v4;
      *(_DWORD *)(v3 + 60) = v4;
    }
    *(_DWORD *)(v3 + 56) = v11;
  }
  *(_DWORD *)(*(_DWORD *)(a1 + 24) + 28) = result;
  *result = 0;
  return result;
}
