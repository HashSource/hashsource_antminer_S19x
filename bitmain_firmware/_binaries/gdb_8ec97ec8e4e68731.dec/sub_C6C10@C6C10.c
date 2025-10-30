int __fastcall sub_C6C10(unsigned int *a1, unsigned int *a2)
{
  unsigned int v2; // r2
  unsigned int v3; // r3
  unsigned int v4; // r0
  unsigned int v5; // r1
  bool v6; // cf
  _BOOL4 v7; // r0
  int v8; // r3
  int v10; // r0
  int v11; // r1
  bool v12; // zf
  bool v13; // nf
  bool v14; // vf
  int v15; // r0
  _BOOL4 v16; // r3
  unsigned int v17; // r0
  unsigned int v18; // r1
  bool v19; // cf
  bool v20; // zf
  _BOOL4 v21; // r0
  int v22; // r3
  int v23; // r0
  int v24; // r1

  v2 = *a1;
  v3 = *a2;
  v4 = *(_DWORD *)(*a1 + 52);
  v5 = *(_DWORD *)(*a2 + 52);
  v6 = v4 >= v5;
  if ( v4 != v5 )
  {
    v7 = v4 > v5;
    v8 = !v6;
    return v7 - v8;
  }
  v10 = *(_DWORD *)(*(_DWORD *)(v2 + 48) + 4);
  v11 = *(_DWORD *)(*(_DWORD *)(v3 + 48) + 4);
  v14 = __OFSUB__(v10, v11);
  v12 = v10 == v11;
  v13 = v10 - v11 < 0;
  if ( v10 != v11 )
    goto LABEL_7;
  v17 = *(unsigned __int8 *)(v2 + 40);
  v18 = *(unsigned __int8 *)(v3 + 40);
  v19 = v17 >= v18;
  v20 = v17 == v18;
  if ( v17 == v18 )
  {
    v23 = *(_DWORD *)(*(_DWORD *)(v2 + 16) + 24);
    v24 = *(_DWORD *)(*(_DWORD *)(v3 + 16) + 24);
    v14 = __OFSUB__(v23, v24);
    v12 = v23 == v24;
    v13 = v23 - v24 < 0;
    if ( v23 == v24 )
    {
      if ( v2 > v3 )
        return v2 >= v3;
      else
        return -(v2 < v3);
    }
LABEL_7:
    if ( v13 ^ v14 | v12 )
      v15 = 0;
    else
      v15 = 1;
    v16 = v13 != v14;
    return v15 - v16;
  }
  v21 = v17 < v18;
  v22 = !v20 && v19;
  return v21 - v22;
}
