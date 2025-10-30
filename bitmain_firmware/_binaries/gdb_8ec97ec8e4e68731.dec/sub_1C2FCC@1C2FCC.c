int __fastcall sub_1C2FCC(int a1, int a2, int a3, int a4)
{
  int v8; // r4
  int v9; // r6
  int *v10; // r10
  int v11; // r0
  int *v12; // r10
  int v13; // r7
  int v14; // t1
  int result; // r0
  int v16; // [sp+0h] [bp-2Ch] BYREF
  int v17; // [sp+4h] [bp-28h]

  (*(void (**)(void))(*(_DWORD *)(*(_DWORD *)a1 + 32) + 4))();
  v8 = a3 - v16;
  v9 = v16 + a4;
  memcpy((void *)(a2 + 16 * (a4 + 1)), (const void *)(a1 + 16 * (v8 + 1)), 16 * v16);
  if ( dword_46DAA0 != v8 )
    a4 = -1;
  if ( v17 <= 0 )
    return a4;
  v10 = &v16 + v17;
  do
  {
    v11 = sub_1C2ED4(a1, v8);
    *--v10 = v11;
    v16 = v11;
    v8 -= v11;
  }
  while ( v10 != &v16 );
  if ( v17 <= 0 )
    return a4;
  v12 = v10 - 1;
  v13 = 0;
  while ( 1 )
  {
    v14 = v12[1];
    ++v12;
    ++v13;
    v8 += v14;
    v16 = v14;
    result = sub_1C2FCC(a1, a2, v8, v9);
    if ( result != -1 )
      break;
    v9 += v16;
    if ( v17 <= v13 )
      return a4;
  }
  return result;
}
