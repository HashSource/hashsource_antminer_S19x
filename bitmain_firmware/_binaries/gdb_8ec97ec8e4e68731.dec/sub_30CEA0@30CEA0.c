void *__fastcall sub_30CEA0(_DWORD *a1, const void *a2, size_t a3)
{
  int v6; // r1
  void *v7; // r0
  void *v8; // r6
  void *result; // r0
  int v10; // r3
  int v11; // r2
  int v12; // r0

  v6 = a1[6];
  if ( a1[4] < v6 )
    goto LABEL_5;
  if ( !v6 )
  {
    a1[6] = 5;
    a1[2] = sub_93028(0x14u);
    goto LABEL_5;
  }
  if ( v6 <= 0x3FFFFFFF )
  {
    v7 = (void *)a1[2];
    a1[6] = 2 * v6;
    a1[2] = sub_93050(v7, 8 * v6);
LABEL_5:
    v8 = sub_93028(a3 + 1);
    result = memcpy(v8, a2, a3);
    v10 = a1[4];
    v11 = a1[2];
    *((_BYTE *)v8 + a3) = 0;
    a1[4] = v10 + 1;
    *(_DWORD *)(v11 + 4 * v10) = v8;
    return result;
  }
  v12 = sub_930D8(0x7FFFFFFF);
  return (void *)sub_30CF40(v12);
}
