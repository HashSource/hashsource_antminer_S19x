char *__fastcall sub_135A8C(int ***a1, _BYTE *a2)
{
  _BYTE *v2; // r6
  int v3; // r3
  bool v4; // zf
  int v5; // r5
  _BYTE *v6; // r7
  unsigned int v7; // t1
  int **v8; // r8
  int v9; // r1
  int *v10; // r7
  int v11; // r3
  char *v12; // r10
  int v13; // r11
  char v14; // t1
  int v15; // r0
  int *v16; // r3
  int *v19; // [sp+8h] [bp-Ch]
  char *v20; // [sp+Ch] [bp-8h]

  if ( !a2 )
    return 0;
  v2 = a2;
  v3 = (unsigned __int8)*a2;
  if ( !*a2 )
    return 0;
  v4 = v3 == 45;
  v5 = 0;
  if ( v3 == 45 )
  {
    v2 = a2 + 1;
    v3 = 1;
  }
  v6 = v2 - 1;
  if ( !v4 )
    v3 = 0;
  v19 = (int *)v3;
  while ( 1 )
  {
    v7 = (unsigned __int8)*++v6;
    if ( !sub_BDB10(v7, 16) )
      break;
    if ( ++v5 == 0x20000000 )
      return 0;
  }
  if ( !v5 )
    return 0;
  v20 = (char *)v19 + v5;
  if ( a1 )
  {
    v8 = *a1;
    if ( *a1 )
    {
      sub_B8930(*a1, 0);
    }
    else
    {
      v8 = (int **)sub_B822C();
      if ( !v8 )
        return 0;
    }
    if ( 4 * v5 > 2147483584 || (v9 = (4 * v5 + 63) >> 6, v9 > (int)v8[2]) && !sub_B8838((int)v8, v9) )
    {
      if ( !*a1 )
        sub_B895C((int)v8);
      return 0;
    }
    v10 = 0;
    do
    {
      if ( v5 > 16 )
        v11 = v5 - 16;
      else
        v11 = 0;
      v12 = &v2[v11];
      v13 = 0;
      do
      {
        v14 = *v12++;
        v15 = sub_E9F98(v14);
        v13 = v15 & ~(v15 >> 31) | (16 * v13);
      }
      while ( &v2[v5] != v12 );
      v5 -= 16;
      v10 = (int *)((char *)v10 + 1);
      (*v8)[(_DWORD)v10 + 0x3FFFFFFF] = v13;
    }
    while ( v5 > 0 );
    v8[1] = v10;
    sub_B8ACC(v8);
    v16 = v8[1];
    *a1 = v8;
    if ( v16 )
    {
      v8[3] = v19;
      return v20;
    }
  }
  return v20;
}
