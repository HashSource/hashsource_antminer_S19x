bool __fastcall sub_330EC4(int *a1, int a2)
{
  int v2; // r2

  if ( (a1[2] & 0x70) != 0 )
    return 0;
  v2 = *a1;
  return (*((_WORD *)a1 + 5) || v2 != 1) && v2 + a1[1] > *(_DWORD *)(a2 + 8);
}
