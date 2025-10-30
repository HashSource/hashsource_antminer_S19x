int __fastcall sub_23167C(int a1, int a2, int *a3)
{
  _DWORD *v6; // r0
  int (*v7)(void); // r4
  int v8; // r4
  int v10; // r0
  int *v11; // r0
  int v12; // r2
  int v13; // r0
  int v14; // r3

  if ( dword_489AD8 <= 1 )
    v6 = (_DWORD *)sub_22451C("file I/O");
  else
    v6 = (_DWORD *)dword_4899A0;
  while ( 1 )
  {
    if ( !v6 )
    {
      v8 = -1;
      *a3 = 88;
      return v8;
    }
    v7 = (int (*)(void))v6[122];
    if ( v7 )
      break;
    v6 = (_DWORD *)*v6;
  }
  v10 = v7();
  v8 = v10;
  if ( !dword_489C84 )
    return v8;
  v11 = (int *)sub_242FC8(v10);
  if ( a1 )
    v12 = *(_DWORD *)(a1 + 8);
  else
    v12 = 0;
  v13 = *v11;
  if ( v8 == -1 )
    v14 = *a3;
  else
    v14 = 0;
  sub_2594B0(v13, "target_fileio_unlink (%d,%s) = %d (%d)\n", v12, a2, v8, v14);
  return v8;
}
