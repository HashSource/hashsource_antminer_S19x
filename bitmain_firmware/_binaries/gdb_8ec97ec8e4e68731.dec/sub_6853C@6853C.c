int __fastcall sub_6853C(int a1, int a2, int *a3)
{
  _DWORD *v4; // r4
  int v6; // lr
  int v7; // r12
  int v8; // r0
  _DWORD *v9; // r3
  __int64 v10; // r2
  int v12; // r0

  v4 = *(_DWORD **)(a2 + 8);
  if ( v4 )
  {
    v6 = *a3;
    while ( 1 )
    {
      v7 = v4[4];
      v8 = 1;
      if ( v6 >= v7 )
      {
        v8 = 0;
        v9 = (_DWORD *)v4[3];
      }
      else
      {
        v9 = (_DWORD *)v4[2];
      }
      if ( !v9 )
        break;
      v4 = v9;
    }
    if ( !v8 )
    {
      HIDWORD(v10) = v4;
      if ( v6 > v7 )
        goto LABEL_16;
      goto LABEL_13;
    }
  }
  else
  {
    v4 = (_DWORD *)(a2 + 4);
  }
  if ( *(_DWORD **)(a2 + 12) != v4 )
  {
    v12 = sub_33AD54(v4);
    HIDWORD(v10) = v4;
    v4 = (_DWORD *)v12;
    if ( *a3 > *(_DWORD *)(v12 + 16) )
    {
LABEL_16:
      LODWORD(v10) = 0;
      *(_QWORD *)a1 = v10;
      return a1;
    }
LABEL_13:
    *(_DWORD *)a1 = v4;
    *(_DWORD *)(a1 + 4) = 0;
    return a1;
  }
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = v4;
  return a1;
}
