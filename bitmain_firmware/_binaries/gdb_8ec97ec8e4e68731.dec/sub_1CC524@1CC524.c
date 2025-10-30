int __fastcall sub_1CC524(_DWORD *a1, int (__fastcall *a2)(int *, _DWORD *))
{
  _DWORD *v2; // r5
  int v4; // r1
  _DWORD *v5; // r4
  int i; // r0
  int v7; // r1
  int result; // r0
  int v9; // r1
  int v10; // [sp+0h] [bp-Ch] BYREF
  int v11; // [sp+4h] [bp-8h]

  v2 = a1;
  v4 = a1[1];
  v5 = a1 - 2;
  v10 = *a1;
  v11 = v4;
  for ( i = a2(&v10, a1 - 2); ; i = a2(&v10, v5) )
  {
    v5 -= 2;
    if ( !i )
      break;
    v2 = v5 + 2;
    v7 = v5[3];
    v5[4] = v5[2];
    v5[5] = v7;
  }
  result = v10;
  v9 = v11;
  *v2 = v10;
  v2[1] = v9;
  return result;
}
