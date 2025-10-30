_DWORD *__fastcall sub_21BFA8(unsigned int a1, int a2)
{
  _DWORD *result; // r0
  int v5; // r7
  unsigned int v6; // r3
  unsigned int v7; // r2
  bool v8; // cc
  _DWORD *i; // r4
  int v10; // r2
  _DWORD v11[2]; // [sp+8h] [bp-8h] BYREF

  result = sub_1B23BC(v11, a1, a2);
  v5 = v11[0];
  if ( !v11[0] )
    goto LABEL_6;
  v6 = *(_BYTE *)(v11[0] + 32) & 0xF;
  v7 = v6 - 4;
  v6 -= 9;
  v8 = v6 > 1;
  if ( v6 > 1 )
    v8 = v7 > 2;
  if ( v8 )
  {
LABEL_6:
    for ( i = *(_DWORD **)(dword_487D2C + 36); i; i = (_DWORD *)*i )
    {
      v10 = i[33];
      result = i;
      if ( v10 )
      {
        result = (_DWORD *)(*(int (__fastcall **)(_DWORD *, int, _DWORD, unsigned int, int, _DWORD, int))(*(_DWORD *)(v10 + 40) + 52))(
                             i,
                             v5,
                             v11[1],
                             a1,
                             a2,
                             0,
                             v5);
        if ( result )
          break;
      }
    }
  }
  return result;
}
