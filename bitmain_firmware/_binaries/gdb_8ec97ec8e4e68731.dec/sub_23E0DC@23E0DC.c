_DWORD *__fastcall sub_23E0DC(_DWORD *a1)
{
  void *v2; // r0
  _DWORD *v3; // r4
  _DWORD *v4; // r5
  void *v5; // r0
  int v6; // r0

  v2 = (void *)a1[8];
  if ( v2 )
    free(v2);
  v3 = (_DWORD *)a1[69];
  v4 = (_DWORD *)a1[70];
  if ( v3 != v4 )
  {
    do
    {
      v5 = (void *)v3[5];
      v3 += 13;
      if ( v5 )
        sub_339E64(v5);
    }
    while ( v4 != v3 );
    v4 = (_DWORD *)a1[69];
  }
  if ( v4 )
    sub_339E64(v4);
  v6 = a1[62];
  if ( v6 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 4))(v6);
  return a1;
}
