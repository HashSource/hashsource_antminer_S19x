int __fastcall sub_1154F0(int a1, int a2, int a3)
{
  int (__fastcall *v3)(int, int, int, int); // r7
  int v7; // r8
  int v8; // r0

  v3 = *(int (__fastcall **)(int, int, int, int))(*(_DWORD *)(a1 + 124) + 12);
  if ( !v3 )
    return 0;
  v7 = sub_10E664(a3);
  v8 = sub_10E65C(a3);
  return v3(a1, a2, v7, v8);
}
