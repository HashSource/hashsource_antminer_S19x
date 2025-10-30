int __fastcall sub_6BBAC(int a1, char *a2)
{
  char *v2; // r6
  int v3; // r3
  int v5; // r4
  int v6; // r0
  int v7; // t1
  int v8; // r1
  int result; // r0

  v2 = a2;
  v3 = (unsigned __int8)*a2;
  if ( *a2 )
  {
    v5 = 5381;
    do
    {
      v6 = v3 + 32 * v5;
      v7 = (unsigned __int8)*++a2;
      v3 = v7;
      v5 += v6;
    }
    while ( v7 );
  }
  else
  {
    v5 = 5381;
  }
  sub_772CC(v5, dword_8A954[*(_DWORD *)(a1 + 8)]);
  result = sub_6B7C4(a1, (int *)(*(_DWORD *)(a1 + 4) + 8 * v8), v2, v5);
  if ( result )
    return *(_DWORD *)(result + 12);
  return result;
}
