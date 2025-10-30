int __fastcall sub_EBDB8(int a1, int a2, int *a3, _DWORD *a4, _DWORD *a5, _DWORD *a6, _DWORD *a7)
{
  int v10; // r1
  _DWORD *v12; // r0
  int v13; // r0

  v10 = sub_EBD18(a1, a2, -1);
  if ( v10 < 0 )
    return 0;
  v12 = (_DWORD *)sub_EBC98(a1, v10);
  v13 = sub_EBD58(v12, a4, a5, a6, a7);
  if ( a3 )
    *a3 = v13;
  return 1;
}
