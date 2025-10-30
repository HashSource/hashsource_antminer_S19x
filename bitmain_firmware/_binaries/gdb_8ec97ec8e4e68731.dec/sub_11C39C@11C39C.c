char *__fastcall sub_11C39C(int a1)
{
  _DWORD *v1; // r3
  int v2; // r0

  v1 = *(_DWORD **)(a1 + 40);
  v2 = *(_DWORD *)(a1 + 44);
  if ( v1 )
    v1 = (_DWORD *)*v1;
  return (char *)v1 + v2;
}
