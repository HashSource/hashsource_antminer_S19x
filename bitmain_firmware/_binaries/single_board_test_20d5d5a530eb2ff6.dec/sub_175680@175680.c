int __fastcall sub_175680(int **a1, int **a2, _DWORD *a3, int *a4, int ***a5)
{
  int **v9; // r1
  int **v10; // r0
  int **v11; // r7
  _BOOL4 v12; // r4
  int v14; // r4
  int v15; // r1

  if ( sub_B85B0((int)a3) )
    return sub_B8930(a1, 1);
  if ( !sub_B8590((int)a3, 1) )
  {
    sub_130BC0((int)a5);
    v10 = sub_130CCC(a5, v9);
    v11 = v10;
    if ( v10 && sub_174D98((int)v10, (int *)a2, a4) )
    {
      v14 = sub_B85BC(a3) - 2;
      if ( v14 < 0 )
      {
LABEL_16:
        v12 = sub_B89E4((int)a1, (int)v11) != 0;
        goto LABEL_6;
      }
      while ( sub_174FF4((int)v11, v11, a4, a5) )
      {
        v15 = v14--;
        if ( sub_B83F0(a3, v15) )
        {
          if ( !sub_17513C((int)v11, v11, a2, a4, a5) )
            break;
        }
        if ( v14 == -1 )
          goto LABEL_16;
      }
    }
    v12 = 0;
LABEL_6:
    sub_130C74(a5);
    return v12;
  }
  return sub_B89E4((int)a1, (int)a2) != 0;
}
