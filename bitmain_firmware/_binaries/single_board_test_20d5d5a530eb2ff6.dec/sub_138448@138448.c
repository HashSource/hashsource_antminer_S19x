int __fastcall sub_138448(int a1)
{
  int v1; // r3
  int (__fastcall *v2)(int, int, _DWORD, int *); // r4
  int v4; // [sp+4h] [bp-4h] BYREF

  v1 = *(_DWORD *)(a1 + 12);
  if ( !v1 )
    return 0;
  v2 = *(int (__fastcall **)(int, int, _DWORD, int *))(v1 + 92);
  if ( !v2 )
    return 0;
  if ( v2(a1, 8, 0, &v4) <= 0 )
    return 0;
  return v4;
}
