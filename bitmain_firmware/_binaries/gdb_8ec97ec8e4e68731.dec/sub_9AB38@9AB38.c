_QWORD *__fastcall sub_9AB38(__int64 a1, __int64 a2, _QWORD *a3, int *a4, int a5)
{
  __int64 v5; // r8
  _QWORD *v6; // r6
  int v7; // r1
  __int64 v8; // r4
  _QWORD *v9; // r12
  __int64 v10; // r10
  _QWORD *v11; // lr
  bool v12; // cc
  int v13; // r1
  int v14; // r2
  __int64 v15; // t1
  _QWORD *result; // r0
  int v17; // r11
  int v18; // r6
  _QWORD *v19; // r11
  size_t v20; // r2
  __int64 v21; // r4
  _QWORD *src; // [sp+0h] [bp-24h]
  __int64 v24; // [sp+10h] [bp-14h]
  int v25; // [sp+18h] [bp-Ch]
  int v26; // [sp+1Ch] [bp-8h]

  v5 = a2;
  HIDWORD(a2) = *a4;
  if ( *a4 <= 0 || (v24 = *a3, __SPAIR64__(HIDWORD(v5), a2) < *a3) )
  {
    v7 = 0;
LABEL_10:
    if ( HIDWORD(a2) == a5 )
      sub_946E0("Internal error: miscounted aggregate components.");
    v12 = SHIDWORD(a2) <= v7;
    v13 = v7;
    v14 = HIDWORD(a2) + 2;
    if ( !v12 )
      HIDWORD(a2) = &a3[HIDWORD(a2)];
    *a4 = v14;
    if ( !v12 )
    {
      do
      {
        v15 = *(_QWORD *)(HIDWORD(a2) - 8);
        HIDWORD(a2) -= 8;
        *(_QWORD *)(HIDWORD(a2) + 16) = v15;
      }
      while ( &a3[v13] != (_QWORD *)HIDWORD(a2) );
    }
    a3[v13] = a1;
    a3[v13 + 1] = v5;
    return &a3[v13];
  }
  if ( a3[1] < a1 )
  {
    LODWORD(a2) = 0;
    v6 = a3;
    v7 = 2;
    if ( SHIDWORD(a2) > 2 )
    {
      while ( 1 )
      {
        v8 = v6[2];
        v9 = v6 + 2;
        if ( v5 < v8 )
          break;
        v10 = v6[3];
        v11 = v6 + 3;
        v6 += 2;
        if ( v10 >= a1 )
        {
          LODWORD(a2) = a2 + 4;
          v17 = a2;
          v24 = v8;
          v18 = a2;
          v25 = v7 + 2;
          goto LABEL_19;
        }
        LODWORD(a2) = v7;
        v7 += 2;
        if ( SHIDWORD(a2) <= v7 )
          goto LABEL_10;
      }
    }
    goto LABEL_10;
  }
  LODWORD(a2) = 2;
  v25 = 2;
  v17 = 2;
  v18 = 2;
  v11 = a3 + 1;
  v9 = a3;
  v7 = 0;
LABEL_19:
  src = &a3[v17];
  if ( SHIDWORD(a2) <= (int)a2 || v5 < a3[v17] )
  {
    v26 = 0;
  }
  else
  {
    v19 = &a3[a2];
    do
    {
      LODWORD(a2) = a2 + 2;
      v19 += 2;
      v18 = a2;
    }
    while ( (int)a2 < SHIDWORD(a2) && v5 >= *v19 );
    src = v19;
    v26 = a2 - v7 - 2;
  }
  if ( a1 < v24 )
    *v9 = a1;
  v20 = HIDWORD(a2) - a2;
  v21 = a3[v18 - 1];
  if ( v21 < v5 )
    v21 = v5;
  *v11 = v21;
  result = memcpy(&a3[v25], src, v20);
  *a4 -= v26;
  return result;
}
