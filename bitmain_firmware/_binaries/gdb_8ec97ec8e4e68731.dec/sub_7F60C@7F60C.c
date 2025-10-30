int __fastcall sub_7F60C(int *a1, _DWORD *a2, _DWORD *a3)
{
  int *v3; // r3
  int v5; // r12
  int result; // r0
  int v8; // r1
  int v9; // r2
  int v10; // r3

  v3 = (int *)a3[1];
  v5 = *a1;
  result = *v3;
  v8 = v3[1];
  v9 = v3[2];
  v10 = v3[3];
  *a2 = result;
  a2[1] = v8;
  a2[2] = v9;
  a2[3] = v10;
  while ( *(_DWORD *)(v5 + 4) )
    v5 = *(_DWORD *)(v5 + 4);
  *(_DWORD *)(v5 + 4) = *a3;
  *a3 = 0;
  return result;
}
