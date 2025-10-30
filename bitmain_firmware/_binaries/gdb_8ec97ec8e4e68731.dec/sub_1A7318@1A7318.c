unsigned int __fastcall sub_1A7318(int a1, int a2, int a3)
{
  unsigned int result; // r0
  _DWORD *v4; // r3
  int v5; // r4
  int *v6; // lr
  int v7; // r6
  int v10; // r1
  int v11; // r3
  _DWORD *v12; // r2
  _DWORD *v13; // r3
  int v14; // r12
  bool v15; // zf
  int v16; // r3
  int v17; // r0
  unsigned int v18; // r12
  int v19; // r1

  result = 954437177 * ((a1 - *(_DWORD *)(dword_487AA4 + 152)) >> 3);
  v4 = *(_DWORD **)(dword_487AB8 + 4 * result);
  v5 = 4 * result;
  v6 = (int *)(dword_487AB8 + 4 * result);
  if ( v4 )
  {
    while ( 1 )
    {
      result = v4[1];
      if ( a2 == result )
        break;
      v4 = (_DWORD *)*v4;
      if ( !v4 )
        goto LABEL_4;
    }
  }
  else
  {
LABEL_4:
    v7 = dword_487ABC;
    v10 = *(_DWORD *)(dword_487ABC + 64);
    v11 = *(_DWORD *)(dword_487ABC + 60);
    if ( (unsigned int)(v10 - v11) <= 0xB )
    {
      obstack_newchunk((struct obstack *)(dword_487ABC + 48), 12);
      v11 = *(_DWORD *)(v7 + 60);
      v10 = *(_DWORD *)(v7 + 64);
      v6 = (int *)(dword_487AB8 + v5);
    }
    v12 = *(_DWORD **)(v7 + 56);
    v13 = (_DWORD *)(v11 + 12);
    v14 = *(_DWORD *)(v7 + 72);
    *(_DWORD *)(v7 + 60) = v13;
    v15 = v13 == v12;
    if ( v13 == v12 )
      LOBYTE(result) = *(_BYTE *)(v7 + 88);
    v16 = ((unsigned int)v13 + v14) & ~v14;
    *(_DWORD *)(v7 + 60) = v16;
    if ( v15 )
      *(_BYTE *)(v7 + 88) = result | 2;
    v17 = *(_DWORD *)(v7 + 52);
    v18 = v10 - v17;
    result = v16 - v17;
    if ( result > v18 )
    {
      *(_DWORD *)(v7 + 60) = v10;
      v16 = v10;
    }
    v19 = *v6;
    *(_DWORD *)(v7 + 56) = v16;
    v12[1] = a2;
    v12[2] = a3;
    *v12 = v19;
    *v6 = (int)v12;
  }
  return result;
}
