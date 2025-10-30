void __fastcall sub_250D7C(int *a1, int a2, int a3)
{
  int v3; // r3
  int v5; // r2
  __int64 v6; // r4

  v3 = 16 * a3;
  v5 = *(_DWORD *)(a2 + 16 * a3 + 8);
  if ( v5 < 0 )
  {
    if ( v5 == -1 )
      sub_160FC0(a1, a3, *(_DWORD *)(v3 + a2), *(_DWORD *)(v3 + a2 + 4));
    else
      sub_160EE0(a1, a3);
  }
  else
  {
    v6 = *(_QWORD *)(a2 + v3);
    if ( v6 == -1 )
      sub_160F84();
    else
      sub_160F8C(a1, a3, v6);
  }
}
