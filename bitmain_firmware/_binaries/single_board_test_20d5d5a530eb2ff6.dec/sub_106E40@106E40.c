int __fastcall sub_106E40(int a1, int a2, int *a3)
{
  int v5; // r4
  int v6; // r0

  v5 = *(_DWORD *)(a1 + 20) + 16;
  v6 = sub_167D74(v5);
  *a3 = v6;
  if ( a2 )
    return sub_168148(v5, a2, v6);
  else
    return 1;
}
