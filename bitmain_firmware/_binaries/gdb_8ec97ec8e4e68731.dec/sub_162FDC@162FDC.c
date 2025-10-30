int __fastcall sub_162FDC(int a1, int a2)
{
  if ( !a2 )
    return -1;
  if ( (char **)a2 == &off_470800 )
    return *(_DWORD *)(a1 + 108);
  if ( (char **)a2 == &off_4708A8 )
    return *(_DWORD *)(a1 + 108) + 1;
  if ( (char **)a2 == &off_470950 )
    return *(_DWORD *)(a1 + 108) + 2;
  if ( (char **)a2 == &off_4709F8 )
    return *(_DWORD *)(a1 + 108) + 3;
  return *(_DWORD *)(a2 + 8);
}
