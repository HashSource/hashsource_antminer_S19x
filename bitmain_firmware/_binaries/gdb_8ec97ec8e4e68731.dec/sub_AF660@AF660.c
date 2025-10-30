void __fastcall sub_AF660(char **a1, unsigned int a2)
{
  unsigned int v2; // r5
  __int64 v3; // r2
  char *v5; // r0
  unsigned int v6; // r3
  bool v7; // cf
  size_t v8; // r3
  size_t v9; // r7
  char *v10; // r7
  char *v11; // r8
  char *v12; // r4
  char *v13; // r1
  char v14; // r12
  char v15; // t1
  char *v17; // r4

  v2 = a2;
  if ( !a2 )
    return;
  v3 = *(_QWORD *)(a1 + 1);
  if ( HIDWORD(v3) - (int)v3 >= a2 )
  {
    a1[1] = (char *)(v3 + a2);
    return;
  }
  v5 = *a1;
  v6 = v3 - (_DWORD)v5;
  if ( a2 > ~((int)v3 - (int)v5) )
    sub_33D184("vector::_M_default_append");
  if ( a2 < v6 )
    a2 = v3 - (_DWORD)v5;
  v7 = __CFADD__(v6, a2);
  v8 = v6 + a2;
  v9 = v8;
  if ( v7 )
  {
    v9 = -1;
LABEL_22:
    v11 = (char *)sub_9836C(v9);
    v10 = &v11[v9];
    v5 = *a1;
    LODWORD(v3) = a1[1];
    goto LABEL_11;
  }
  if ( v8 )
    goto LABEL_22;
  v10 = 0;
  v11 = 0;
LABEL_11:
  if ( (char *)v3 == v5 )
  {
    v12 = v11;
  }
  else
  {
    v13 = v5 - 1;
    HIDWORD(v3) = v11;
    do
    {
      v15 = *++v13;
      v14 = v15;
      if ( HIDWORD(v3)++ != 0 )
        *(_BYTE *)(HIDWORD(v3) - 1) = v14;
    }
    while ( (char *)HIDWORD(v3) != &v11[(_DWORD)v3 - (_DWORD)v5] );
    v12 = &v11[v3 - (_DWORD)v5];
  }
  v17 = &v12[v2];
  if ( v5 )
    sub_339E64(v5);
  *a1 = v11;
  a1[1] = v17;
  a1[2] = v10;
}
