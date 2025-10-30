bool __fastcall sub_AA074(int a1, int *a2)
{
  _DWORD *v2; // r2
  int v3; // r0

  v2 = *(_DWORD **)(a1 + 16);
  if ( v2 )
    v3 = sub_890D4(v2, 102, 0, a2);
  else
    v3 = sub_89534(*(_DWORD *)(a1 + 12), 102, 0, (int)a2);
  return v3 > 0;
}
