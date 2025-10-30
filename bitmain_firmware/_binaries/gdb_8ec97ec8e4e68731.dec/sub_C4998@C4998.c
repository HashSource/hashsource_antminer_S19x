int __fastcall sub_C4998(int a1)
{
  int v1; // r5
  int v2; // r0
  _DWORD *v3; // r0
  int v4; // r3
  _DWORD *v5; // r4
  int v6; // r12
  int v7; // lr
  int v8; // r3
  int v9; // r12
  unsigned int v10; // r0
  unsigned int v11; // r2
  unsigned int v12; // t1
  void *v13; // r6
  int v14; // r12

  v1 = *(_DWORD *)(a1 + 16);
  v2 = sub_183688(a1);
  v3 = (_DWORD *)sub_C4914(v2);
  v4 = *(_DWORD *)(v1 + 136);
  v5 = v3;
  v6 = *(_DWORD *)(v1 + 140);
  --v3[4];
  if ( v6 == v4 )
  {
    --*v3;
  }
  else
  {
    v7 = v3[1];
    v8 = v4 - 4;
    v9 = v6 - 4;
    v10 = (v3[2] - v7) >> 2;
    do
    {
      v12 = *(_DWORD *)(v8 + 4);
      v8 += 4;
      v11 = v12;
      if ( v12 < v10 )
        --*(_DWORD *)(v7 + 4 * v11);
    }
    while ( v8 != v9 );
  }
  v13 = off_489A8C;
  v14 = ps_getpid_0((int)&dword_4878EC);
  return ((int (__fastcall *)(int *, int, bool, _DWORD, _DWORD, int))v13)(
           &dword_4899A0,
           v14,
           v5[4] != 0,
           *v5,
           v5[1],
           (v5[2] - v5[1]) >> 2);
}
