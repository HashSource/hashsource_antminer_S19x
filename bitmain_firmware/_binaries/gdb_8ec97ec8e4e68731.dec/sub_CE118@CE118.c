int __fastcall sub_CE118(_DWORD **a1, _DWORD *a2)
{
  _DWORD *v2; // r3
  int v3; // r2

  v2 = *a1;
  if ( !*a1 )
    return 0;
  v3 = v2[2];
  *a1 = (_DWORD *)*v2;
  if ( !v3 )
    return -1;
  *a2 = *(_DWORD *)(v3 + 24);
  return 1;
}
