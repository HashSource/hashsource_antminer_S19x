int __fastcall sub_1D2988(int a1, _DWORD *a2, unsigned int *a3)
{
  _DWORD *v4; // r0
  _DWORD *v7; // r9
  unsigned int v8; // r4
  unsigned int v9; // r12
  int v10; // lr
  _DWORD *v11; // r1
  _DWORD *v12; // r7
  _BOOL4 v14; // r10
  _DWORD *v15; // r4
  int v16; // r3

  v4 = (_DWORD *)a2[2];
  v7 = a2 + 1;
  if ( v4 )
  {
    v8 = *a3;
    while ( 1 )
    {
      v9 = v4[4];
      v10 = 1;
      if ( v8 >= v9 )
      {
        v10 = 0;
        v11 = (_DWORD *)v4[3];
      }
      else
      {
        v11 = (_DWORD *)v4[2];
      }
      if ( !v11 )
        break;
      v4 = v11;
    }
    if ( !v10 )
    {
      v12 = v4;
      if ( v8 <= v9 )
        goto LABEL_12;
LABEL_16:
      if ( v12 )
        goto LABEL_17;
      v4 = 0;
LABEL_12:
      *(_DWORD *)a1 = v4;
      *(_BYTE *)(a1 + 4) = 0;
      return a1;
    }
  }
  else
  {
    v4 = a2 + 1;
  }
  v12 = (_DWORD *)a2[3];
  if ( v12 != v4 )
  {
    v12 = v4;
    v4 = (_DWORD *)sub_33AD54(v4);
    if ( *a3 <= v4[4] )
      goto LABEL_12;
    goto LABEL_16;
  }
LABEL_17:
  v14 = v7 == v12 || *a3 < v12[4];
  v15 = sub_9836C(0x14u);
  v15[4] = *a3;
  sub_33ADB4(v14, v15, v12, v7);
  v16 = a2[5];
  *(_DWORD *)a1 = v15;
  *(_BYTE *)(a1 + 4) = 1;
  a2[5] = v16 + 1;
  return a1;
}
