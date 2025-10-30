int __fastcall sub_BCE34(int **a1, int a2)
{
  int *v2; // r3
  int v4; // r2
  int v5; // r2
  int *v6; // r1
  int v7; // r0
  __int64 v8; // r2
  int v10; // r0
  int v11; // r1
  int v12; // r0
  int v13; // r2
  int v14; // r0
  int v15; // r2
  int v16; // r0

  v2 = *a1;
  v4 = **a1;
  switch ( v4 )
  {
    case '(':
      v11 = v2[8];
      v12 = *(_DWORD *)(v11 + 24);
      v13 = *((_DWORD *)off_46DBB8 + 4 * (*(unsigned __int8 *)(v11 + 32) >> 3));
      if ( v13 == 1 )
      {
        v16 = sub_26DAF4(v12, v11, *(_DWORD *)(v11 + 8), *(_DWORD *)(v11 + 12));
        v2 = *a1;
        v15 = v16;
      }
      else if ( v13 == 9 )
      {
        v14 = sub_26DC9C(v12, *(_DWORD *)(v11 + 8));
        v2 = *a1;
        v15 = v14;
      }
      else
      {
        v15 = 0;
      }
      *a1 = v2 + 16;
      return v15;
    case ':':
      *a1 = v2 + 4;
      v10 = sub_BCE34(a1, a2);
      v5 = v10;
      if ( !v10 )
        return v5;
      return sub_25F2C0(v10);
    case '&':
      v6 = v2 + 16;
      v7 = v2[4];
      v8 = *((_QWORD *)v2 + 4);
      *a1 = v6;
      return sub_26DAF4(v7, v6, v8, HIDWORD(v8));
    default:
      return 0;
  }
}
