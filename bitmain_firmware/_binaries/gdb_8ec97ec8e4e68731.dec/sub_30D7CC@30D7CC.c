_DWORD *__fastcall sub_30D7CC(_DWORD *result, const void *a2, size_t a3)
{
  _DWORD *v5; // r4
  int v6; // r1
  void *v7; // r0
  void *v8; // r6
  int v9; // r3
  int v10; // r2

  if ( !result[18] )
  {
    v5 = result;
    v6 = result[9];
    if ( result[8] < v6 )
    {
LABEL_6:
      v8 = sub_93028(a3 + 1);
      result = memcpy(v8, a2, a3);
      v9 = v5[8];
      v10 = v5[1];
      *((_BYTE *)v8 + a3) = 0;
      v5[8] = v9 + 1;
      *(_DWORD *)(v10 + 4 * v9) = v8;
      return result;
    }
    if ( !v6 )
    {
      result[9] = 3;
      result[1] = sub_93028(0xCu);
      goto LABEL_6;
    }
    if ( v6 <= 0x3FFFFFFF )
    {
      v7 = (void *)result[1];
      v5[9] = 2 * v6;
      v5[1] = sub_93050(v7, 8 * v6);
      goto LABEL_6;
    }
    result = (_DWORD *)sub_930D8(0x7FFFFFFF);
    byte_471494 = (char)result;
  }
  return result;
}
