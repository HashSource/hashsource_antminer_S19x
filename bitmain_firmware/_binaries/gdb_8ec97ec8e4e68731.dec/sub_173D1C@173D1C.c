int __fastcall sub_173D1C(int *a1, _DWORD *a2)
{
  int v2; // r12
  __int16 *v4; // r3
  int v5; // r4
  int v6; // r6
  __int16 *v7; // r12
  __int16 *v8; // r2
  int v9; // r1
  int v10; // lr
  int v11; // r5
  int v12; // r0

  v2 = *a1;
  if ( *a1 != *a2 )
    return 1;
  if ( v2 <= 0 )
    return 0;
  v4 = (__int16 *)a2[1];
  v5 = 0;
  v6 = 0;
  v7 = &v4[2 * v2];
  v8 = (__int16 *)(a1[1] + 2);
  do
  {
    while ( 1 )
    {
      v9 = *v4;
      v10 = *(v8 - 1);
      v11 = v4[1];
      v12 = *v8;
      if ( v10 != v9 )
      {
        if ( v10 <= v9 )
          break;
        goto LABEL_6;
      }
      if ( v11 == v12 )
        goto LABEL_7;
      if ( v11 >= v12 )
        break;
LABEL_6:
      v6 = 1;
LABEL_7:
      v4 += 2;
      v8 += 2;
      if ( v7 == v4 )
        goto LABEL_12;
    }
    v4 += 2;
    v5 = 1;
    v8 += 2;
  }
  while ( v7 != v4 );
LABEL_12:
  if ( !v6 )
    return 2 * v5;
  if ( v5 )
    return 1;
  return 3;
}
