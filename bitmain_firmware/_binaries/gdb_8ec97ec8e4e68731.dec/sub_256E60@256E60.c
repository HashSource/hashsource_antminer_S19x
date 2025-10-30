int __fastcall sub_256E60(int a1, _DWORD *a2, _DWORD *a3, _DWORD *a4, _DWORD *a5)
{
  _DWORD **v5; // r12
  int v6; // r4
  _DWORD *v7; // lr
  int v8; // r5

  v5 = *(_DWORD ***)(a1 + 48);
  if ( *(_DWORD ***)(a1 + 40) == v5 )
    return 0;
  v7 = *v5;
  v6 = 1;
  v8 = (*v5)[2];
  *a2 = **v5;
  *a3 = v7[1];
  *a4 = v8;
  *a5 = v7[9];
  *(_DWORD *)(a1 + 48) = v5 + 1;
  return v6;
}
