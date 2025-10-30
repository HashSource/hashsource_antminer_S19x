bool __fastcall sub_2145E4(unsigned int a1, int *a2)
{
  bool v2; // zf
  int v5; // r0
  int *v6; // r1
  int v7; // r3
  int v8; // r5
  int v9; // r7
  int v10; // r6
  unsigned int v11; // r0

  v2 = dword_489690 == 0;
  if ( dword_489690 )
    v2 = a2 == 0;
  if ( v2 )
    return 0;
  v5 = sub_2117A4(a2);
  if ( v5
    && (v7 = v6[1],
        v8 = *v6,
        v9 = *(_DWORD *)(v7 + 144),
        v10 = *(_DWORD *)(*v6 + 36),
        v11 = *(_DWORD *)(v9 + 4 * sub_162FDC(*(_DWORD *)(v7 + 36), *v6)) + *(_DWORD *)(v8 + 32),
        a1 >= v11) )
  {
    return a1 < v10 + v11;
  }
  else
  {
    return 0;
  }
}
