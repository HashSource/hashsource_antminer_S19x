int __fastcall sub_187610(int a1, int a2)
{
  int v2; // r3
  __int64 *v3; // r6
  int v6; // r7
  int v7; // r2
  int v8; // r4
  __int64 v9; // t1

  v2 = *(_DWORD *)(a2 + 224);
  v3 = (__int64 *)(a2 + 96);
  *(_QWORD *)(a2 + 80) = -1;
  v6 = a2 + 56;
  memset((void *)(a2 + 96 + v2), 0, 128 - v2);
  sub_180498((__int64 *)a2, v3, *(_DWORD *)(a2 + 224));
  v7 = a1;
  v8 = a2 - 8;
  do
  {
    v9 = *(_QWORD *)(v8 + 8);
    v8 += 8;
    v7 += 8;
    *(_QWORD *)(v7 - 8) = v9;
  }
  while ( v8 != v6 );
  sub_E07F8((void *)a2, 0xE8u);
  return 1;
}
