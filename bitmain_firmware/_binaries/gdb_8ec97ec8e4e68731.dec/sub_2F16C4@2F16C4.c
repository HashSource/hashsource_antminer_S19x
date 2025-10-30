int __fastcall sub_2F16C4(int a1, int a2, _DWORD *a3, int (__fastcall *a4)(int, int, int, int, int), int *a5)
{
  int v5; // r9
  unsigned int v6; // r5
  int v7; // r12
  unsigned int v8; // lr
  int result; // r0
  int v14; // r3
  unsigned int v15; // r2

  v5 = *a5;
  v6 = a5[2];
  v7 = 12 * a3[2];
  v8 = *a5 + v7;
  a5[1] = v8;
  if ( v8 >= v6 || *(_DWORD *)(v5 + v7) >= (unsigned int)(a3[4] + a3[3]) )
    return 1;
  while ( 1 )
  {
    result = sub_2ED6EC(a1, a2, a4, a5);
    if ( !result )
      break;
    v14 = a5[1];
    v15 = a5[2];
    a5[1] = v14 + 12;
    if ( v14 + 12 >= v15 || *(_DWORD *)(v14 + 12) >= (unsigned int)(a3[4] + a3[3]) )
      return 1;
  }
  return result;
}
