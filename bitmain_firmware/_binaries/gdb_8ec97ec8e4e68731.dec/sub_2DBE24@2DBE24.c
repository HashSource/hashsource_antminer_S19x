_DWORD *__fastcall sub_2DBE24(int a1, int a2)
{
  _DWORD *result; // r0
  int v4; // lr
  int v5; // r12
  char v6; // r3

  if ( a1 || (result = (_DWORD *)sub_2AAEC8(a2, 72)) != 0 )
  {
    result = (_DWORD *)sub_2FC7E8();
    if ( result )
    {
      v4 = *(_DWORD *)(a2 + 60);
      v5 = *(_DWORD *)(a2 + 64);
      result[13] = 0;
      v6 = *((_BYTE *)result + 52);
      result[7] = -1;
      result[9] = v4;
      result[10] = v5;
      result[8] = -1;
      result[11] = 0;
      result[12] = 0;
      result[14] = 0;
      result[15] = 0;
      result[16] = 0;
      result[17] = 0;
      *((_BYTE *)result + 52) = v6 | 1;
    }
  }
  return result;
}
