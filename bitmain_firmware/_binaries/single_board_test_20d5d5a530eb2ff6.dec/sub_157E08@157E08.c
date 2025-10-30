int ***__fastcall sub_157E08(_DWORD *a1, _DWORD *a2, int a3, int a4, int ***a5)
{
  int ***v5; // r4
  void **v8; // r9
  int **v9; // r1
  int **v10; // r11
  int **v11; // r1
  int **v12; // r6
  int **v13; // r1
  int **v14; // r1
  int **v15; // r8
  _BOOL4 v16; // r5
  int ***result; // r0
  unsigned int v18; // r0
  int v19; // r10
  int v20; // r3
  int **v21; // [sp+Ch] [bp-10h]

  v5 = a5;
  v8 = 0;
  sub_D00F0();
  if ( a5 )
  {
LABEL_2:
    sub_130BC0((int)v5);
    v10 = sub_130CCC(v5, v9);
    v12 = sub_130CCC(v5, v11);
    v21 = sub_130CCC(v5, v13);
    v15 = sub_130CCC(v5, v14);
    if ( !v15 || !sub_174D98(v12, a3, a1 + 11) )
      goto LABEL_4;
    if ( sub_B85B0((int)v12) )
    {
      if ( sub_175740(v21, a1[18], a1 + 11, v5) )
        goto LABEL_8;
    }
    else if ( (*(int (__fastcall **)(_DWORD *, int **, int **, int ***))(*a1 + 140))(a1, v10, v12, v5)
           && (*(int (__fastcall **)(_DWORD *, int **, _DWORD, int **, int ***))(*a1 + 144))(a1, v10, a1[18], v10, v5)
           && sub_174BC8(v10, a1[17], v10)
           && sub_174BC8(v10, v12, v10) )
    {
      if ( !sub_17579C(v15, v10, a1 + 11, v5) )
      {
        v18 = sub_D065C();
        if ( HIBYTE(v18) != 3 || (v18 & 0xFFF) != 0x74 )
        {
          v16 = 0;
          sub_D0048(16, 164, 3, (int)"crypto/ec/ec2_oct.c", 85);
          goto LABEL_5;
        }
        sub_D00F0();
        sub_D0048(16, 164, 110, (int)"crypto/ec/ec2_oct.c", 82);
        goto LABEL_4;
      }
      v19 = sub_B870C((int)v15);
      if ( (*(int (__fastcall **)(_DWORD *, int **, int **, int **, int ***))(*a1 + 136))(a1, v21, v12, v15, v5) )
      {
        v20 = a4;
        if ( a4 )
          v20 = 1;
        if ( v20 == (v19 != 0) || sub_174BC8(v21, v21, v12) )
        {
LABEL_8:
          v16 = sub_C6E54(a1, a2) != 0;
          goto LABEL_5;
        }
      }
    }
LABEL_4:
    v16 = 0;
LABEL_5:
    sub_130C74(v5);
    sub_130B5C(v8);
    return (int ***)v16;
  }
  result = (int ***)sub_130B08();
  v5 = result;
  if ( result )
  {
    v8 = (void **)result;
    goto LABEL_2;
  }
  return result;
}
