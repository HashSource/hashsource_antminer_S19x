_DWORD *__fastcall sub_323A38(
        unsigned int a1,
        int a2,
        int a3,
        int a4,
        int (__fastcall *a5)(int, int),
        int (__fastcall *a6)(int, int),
        void (__fastcall *a7)(_DWORD *))
{
  int v10; // r5
  int v11; // r7
  _DWORD *v12; // r4
  int v13; // r3

  v10 = sub_3236D8(a1);
  v11 = dword_4381A8[4 * v10];
  v12 = (_DWORD *)a5(1, 60);
  if ( !v12 )
    return 0;
  v13 = a6(v11, 4);
  v12[3] = v13;
  if ( v13 )
  {
    v12[4] = v11;
    v12[14] = v10;
    *v12 = a2;
    v12[1] = a3;
    v12[2] = a4;
    v12[9] = a6;
    v12[10] = a7;
    return v12;
  }
  if ( !a7 )
    return 0;
  a7(v12);
  return 0;
}
