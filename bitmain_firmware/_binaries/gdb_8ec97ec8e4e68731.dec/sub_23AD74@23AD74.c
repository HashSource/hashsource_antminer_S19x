void __fastcall sub_23AD74(_DWORD *a1)
{
  int v1; // r12
  bool v2; // zf
  int v3; // r12

  v1 = a1[1];
  if ( v1 == a1[2] )
  {
    sub_23AC54(a1, a1[1]);
  }
  else
  {
    v2 = v1 == 0;
    v3 = v1 + 8;
    if ( !v2 )
    {
      *(_DWORD *)(v3 - 8) = 0;
      *(_DWORD *)(v3 - 4) = 0;
    }
    a1[1] = v3;
  }
}
