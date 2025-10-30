int __fastcall sub_EBCAC(int a1, _DWORD *a2, _DWORD *a3)
{
  int v3; // r3

  v3 = *(_DWORD *)(a1 + 4);
  if ( v3 )
  {
    if ( v3 == 1 )
    {
      *a2 = *(_DWORD *)(a1 + 8);
      *a3 = 0;
      return 1;
    }
    else
    {
      return 0;
    }
  }
  else
  {
    *a3 = *(_DWORD *)(a1 + 8);
    *a2 = 0;
    return 1;
  }
}
