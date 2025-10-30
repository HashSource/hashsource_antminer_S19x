bool __fastcall sub_2CCB88(int a1, int **a2, char *a3, int a4, int a5)
{
  int v9; // r10
  int *v10; // r0
  int *v11; // r4
  unsigned __int8 *v12; // r2
  int v13; // r3
  unsigned __int8 v14; // r1
  _BOOL4 result; // r0

  v9 = *(_DWORD *)(*(_DWORD *)(a1 + 4) + 444);
  if ( *a2 )
    sub_2A6BBC("elf.c", 3074);
  v10 = (int *)sub_2AD09C(a1, 0x38u);
  v11 = v10;
  *a2 = v10;
  if ( a5 )
  {
    *v10 = -1;
  }
  else
  {
    result = sub_2CCB00(a1, v10, a3, a4);
    if ( !result )
      return result;
  }
  v12 = *(unsigned __int8 **)(v9 + 392);
  if ( a4 )
  {
    v11[1] = 4;
    v13 = v12[4];
  }
  else
  {
    v11[1] = 9;
    v13 = v12[3];
  }
  v11[10] = v13;
  v14 = v12[11];
  v11[2] = 0;
  v11[3] = 0;
  v11[6] = 0;
  *((_QWORD *)v11 + 2) = 0;
  v11[9] = 1 << v14;
  return 1;
}
