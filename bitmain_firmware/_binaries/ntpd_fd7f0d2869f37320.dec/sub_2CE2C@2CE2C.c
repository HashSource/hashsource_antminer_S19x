int __fastcall sub_2CE2C(int a1, int a2)
{
  __int16 v2; // r8
  size_t v4; // r2
  _DWORD *v5; // r6
  __int16 v6; // r3
  __int16 v7; // r3
  __int16 v8; // r3
  int v9; // r1
  int v10; // r2
  int v11; // r3
  bool v13; // cc

  v4 = *(unsigned __int16 *)(a1 + 32);
  v5 = (_DWORD *)a2;
  v6 = _stack_chk_guard;
  if ( *(_WORD *)(a1 + 32) )
  {
    v13 = v4 > 9;
    if ( v4 > 9 )
    {
      v6 = *(_WORD *)(a1 + 236);
      LOWORD(a2) = 9;
    }
    else
    {
      v2 = v4 + 1;
      v4 *= 16;
    }
    if ( v13 )
    {
      v2 = 10;
      v4 = 144;
      *(_WORD *)(a1 + 32) = a2;
      *(_WORD *)(a1 + 34) = v6;
    }
  }
  else
  {
    v7 = *(_WORD *)(a2 + 12);
    v2 = 1;
    if ( v7 < 0 )
      v8 = v7 + 1;
    else
      v8 = v7 - 1;
    *(_WORD *)(a1 + 34) = v8;
  }
  memmove((void *)(a1 + 96), (const void *)(a1 + 80), v4);
  v9 = v5[1];
  v10 = v5[2];
  v11 = v5[3];
  *(_DWORD *)(a1 + 80) = *v5;
  *(_DWORD *)(a1 + 84) = v9;
  *(_DWORD *)(a1 + 88) = v10;
  *(_DWORD *)(a1 + 92) = v11;
  *(_WORD *)(a1 + 32) = v2;
  sub_2CCD0((_QWORD *)a1);
  return 1;
}
