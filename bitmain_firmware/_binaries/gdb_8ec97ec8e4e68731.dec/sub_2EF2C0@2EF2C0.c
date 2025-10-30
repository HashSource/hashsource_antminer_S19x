size_t __fastcall sub_2EF2C0(int a1, int a2)
{
  const char *v3; // r8
  size_t result; // r0
  int v5; // r9
  int v6; // r5
  int v7; // r6
  _DWORD *v8; // r4
  bool v9; // zf
  unsigned int v10; // r0
  _DWORD *i; // r4
  int v12; // r1
  _BOOL4 v13; // r7

  if ( a2 )
  {
    v3 = "gnu";
  }
  else
  {
    v3 = *(const char **)(*(_DWORD *)(*(_DWORD *)(a1 + 4) + 444) + 408);
    if ( !v3 )
      return 0;
  }
  v5 = *(_DWORD *)(a1 + 160);
  v6 = 2;
  v7 = 0;
  v8 = (_DWORD *)(v5 + 852 * a2 + 620);
  do
  {
    v9 = !sub_2EF0BC(v8);
    v10 = v6++;
    if ( v9 )
      v7 += sub_2EF10C(v10, (int)v8);
    v8 += 3;
  }
  while ( v6 != 71 );
  for ( i = *(_DWORD **)(v5 + 4 * a2 + 2300); i; i = (_DWORD *)*i )
  {
    if ( !sub_2EF0BC(i + 2) )
      v7 += sub_2EF10C(i[1], v12);
  }
  v13 = a2 == 0;
  if ( v7 )
    result = 1;
  else
    result = v13;
  if ( result )
    return v7 + 10 + strlen(v3);
  return result;
}
