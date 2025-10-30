bool __fastcall sub_174FF4(int a1, _DWORD *a2, int *a3, int ***a4)
{
  int **v6; // r1
  int **v7; // r0
  int *v8; // r8
  int v9; // r3
  int v10; // r9
  int v11; // r10
  _DWORD *v12; // r12
  unsigned int v13; // t1
  _BOOL4 v14; // r4

  sub_130BC0((int)a4);
  v7 = sub_130CCC(a4, v6);
  if ( v7 && (v8 = (int *)v7, sub_B89D8((int)v7, 2 * a2[1])) )
  {
    v9 = a2[1];
    v10 = v9 - 1;
    if ( v9 - 1 >= 0 )
    {
      v11 = *a2 + 4 * v9;
      v12 = (_DWORD *)(8 * v10 - 28 + *v8);
      do
      {
        v12[8] = 0;
        --v10;
        v13 = *(_DWORD *)(v11 - 4);
        v11 -= 4;
        __pld(v12);
        v12 -= 2;
        v12[9] = (4 * (v13 & 4))
               | (8 * (v13 & 8))
               | v13 & 1
               | (2 * (v13 & 2))
               | (((4 * ((v13 >> 12) & 4)) | (8 * ((v13 >> 12) & 8)) | ((v13 & 0x1000) != 0) | (2 * ((v13 >> 12) & 2))) << 24)
               | ((BYTE1(v13) & 1 | (4 * (BYTE1(v13) & 4)) | (8 * (BYTE1(v13) & 8)) | (2 * (BYTE1(v13) & 2))) << 16)
               | (((4 * ((v13 >> 4) & 4)) | (8 * ((v13 >> 4) & 8)) | ((v13 & 0x10) != 0) | (2 * ((v13 >> 4) & 2))) << 8);
      }
      while ( v10 != -1 );
    }
    v8[1] = 2 * v9;
    sub_B8ACC(v8);
    v14 = sub_174D98(a1, v8, a3) != 0;
    sub_130C74(a4);
    return v14;
  }
  else
  {
    sub_130C74(a4);
    return 0;
  }
}
