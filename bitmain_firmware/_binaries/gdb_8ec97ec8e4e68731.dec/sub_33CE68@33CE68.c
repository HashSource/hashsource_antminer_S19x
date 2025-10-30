_DWORD *__fastcall sub_33CE68(_DWORD *a1, __int64 *a2, unsigned int a3, unsigned int a4)
{
  __int64 v4; // kr00_8
  _BYTE *v5; // r1
  unsigned int v6; // r2
  int v8; // r2

  *a1 = a1 + 2;
  v4 = *a2;
  if ( a3 > *((_DWORD *)a2 + 1) )
    sub_33D20C("%s: __pos (which is %zu) > this->size() (which is %zu)", "basic_string::basic_string", a3, HIDWORD(v4));
  v5 = (_BYTE *)(v4 + a3);
  v6 = HIDWORD(v4) - a3;
  if ( v6 > a4 )
    v8 = (int)&v5[a4];
  else
    v8 = (int)&v5[v6];
  sub_33CDCC(a1, v5, v8);
  return a1;
}
