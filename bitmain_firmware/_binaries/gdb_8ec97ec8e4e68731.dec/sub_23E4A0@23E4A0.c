int __fastcall sub_23E4A0(int (__fastcall *a1)(int, int), int a2)
{
  int v2; // r4
  int v5; // r5

  v2 = dword_48A4D4;
  if ( !dword_48A4D4 )
    return 0;
  while ( 1 )
  {
    v5 = *(_DWORD *)(v2 + 4);
    if ( a1(v2, a2) )
      break;
    v2 = v5;
    if ( !v5 )
      return 0;
  }
  return v2;
}
