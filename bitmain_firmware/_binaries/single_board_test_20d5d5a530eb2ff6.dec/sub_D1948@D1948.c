bool __fastcall sub_D1948(int *a1, int a2, int a3, int a4)
{
  int v4; // r4

  v4 = *a1;
  if ( *a1 && (v4 = *(_DWORD *)(v4 + 44)) != 0 )
    return ((int (*)(void))v4)() > 0;
  else
    return v4;
}
