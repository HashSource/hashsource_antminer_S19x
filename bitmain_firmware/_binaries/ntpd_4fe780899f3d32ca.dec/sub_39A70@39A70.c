int __fastcall sub_39A70(_DWORD *a1, int a2, unsigned int a3)
{
  double v3; // d0
  int v5; // r3
  double v6; // d8
  double v7; // r0
  double v8; // d0
  int v9; // r2
  int result; // r0
  int v11; // r1
  int v12; // r2
  int v13; // r3
  double v14; // r0
  double v15; // d0
  int v16; // r2
  int vars24; // [sp+3Ch] [bp+24h]
  unsigned int _40; // [sp+40h] [bp+28h]

  v5 = a2 - vars24;
  if ( a3 < _40 )
    --v5;
  v6 = v3;
  a1[58] = vars24;
  a1[59] = _40;
  if ( v5 < 0 )
  {
    v14 = COERCE_DOUBLE(sub_8BEC4(_40 - a3, (unsigned __int64)-(__int64)(__PAIR64__(v5, 0) + a3 - _40) >> 32));
    v15 = v14;
    LODWORD(v14) = -32;
    ldexp(v14, v16);
    v8 = -v15;
  }
  else
  {
    v7 = COERCE_DOUBLE(sub_8BEC4(a3 - _40, (__PAIR64__(v5, 0) + a3 - _40) >> 32));
    v8 = v7;
    LODWORD(v7) = -32;
    ldexp(v7, v9);
  }
  result = -2004318071;
  v11 = a1[55];
  v12 = a1[54] + 1;
  a1[54] = v12 % 60;
  *(double *)&a1[2 * (v12 % 60) + 66] = v8 + v6;
  if ( v12 % 60 == v11 )
  {
    v13 = v12 % 60 + 1;
    result = -2004318071 * v13;
    a1[55] = v13 % 60;
  }
  return result;
}
