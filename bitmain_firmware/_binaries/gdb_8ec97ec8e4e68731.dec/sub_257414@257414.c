int __fastcall sub_257414(_DWORD *a1, int *a2, _DWORD *a3, int *a4)
{
  _DWORD *v4; // r4
  int v5; // r12
  int v6; // lr
  int v10; // r9
  int result; // r0
  int v12; // r2
  int **v13; // r0
  int *v14; // r2
  _DWORD **v15; // r3
  int v16; // r1
  int v17; // r1
  int v18; // r2
  __int64 v19; // r0
  int v20; // r2

  v4 = (_DWORD *)a1[5];
  v5 = a1[3];
  v6 = *(_DWORD *)(v5 - 4);
  if ( !v4 )
  {
    ++*(_DWORD *)(v6 + 4);
    goto LABEL_4;
  }
  if ( *v4 != 1 )
    goto LABEL_9;
  v10 = a1[2];
  ++*(_DWORD *)(v6 + 4);
  if ( v4[1] != (v5 - v10) >> 2 || (v13 = (int **)v4[12], (int **)v4[10] == v13) )
  {
LABEL_4:
    *a3 = 0;
    v12 = *(_DWORD *)(v6 + 4);
    *a4 = 2;
    *a2 = v12;
    return 2;
  }
  v15 = v13 + 1;
  v14 = *v13;
  v16 = **v13;
  result = (*v13)[2];
  *a2 = v16;
  *a3 = v14[1];
  v17 = *a2;
  v18 = *(_DWORD *)(v6 + 4);
  *a4 = result;
  v4[12] = v15;
  if ( v17 == v18 )
    return result;
  sub_94700((int)"ui-out.c", 653, "ui-out internal error in handling headers.");
LABEL_9:
  v19 = sub_94700(
          (int)"ui-out.c",
          640,
          "table_body missing; table fields must be specified after table_body and inside a list.");
  return sub_257504(v19, HIDWORD(v19), v20);
}
