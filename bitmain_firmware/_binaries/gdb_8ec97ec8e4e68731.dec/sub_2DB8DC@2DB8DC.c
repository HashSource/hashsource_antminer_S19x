int __fastcall sub_2DB8DC(int a1, _DWORD *a2)
{
  int v2; // lr
  int v3; // r2
  int (__fastcall *v4)(int, int, int); // r5

  v2 = a2[1];
  v3 = *(_DWORD *)(v2 + 48);
  if ( *(int *)(a1 + 36) <= 0 )
  {
    *(_DWORD *)(a1 + 36) = -1;
  }
  else
  {
    v4 = *(int (__fastcall **)(int, int, int))(*(_DWORD *)(*(_DWORD *)(v3 + 4) + 444) + 404);
    *(_DWORD *)(a1 + 36) = *a2;
    *a2 += v4(v3, v2, a1);
  }
  return 1;
}
