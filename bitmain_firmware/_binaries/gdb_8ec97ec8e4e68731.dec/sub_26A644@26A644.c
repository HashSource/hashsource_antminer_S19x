int __fastcall sub_26A644(unsigned int *a1, unsigned int a2, signed __int64 a3, __int64 a4)
{
  signed __int64 v5; // r4
  unsigned int *v6; // lr
  unsigned int v7; // r9
  signed __int64 v8; // r2
  unsigned int v9; // r8
  unsigned int v10; // r12
  unsigned __int64 v11; // r0
  unsigned __int64 v12; // r6
  unsigned int v14; // [sp+4h] [bp-8h]

  if ( !a1 || *a1 <= a2 )
    return -1;
  v14 = *a1;
  v5 = a3 + a4;
  v6 = &a1[4 * a2];
  v7 = a2;
  while ( 1 )
  {
    v8 = *((_QWORD *)v6 + 1);
    v6 += 4;
    v9 = *v6;
    v10 = v6[1];
    v11 = v8;
    if ( v8 < a3 )
      v11 = a3;
    v12 = v8 + __PAIR64__(v10, v9);
    if ( v5 < (__int64)(v8 + __PAIR64__(v10, v9)) )
      v12 = v5;
    if ( v11 < v12 )
      break;
    if ( ++v7 >= v14 )
      return -1;
  }
  return v7;
}
