int __fastcall sub_15A1F0(unsigned int a1, unsigned int a2, char **a3, int a4, int a5)
{
  char *v6; // lr
  unsigned int v7; // r6
  char *v8; // r0
  unsigned int v9; // r7
  bool v10; // cf
  unsigned int v11; // r3
  int v12; // r12
  int result; // r0
  int v14; // r12
  unsigned int v15; // r3
  char *v16; // r9
  size_t v17; // r5
  char *v18; // r10
  char *v19; // r5
  char *v20; // r12
  char *v21; // r3
  char v22; // r5
  char v23; // t1
  char *v25; // r5
  char *v26; // r0
  char **v27; // [sp+0h] [bp-Ch]
  char **v28; // [sp+0h] [bp-Ch]
  unsigned int v29; // [sp+4h] [bp-8h]
  unsigned int v30; // [sp+4h] [bp-8h]

  v6 = *a3;
  v7 = a4 >> 3;
  v8 = a3[1];
  v9 = v8 - *a3;
  v10 = __CFADD__(a4 >> 3, v9);
  v11 = (a4 >> 3) + v9;
  v12 = v10;
  if ( v11 <= v9 )
  {
    if ( v12 )
      a3[1] = &v6[v11];
    goto LABEL_7;
  }
  if ( v7 <= a3[2] - v8 )
  {
    a3[1] = &v8[v7];
    goto LABEL_7;
  }
  if ( v7 > ~v9 )
    sub_33D184("vector::_M_default_append");
  if ( v7 < v9 )
    v15 = v8 - *a3;
  else
    v15 = v7;
  v16 = (char *)(v9 + v15);
  v17 = v9 + v15;
  if ( __CFADD__(v9, v15) )
  {
    v17 = -1;
LABEL_35:
    v30 = a2;
    v28 = a3;
    v26 = (char *)sub_9836C(v17);
    a3 = v28;
    v18 = v26;
    v16 = &v26[v17];
    a2 = v30;
    v6 = *v28;
    v8 = v28[1];
    goto LABEL_24;
  }
  if ( v16 )
    goto LABEL_35;
  v18 = 0;
LABEL_24:
  if ( v8 == v6 )
  {
    v19 = v18;
  }
  else
  {
    v20 = v6 - 1;
    v21 = v18;
    do
    {
      v23 = *++v20;
      v22 = v23;
      if ( v21++ != 0 )
        *(v21 - 1) = v22;
    }
    while ( &v18[v8 - v6] != v21 );
    v19 = &v18[v8 - v6];
  }
  v25 = &v19[v7];
  if ( v6 )
  {
    v29 = a2;
    v27 = a3;
    sub_339E64(v6);
    a2 = v29;
    a3 = v27;
  }
  *a3 = v18;
  v6 = v18;
  a3[1] = v25;
  a3[2] = v16;
LABEL_7:
  result = 0;
  while ( 1 )
  {
    v14 = a5 ? v7 - 1 - result : result;
    ++result;
    v6[v14 + v9] = a1;
    a1 = (a1 >> 8) | (a2 << 24);
    a2 >>= 8;
    if ( v7 == result )
      break;
    v6 = *a3;
  }
  return result;
}
