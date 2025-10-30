_DWORD *__fastcall sub_31DA38(int *a1)
{
  int *v1; // r4
  size_t v2; // r0
  int *v3; // r3
  int i; // r0
  int v5; // t1
  _DWORD *v6; // r0
  int v7; // r3
  _DWORD *v8; // r6
  int *v9; // r2
  int *v10; // r5
  int v11; // r0
  int v12; // t1

  v1 = a1;
  if ( !a1 )
    return 0;
  if ( *a1 )
  {
    v3 = a1;
    for ( i = 0; ; ++i )
    {
      v5 = v3[1];
      ++v3;
      if ( !v5 )
        break;
    }
    v2 = 4 * (i + 2);
  }
  else
  {
    v2 = 4;
  }
  v6 = sub_93028(v2);
  v7 = *v1;
  v8 = v6;
  if ( *v1 )
  {
    v10 = v6;
    do
    {
      v11 = sub_327254(v7);
      v12 = v1[1];
      ++v1;
      v7 = v12;
      *v10++ = v11;
    }
    while ( v12 );
    v9 = v10;
  }
  else
  {
    v9 = v6;
  }
  *v9 = 0;
  return v8;
}
