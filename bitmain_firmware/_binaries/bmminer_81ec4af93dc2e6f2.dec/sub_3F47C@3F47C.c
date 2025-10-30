int __fastcall sub_3F47C(int result)
{
  int v1; // r6
  int *v2; // r4
  float v3; // s0
  int i; // r4
  int v5; // r3
  int v6; // r2
  _DWORD *v7; // r3
  char v8[2048]; // [sp+0h] [bp-800h] BYREF

  if ( (unsigned int)result < 0x64 )
    result = 100;
  if ( (unsigned int)result >= 0xBB8 )
    v1 = 3000;
  else
    v1 = result;
  if ( (unsigned int)off_AFC24 > 4 )
  {
    snprintf(v8, 0x800u, "inc freq delay:%d", v1);
    result = sub_3AF5C(4, v8, 0, v5);
  }
  if ( dword_AFE58 != 2 )
  {
    v2 = &dword_4B6CA8;
    v3 = flt_AFBFC;
    goto LABEL_10;
  }
  for ( i = 0; i != 4; ++i )
  {
    result = sub_266F0(i);
    if ( result )
    {
      result = sub_26540();
      if ( result > 0 )
      {
        v6 = dword_4B6CB8[i];
        v7 = &dword_52FE68[256 * i];
        result = (int)&dword_52FE68[256 * i + result];
        do
          *v7++ = v6;
        while ( v7 != (_DWORD *)result );
      }
    }
  }
  LOWORD(v2) = (unsigned __int16)&dword_4B6CA8;
  v3 = flt_AFBFC;
  if ( flt_AFBFC <= 0.0 )
  {
    HIWORD(v2) = (unsigned int)&dword_4B6CA8 >> 16;
LABEL_10:
    if ( v3 > 0.0 )
      return result;
LABEL_18:
    result = sub_23B00((int)dword_52FE68, *((unsigned __int8 *)v2 + 36), 1);
    v2[8] = result;
    return result;
  }
  HIWORD(v2) = (unsigned int)&dword_4B6CA8 >> 16;
  result = sub_23090(*((unsigned __int8 *)v2 + 36), dword_AFE5C, v2[8], v1);
  if ( flt_AFBFC <= 0.0 )
    goto LABEL_18;
  return result;
}
