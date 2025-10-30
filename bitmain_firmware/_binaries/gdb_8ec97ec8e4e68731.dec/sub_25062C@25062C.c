void __fastcall sub_25062C(int a1, int *a2)
{
  int v2; // r3
  bool v3; // zf
  int v4; // r3
  int v5; // r2

  v2 = *(_DWORD *)(a1 + 4);
  if ( v2 == *(_DWORD *)(a1 + 8) )
  {
    sub_2504B4(a1, *(void ***)(a1 + 4), a2);
  }
  else
  {
    v3 = v2 == 0;
    v4 = v2 + 4;
    if ( !v3 )
    {
      v5 = *a2;
      *a2 = 0;
      *(_DWORD *)(v4 - 4) = v5;
    }
    *(_DWORD *)(a1 + 4) = v4;
  }
}
