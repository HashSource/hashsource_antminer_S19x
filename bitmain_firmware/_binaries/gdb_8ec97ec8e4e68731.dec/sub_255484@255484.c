int __fastcall sub_255484(int result, int a2)
{
  int v2; // r4
  int v4; // r1
  int v5; // r5
  _DWORD *v6; // r12
  __int16 *v7; // r3
  _DWORD **v8; // r11
  int v9; // r12
  int v10; // r3
  char v11; // r0
  _DWORD *v12; // r6
  _DWORD *v13; // r3
  int v14; // lr
  bool v15; // zf
  int v16; // r3
  _DWORD *v17; // r3
  int v18; // r0
  _DWORD *v19; // r0
  int v20; // r2

  v2 = result;
  if ( result )
  {
    v4 = *(_DWORD *)(a2 + 24);
    v5 = 0;
    result = *(_WORD *)(v4 + 2) & 0x380;
    while ( 1 )
    {
      v20 = (unsigned __int16)result;
      if ( (unsigned __int16)result == 128 )
      {
        v7 = *(__int16 **)(v4 + 28);
        if ( v7 == &word_3B4A2C )
        {
          if ( v5 >= 0 )
            return result;
        }
        else if ( (unsigned __int16)v7[3] <= v5 )
        {
          return result;
        }
        v6 = off_46DBB8;
      }
      else
      {
        if ( v5 >= 0 )
          return result;
        v6 = off_46DBB8;
        v7 = &word_3B4A2C;
      }
      v8 = (_DWORD **)(4 * v5);
      if ( v6[4 * (*(unsigned __int8 *)(*(_DWORD *)(*((_DWORD *)v7 + 13) + 4 * v5) + 32) >> 3)] == 8 )
      {
        v9 = *(_DWORD *)(v2 + 20);
        v10 = *(_DWORD *)(v2 + 16);
        v11 = v9 - v10;
        if ( (unsigned int)(v9 - v10) <= 0xB )
        {
          obstack_newchunk((struct obstack *)(v2 + 4), 12);
          v4 = *(_DWORD *)(a2 + 24);
          v10 = *(_DWORD *)(v2 + 16);
          v9 = *(_DWORD *)(v2 + 20);
          v20 = *(_WORD *)(v4 + 2) & 0x380;
        }
        v12 = *(_DWORD **)(v2 + 12);
        v13 = (_DWORD *)(v10 + 12);
        v14 = *(_DWORD *)(v2 + 28);
        *(_DWORD *)(v2 + 16) = v13;
        v15 = v13 == v12;
        if ( v13 == v12 )
          v11 = *(_BYTE *)(v2 + 44);
        v16 = ((unsigned int)v13 + v14) & ~v14;
        *(_DWORD *)(v2 + 16) = v16;
        if ( v15 )
          *(_BYTE *)(v2 + 44) = v11 | 2;
        if ( v16 - *(_DWORD *)(v2 + 8) > (unsigned int)(v9 - *(_DWORD *)(v2 + 8)) )
        {
          v16 = v9;
          *(_DWORD *)(v2 + 16) = v9;
        }
        *(_DWORD *)(v2 + 12) = v16;
        if ( v20 == 128 )
        {
          v17 = *(_DWORD **)(*(_DWORD *)(*(_DWORD *)(v4 + 28) + 52) + 4 * v5);
          *v12 = *v17;
        }
        else
        {
          v17 = *v8;
          *v12 = **v8;
        }
        v18 = *(_DWORD *)v2;
        v12[1] = v17[6];
        v19 = (_DWORD *)sub_324030(v18, v12, 1);
        if ( !*v19 )
          *v19 = v12;
        v4 = *(_DWORD *)(a2 + 24);
        result = *(_WORD *)(v4 + 2) & 0x380;
      }
      ++v5;
    }
  }
  return result;
}
