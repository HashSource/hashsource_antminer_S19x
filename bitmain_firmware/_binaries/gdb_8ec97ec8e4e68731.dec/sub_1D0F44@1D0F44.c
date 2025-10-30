_DWORD *__fastcall sub_1D0F44(
        _DWORD *a1,
        char *a2,
        int a3,
        unsigned int a4,
        int (__fastcall *a5)(_DWORD *, int, int),
        int a6,
        int a7,
        int a8)
{
  unsigned int v12; // r7
  _DWORD *result; // r0
  int v14; // r4
  int v15; // r2
  _DWORD *v16; // r7
  int v17; // r1
  int v18; // [sp+14h] [bp-8h]

  v12 = __clz(a4);
  result = sub_1D0878(a1, 1);
  v14 = result[6];
  if ( v14 )
  {
    v18 = (v12 >> 5) + 2;
    do
    {
      sub_258BD4(result);
      if ( *(_BYTE *)(v14 + 52)
        || (result = (_DWORD *)((int (__fastcall *)(_DWORD *, int, unsigned int, char *, int, int, int))loc_1CFA04)(
                                 a1,
                                 v14,
                                 a4,
                                 a2,
                                 a3,
                                 a7,
                                 a8)) != 0 )
      {
        v15 = sub_1CE1F0((int)a1, v14);
        result = a2;
        if ( v15 )
        {
          v16 = *(_DWORD **)(*(_DWORD *)(v15 + 32) + 4 * v18);
          v17 = sub_1CFE94(a2, a3, v16, a5, a6, a7);
          result = v16;
          if ( v17 )
            break;
          result = (_DWORD *)a5(v16, 0, a6);
          if ( result )
            break;
        }
      }
      v14 = *(_DWORD *)v14;
    }
    while ( v14 );
  }
  return result;
}
