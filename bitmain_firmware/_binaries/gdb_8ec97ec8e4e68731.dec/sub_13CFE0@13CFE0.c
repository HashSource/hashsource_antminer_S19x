void __fastcall sub_13CFE0(int a1, _DWORD *a2, int *a3, _DWORD *a4, int a5)
{
  int v6; // r0
  int i; // r4
  int v11; // r1

  v6 = a2[8];
  if ( v6 > 0 )
  {
    for ( i = 0; i < v6; ++i )
    {
      v11 = *(_DWORD *)(a2[7] + 4 * i);
      if ( *(_DWORD *)(v11 + 24) )
      {
        sub_13CFE0(a1, v11, a3, a4, a5);
        v6 = a2[8];
      }
    }
  }
  sub_13CB0C(a3, a4, (_DWORD *)(*(_DWORD *)(a1 + 108) + 4 * a2[9]), a2[10], a5, 0);
  sub_13CB0C(a3, a4, (_DWORD *)(*(_DWORD *)(a1 + 120) + 4 * a2[11]), a2[12], a5, 1);
}
