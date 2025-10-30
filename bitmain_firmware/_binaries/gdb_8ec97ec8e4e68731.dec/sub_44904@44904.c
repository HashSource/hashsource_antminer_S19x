int __fastcall sub_44904(int a1, int a2, int a3, int (__fastcall *a4)(int, int), int a5)
{
  int v5; // r4
  int v7; // r5
  _DWORD v9[4]; // [sp+4h] [bp-10h] BYREF

  v5 = dword_472178;
  v9[0] = a1;
  v9[1] = a2;
  v9[2] = a3;
  if ( !dword_472178 )
    return 0;
  while ( 1 )
  {
    v7 = *(_DWORD *)(v5 + 92);
    if ( sub_9904C(v5, v9) )
    {
      if ( a4(v5, a5) )
        break;
    }
    v5 = v7;
    if ( !v7 )
      return 0;
  }
  return v5;
}
