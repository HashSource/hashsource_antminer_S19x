int __fastcall sub_3A258(__int64 a1, unsigned int a2)
{
  double v2; // d0
  int v3; // r4
  double v4; // d8
  _DWORD *v5; // r12
  int v6; // r5
  double v7; // r0
  double v8; // d0
  int v9; // r2
  __int64 v10; // r0
  int v11; // r3
  int v12; // r3
  int vars24; // [sp+3Ch] [bp+24h]
  int _40; // [sp+40h] [bp+28h]

  v3 = a1;
  v4 = v2;
  v5 = (_DWORD *)(a1 + 232);
  HIDWORD(a1) -= vars24;
  if ( a2 - _40 > a2 )
    --HIDWORD(a1);
  v6 = HIDWORD(a1) >> 31;
  LODWORD(a1) = a2 - _40;
  *v5 = vars24;
  v5[1] = _40;
  v7 = COERCE_DOUBLE(
         sub_8D40C(
           (-(HIDWORD(a1) >> 31) ^ (a2 - _40)) + (HIDWORD(a1) >> 31),
           ((-(__int64)(HIDWORD(a1) >> 31) ^ a1) + (unsigned __int64)(HIDWORD(a1) >> 31)) >> 32));
  v8 = v7;
  LODWORD(v7) = -32;
  ldexp(v7, v9);
  LODWORD(v10) = -2004318071;
  HIDWORD(v10) = *(_DWORD *)(v3 + 220);
  v11 = (*(_DWORD *)(v3 + 216) + 1) % 60;
  *(_DWORD *)(v3 + 216) = v11;
  if ( v6 )
    v8 = -v8;
  *(double *)(v3 + 8 * v11 + 264) = v8 + v4;
  if ( v11 == HIDWORD(v10) )
  {
    v12 = v11 + 1;
    v10 = v12 * (__int64)(int)v10;
    *(_DWORD *)(v3 + 220) = v12 - 60 * (((v12 + HIDWORD(v10)) >> 5) - (v12 >> 31));
  }
  return v10;
}
