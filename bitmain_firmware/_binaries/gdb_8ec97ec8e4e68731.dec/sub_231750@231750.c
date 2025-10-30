const char *__fastcall sub_231750(int a1, const char *a2, int *a3)
{
  _DWORD *v6; // r0
  int (*v7)(void); // r4
  const char *v8; // r4
  int v10; // r0
  int v11; // r0
  int v12; // r2
  const char *v13; // r3
  int v14; // r12

  if ( dword_489AD8 <= 1 )
    v6 = (_DWORD *)sub_22451C("file I/O");
  else
    v6 = (_DWORD *)dword_4899A0;
  while ( 1 )
  {
    if ( !v6 )
    {
      v8 = 0;
      *a3 = 88;
      return v8;
    }
    v7 = (int (*)(void))v6[123];
    if ( v7 )
      break;
    v6 = (_DWORD *)*v6;
  }
  v10 = v7();
  v8 = (const char *)v10;
  if ( !dword_489C84 )
    return v8;
  v11 = *(_DWORD *)sub_242FC8(v10);
  if ( a1 )
    v12 = *(_DWORD *)(a1 + 8);
  else
    v12 = 0;
  if ( v8 )
  {
    v13 = v8;
    v14 = 0;
  }
  else
  {
    v13 = "(nil)";
    v14 = *a3;
  }
  sub_2594B0(v11, "target_fileio_readlink (%d,%s) = %s (%d)\n", v12, a2, v13, v14);
  return v8;
}
