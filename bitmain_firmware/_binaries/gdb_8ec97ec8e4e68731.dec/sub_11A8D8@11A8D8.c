int __fastcall sub_11A8D8(int a1, _DWORD *a2, _DWORD *a3)
{
  int v4; // r5
  int v6; // r6
  int v7; // r7
  _DWORD *v8; // r4
  _DWORD *v9; // r11
  int v10; // r10
  _DWORD *v11; // r3
  _DWORD *v13; // r0
  int v14; // lr

  v4 = *a3;
  v6 = a2[1];
  v7 = (unsigned __int64)sub_347674(*a3, v6) >> 32;
  v8 = *(_DWORD **)(*a2 + 4 * v7);
  if ( !v8 )
    goto LABEL_8;
  v9 = (_DWORD *)*v8;
  v10 = *(_DWORD *)(*v8 + 4);
  while ( v4 != v10 )
  {
    v11 = (_DWORD *)*v9;
    v8 = v9;
    v9 = (_DWORD *)*v9;
    if ( v9 )
    {
      v10 = v11[1];
      if ( v7 == (unsigned __int64)sub_347674(v10, v6) >> 32 )
        continue;
    }
    goto LABEL_8;
  }
  if ( *v8 )
  {
    *(_DWORD *)a1 = *v8;
    *(_BYTE *)(a1 + 4) = 0;
    return a1;
  }
  else
  {
LABEL_8:
    v13 = sub_9836C(8u);
    v14 = *a3;
    *v13 = 0;
    v13[1] = v14;
    *(_DWORD *)a1 = sub_11C0A0(a2, v7, v4, v13);
    *(_BYTE *)(a1 + 4) = 1;
    return a1;
  }
}
