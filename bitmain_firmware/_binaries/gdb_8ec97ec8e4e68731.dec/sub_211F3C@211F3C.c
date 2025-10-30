_DWORD *__fastcall sub_211F3C(int a1)
{
  _DWORD *result; // r0
  int v3; // lr
  int v4; // r4
  _DWORD *v5; // r3
  int v6; // r1
  int v7; // r12
  int v8; // r2

  result = sub_211DE4(*(_DWORD *)(a1 + 36));
  v3 = *result;
  if ( *result )
  {
    v4 = *(_DWORD *)(a1 + 144);
    v5 = result;
    v6 = 0;
    do
    {
      v7 = v5[3];
      ++v6;
      v8 = v5[1];
      v5 += 3;
      *(v5 - 2) = v8 + *(_DWORD *)(v4 + 4 * v7);
    }
    while ( v3 != v6 );
  }
  return result;
}
