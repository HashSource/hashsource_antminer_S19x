int __fastcall sub_140EF8(int a1, _BYTE *a2, _DWORD *a3, int a4, int a5)
{
  int v8; // r2
  int v9; // r0
  int v10; // r4
  int result; // r0
  int v12; // [sp+Ch] [bp-8h] BYREF

  v8 = *(_DWORD *)(a1 + 8);
  v9 = *(_DWORD *)(*(_DWORD *)(a1 + 20) + 20);
  v10 = *(_DWORD *)(v8 + 24);
  if ( v9 && sub_D8C78(v9) != a5 )
    return 0;
  result = sub_C08D8(0, a4, a5, a2, &v12, v10);
  if ( result > 0 )
  {
    *a3 = v12;
    return 1;
  }
  return result;
}
