void __fastcall sub_1CDDD0(_DWORD *a1, unsigned int a2, int a3, int a4, unsigned int a5, int a6, int a7, int a8)
{
  unsigned __int64 v9; // r4
  _DWORD *v10; // r0
  _DWORD *v11; // r7
  _QWORD *v12; // r3
  int *v13; // r12
  int v14; // r2
  int *v15; // r3
  int v16; // r2
  int v17; // r12
  unsigned int v18; // r1
  unsigned int v19; // r2
  int v20; // r2
  int *v21; // r7

  v9 = __PAIR64__(a5, a4);
  if ( a2 > 1 && (a2 != 2 || *a1 == a3) )
  {
    v15 = sub_1CDD20((int)a1, a4);
    if ( v15 )
    {
      while ( 1 )
      {
        v16 = v15[2];
        v17 = a1[1];
        v18 = (v16 - v9) & v17;
        v19 = (v9 - v16) & v17;
        if ( HIDWORD(v9) <= v18 && v19 >= v15[3] )
          break;
        v20 = *v15;
        v21 = (int *)v15[1];
        if ( v21 == v15 )
        {
          *(_DWORD *)(v20 + 4) = v15;
          *(_DWORD *)v15[1] = v20;
          free(v15);
          goto LABEL_24;
        }
        *(_DWORD *)(v20 + 4) = v21;
        *(_DWORD *)v15[1] = v20;
        free(v15);
        v15 = v21;
        if ( !v21 )
          goto LABEL_24;
      }
    }
    else
    {
LABEL_24:
      v15 = 0;
    }
    a1[2] = v15;
  }
  else
  {
    v10 = (_DWORD *)a1[2];
    if ( v10 )
    {
      do
      {
        v11 = (_DWORD *)v10[1];
        free(v10);
        v10 = v11;
      }
      while ( v11 != (_DWORD *)a1[2] );
      a1[2] = 0;
    }
  }
  if ( a6 )
  {
    v12 = sub_93028(0x1Cu);
    v13 = (int *)a1[2];
    v14 = a8;
    v12[1] = v9;
    if ( !v13 )
      a1[2] = v12;
    *((_DWORD *)v12 + 4) = a6;
    *((_DWORD *)v12 + 5) = a7;
    *((_DWORD *)v12 + 6) = a8;
    if ( v13 )
      v14 = *v13;
    else
      *((_DWORD *)v12 + 1) = v12;
    if ( v13 )
    {
      *(_DWORD *)v12 = v14;
      *((_DWORD *)v12 + 1) = v13;
      *v13 = (int)v12;
      v14 = *(_DWORD *)v12;
    }
    else
    {
      *(_DWORD *)v12 = v12;
    }
    if ( v13 )
      *(_DWORD *)(v14 + 4) = v12;
  }
}
