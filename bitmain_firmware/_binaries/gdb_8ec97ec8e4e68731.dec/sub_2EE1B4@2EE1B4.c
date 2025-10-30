int __fastcall sub_2EE1B4(int a1, int a2, int a3, unsigned int a4)
{
  unsigned int *v6; // r2
  char v7; // r7
  char *v8; // r9
  int v9; // r2
  unsigned int v10; // r3
  unsigned int v11; // r5
  char *v12; // r9
  int v13; // r0
  unsigned int *v14; // r3

  v6 = *(unsigned int **)(a3 + 68);
  v7 = *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 4) + 444) + 392) + 11);
  if ( !v6 )
  {
    v6 = (unsigned int *)sub_2AD09C(a1, 0xCu);
    *(_DWORD *)(a3 + 68) = v6;
    if ( !v6 )
      return 0;
  }
  v8 = (char *)v6[1];
  if ( *v6 > a4 )
  {
LABEL_9:
    *(_DWORD *)&v8[4 * (a4 >> v7)] = 1;
    return 1;
  }
  v9 = 1 << v7;
  if ( *(_BYTE *)(a3 + 12) == 1 || (v10 = *(_DWORD *)(a3 + 44), a4 >= v10) )
    v10 = a4 + v9;
  v11 = (v9 - 1 + v10) & -v9;
  if ( v8 )
  {
    v12 = (char *)sub_2AB3FC(v8 - 4, 4 * ((v11 >> v7) + 1));
    if ( v12 )
    {
      v13 = 4 * ((**(_DWORD **)(a3 + 68) >> v7) + 1);
      memset(&v12[v13], 0, 4 * ((v11 >> v7) + 1) - v13);
LABEL_8:
      v14 = *(unsigned int **)(a3 + 68);
      v8 = v12 + 4;
      *v14 = v11;
      v14[1] = (unsigned int)v8;
      goto LABEL_9;
    }
  }
  else
  {
    v12 = (char *)sub_2AB4EC(4 * ((v11 >> v7) + 1));
    if ( v12 )
      goto LABEL_8;
  }
  return 0;
}
