void __fastcall sub_19BD80(_DWORD *a1, int a2)
{
  void *v2; // r4
  int v3; // r0
  int v4; // lr
  int v5; // r12
  int v6; // [sp+0h] [bp-10h] BYREF
  void *ptr; // [sp+4h] [bp-Ch]
  int v8; // [sp+8h] [bp-8h]
  int v9; // [sp+Ch] [bp-4h]

  v2 = *(void **)a2;
  v3 = *a1 + 8;
  v4 = *(_DWORD *)(a2 + 4);
  v5 = *(_DWORD *)(a2 + 8);
  *(_DWORD *)a2 = 0;
  *(_DWORD *)(a2 + 4) = 0;
  *(_DWORD *)(a2 + 8) = 0;
  ptr = v2;
  v8 = v4;
  v9 = v5;
  v6 = 0;
  sub_E03E0(v3, &v6);
  if ( ptr )
    sub_339E64(ptr);
}
