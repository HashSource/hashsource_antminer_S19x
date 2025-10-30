int __fastcall sub_30CE10(_DWORD *a1)
{
  int v1; // r3
  int v2; // r1
  void *v4; // r0
  _DWORD *v5; // r0
  _DWORD *v6; // r2
  _DWORD *v8; // r0
  int v9; // r0

  v1 = a1[5];
  v2 = a1[7];
  if ( v1 < v2 )
  {
    v6 = (_DWORD *)a1[3];
    goto LABEL_5;
  }
  if ( !v2 )
  {
    a1[7] = 5;
    v8 = sub_93028(0x14u);
    v1 = a1[5];
    v6 = v8;
    a1[3] = v8;
    goto LABEL_5;
  }
  if ( v2 <= 0x3FFFFFFF )
  {
    v4 = (void *)a1[3];
    a1[7] = 2 * v2;
    v5 = sub_93050(v4, 8 * v2);
    v1 = a1[5];
    v6 = v5;
    a1[3] = v5;
LABEL_5:
    a1[5] = v1 + 1;
    v6[v1] = 0;
    return v1;
  }
  v9 = sub_930D8(0x7FFFFFFF);
  return sub_30CEA0(v9);
}
