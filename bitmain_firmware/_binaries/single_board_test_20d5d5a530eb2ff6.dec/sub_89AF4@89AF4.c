char *__fastcall sub_89AF4(int a1, char *a2, int a3)
{
  int v3; // r7
  signed int v4; // r8
  bool v5; // cc
  int v6; // r5
  int v7; // r1
  int v8; // r2
  int v9; // r9
  int v10; // r1
  int v11; // r2
  int v12; // r1
  int v13; // r2
  char *v14; // r6
  int v15; // r1
  int v16; // r4
  const char *v17; // r11
  signed int v18; // r4
  int v19; // r3
  char *v20; // r4
  char *result; // r0
  bool v22; // zf
  char *v23; // r6

  if ( !*(_DWORD *)(a1 + 28) )
    return 0;
  v3 = *(_DWORD *)(a1 + 184);
  v4 = a3;
  v5 = v3 <= 0;
  if ( v3 )
    v5 = a3 <= 1;
  v6 = v5;
  if ( v5 )
    return 0;
  v9 = sub_89910(a1);
  if ( !v9 || !sub_10C010(v3, v7, v8) || !sub_10C010(v9, v10, v11) )
    return 0;
  v14 = a2;
  while ( 1 )
  {
    do
    {
      v5 = v6 < sub_10C010(v3, v12, v13);
      v15 = v6++;
      if ( !v5 )
      {
        *(v14 - 1) = 0;
        return a2;
      }
      v16 = sub_10C01C(v3, v15);
    }
    while ( sub_10BC4C(v9, v16) < 0 );
    v17 = *(const char **)(v16 + 4);
    v18 = strlen(v17);
    result = v14;
    if ( v4 <= v18 )
      break;
    memcpy(v14, v17, v18);
    v19 = v18 + 1;
    v20 = &v14[v18];
    v4 -= v19;
    v14 += v19;
    *v20 = 58;
  }
  v22 = v14 == a2;
  if ( v14 == a2 )
  {
    v23 = a2;
  }
  else
  {
    result = a2;
    v23 = v14 - 1;
  }
  if ( v22 )
    result = v23;
  *v23 = 0;
  return result;
}
