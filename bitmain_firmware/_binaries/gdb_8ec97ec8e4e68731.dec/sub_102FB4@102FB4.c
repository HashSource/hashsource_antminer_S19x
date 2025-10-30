int __fastcall sub_102FB4(int a1, __int16 a2)
{
  _DWORD *v3; // r6
  int v4; // r5
  FILE *v5; // r0
  __int16 ptr; // [sp+6h] [bp-Ah] BYREF
  int v8; // [sp+8h] [bp-8h] BYREF
  int v9; // [sp+Ch] [bp-4h] BYREF

  v3 = (_DWORD *)(a1 + 12);
  v9 = -1040441407;
  v4 = a1 + 4;
  ptr = a2;
  v5 = *(FILE **)(a1 + 8);
  v8 = 3;
  sub_102D0C(v5, v3, &v9, 4u);
  ((void (__fastcall *)(int, int, int))loc_102C50)(v4, 4, 1);
  ((void (__fastcall *)(int, int, int))loc_102C50)(v4, 4, 1);
  sub_102D0C(*(FILE **)(a1 + 8), v3, &ptr, 2u);
  return sub_102E30(v4, &v8, 4u, 4);
}
