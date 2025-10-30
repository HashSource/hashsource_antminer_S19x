int __fastcall sub_6F69C(int a1)
{
  FILE *v1; // r2

  v1 = *(FILE **)(a1 + 168);
  if ( v1 && fgets((char *)(a1 + 172), 63, v1) )
  {
    *(_DWORD *)(a1 + 236) = 0;
    return 0;
  }
  else
  {
    *(_DWORD *)(a1 + 236) = 29;
    return 29;
  }
}
