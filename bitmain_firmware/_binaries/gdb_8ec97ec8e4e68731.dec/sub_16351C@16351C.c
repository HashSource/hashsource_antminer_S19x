int sub_16351C(int a1, ...)
{
  char *v1; // r6
  _BYTE *i; // r4
  const char *v4; // r7
  _BYTE *v5; // r8
  size_t v6; // r0
  size_t v7; // r9
  char v8; // r2
  int v9; // r3
  int result; // r0
  int v11; // r1
  bool v12; // zf
  int v13; // r3
  va_list varg_r1; // [sp+2Ch] [bp+20h] BYREF

  va_start(varg_r1, a1);
  va_copy(v1, varg_r1);
  for ( i = *(_BYTE **)(a1 + 12); ; *(_DWORD *)(a1 + 12) = i )
  {
    v1 += 4;
    v4 = (const char *)*((_DWORD *)v1 - 1);
    v5 = *(_BYTE **)(a1 + 16);
    if ( !v4 )
      break;
    v6 = strlen(v4);
    v7 = v6;
    if ( v6 > v5 - i )
    {
      obstack_newchunk((struct obstack *)a1, v6);
      i = *(_BYTE **)(a1 + 12);
    }
    memcpy(i, v4, v7);
    i = (_BYTE *)(*(_DWORD *)(a1 + 12) + v7);
  }
  if ( v5 == i )
  {
    obstack_newchunk((struct obstack *)a1, 1);
    i = *(_BYTE **)(a1 + 12);
  }
  v8 = (_BYTE)i + 1;
  *(_DWORD *)(a1 + 12) = i + 1;
  *i = 0;
  v9 = *(_DWORD *)(a1 + 12);
  result = *(_DWORD *)(a1 + 8);
  v11 = *(_DWORD *)(a1 + 16);
  v12 = v9 == result;
  if ( v9 == result )
    v8 = *(_BYTE *)(a1 + 40);
  v13 = (v9 + *(_DWORD *)(a1 + 24)) & ~*(_DWORD *)(a1 + 24);
  *(_DWORD *)(a1 + 12) = v13;
  if ( v12 )
    *(_BYTE *)(a1 + 40) = v8 | 2;
  if ( v13 - *(_DWORD *)(a1 + 4) > (unsigned int)(v11 - *(_DWORD *)(a1 + 4)) )
  {
    v13 = v11;
    *(_DWORD *)(a1 + 12) = v11;
  }
  *(_DWORD *)(a1 + 8) = v13;
  return result;
}
