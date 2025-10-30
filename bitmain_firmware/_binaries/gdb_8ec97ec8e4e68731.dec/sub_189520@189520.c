void __fastcall sub_189520(_DWORD *a1)
{
  int v1; // r3
  _DWORD **v3; // r0
  int v4; // r3

  v1 = *a1;
  v3 = (_DWORD **)(a1 + 22);
  if ( v1 )
    *(_DWORD *)(v1 + 20) = 1;
  v4 = (int)*(v3 - 21);
  if ( v4 )
    *(_DWORD *)(v4 + 20) = 1;
  sub_CE054(v3);
  free(a1);
}
