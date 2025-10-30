int __fastcall sub_D2260(int (__fastcall *a1)(int, int), int a2)
{
  int v2; // r4
  int v5; // r5

  v2 = dword_478348;
  if ( !dword_478348 )
    return 0;
  while ( 1 )
  {
    v5 = *(_DWORD *)(v2 + 8);
    if ( a1(v2, a2) )
      break;
    v2 = v5;
    if ( !v5 )
      return 0;
  }
  return v2;
}
