_DWORD *__fastcall sub_1707D8(int a1, int a2, _DWORD *a3)
{
  int v4; // r0
  _DWORD *v5; // r9
  int v6; // r4
  int *v7; // r8
  bool v8; // cc
  unsigned int v9; // r1
  int v10; // r0
  _BYTE *v11; // r3
  _DWORD *v12; // r5

  v4 = sub_1707B0();
  v5 = (_DWORD *)v4;
  if ( v4 )
  {
    v6 = 0;
    v7 = (int *)(v4 + 4);
    while ( 1 )
    {
      while ( 1 )
      {
        v8 = v6 < sub_10C010((int)a3);
        v9 = v6++;
        if ( !v8 )
          return v5;
        v10 = sub_10C01C(a3, v9);
        v11 = *(_BYTE **)(v10 + 4);
        v12 = (_DWORD *)v10;
        if ( *v11 != 67 || v11[1] != 65 || v11[2] )
          break;
        if ( !sub_1225E0(v10, v5) )
          goto LABEL_9;
      }
      if ( strcmp(*(const char **)(v10 + 4), "pathlen") )
        break;
      if ( !sub_1226F8((int)v12, v7) )
        goto LABEL_9;
    }
    sub_D0048(34, 102, 106, (int)"crypto/x509v3/v3_bcons.c", 75);
    sub_D1240(6, "section:", *v12, ",name:", v12[1], ",value:", v12[2]);
LABEL_9:
    sub_1707C4((int)v5);
    return 0;
  }
  else
  {
    sub_D0048(34, 102, 65, (int)"crypto/x509v3/v3_bcons.c", 63);
    return 0;
  }
}
