unsigned int __fastcall sub_303B70(_DWORD *a1)
{
  int v1; // r12
  unsigned int v2; // r2
  _WORD *v3; // r1
  unsigned int v4; // t1
  __int16 v5; // lr
  __int16 v6; // r3
  int v7; // r1
  unsigned int result; // r0
  _WORD *v9; // r1
  unsigned int v10; // t1
  __int16 v11; // r12
  __int16 v12; // r3

  v1 = a1[19];
  v2 = a1[11];
  v3 = (_WORD *)(a1[17] + 2 * v1);
  do
  {
    v4 = (unsigned __int16)*--v3;
    v5 = 0;
    v6 = v4 - v2;
    if ( v2 <= v4 )
      v5 = v6;
    --v1;
    *v3 = v5;
  }
  while ( v1 );
  v7 = a1[16];
  result = v2;
  v9 = (_WORD *)(v7 + 2 * v2);
  do
  {
    v10 = (unsigned __int16)*--v9;
    v11 = 0;
    v12 = v10 - v2;
    if ( v2 <= v10 )
      v11 = v12;
    --result;
    *v9 = v11;
  }
  while ( result );
  return result;
}
