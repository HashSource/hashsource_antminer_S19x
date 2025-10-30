_DWORD *__fastcall sub_11F5A8(int a1, int a2, _DWORD *a3)
{
  int v4; // r0
  _DWORD *v5; // r11
  int v6; // r4
  int v7; // r10
  bool v8; // cc
  unsigned int v9; // r1
  int v10; // r0
  const char *v11; // r6
  _DWORD *v12; // r5

  v4 = sub_11F580();
  v5 = (_DWORD *)v4;
  if ( v4 )
  {
    v6 = 0;
    v7 = v4 + 4;
    while ( 1 )
    {
      v8 = v6 < sub_10C010((int)a3);
      v9 = v6++;
      if ( !v8 )
        break;
      v10 = sub_10C01C(a3, v9);
      v11 = *(const char **)(v10 + 4);
      v12 = (_DWORD *)v10;
      if ( !strcmp(v11, "requireExplicitPolicy") )
      {
        if ( !sub_1226F8(v12, v5) )
          goto LABEL_8;
      }
      else
      {
        if ( strcmp(v11, "inhibitPolicyMapping") )
        {
          sub_D0048(34, 146, 106, (int)"crypto/x509v3/v3_pcons.c", 76);
          sub_D1240(6, "section:", *v12, ",name:", v12[1], ",value:", v12[2]);
LABEL_8:
          sub_11F594((int)v5);
          return 0;
        }
        if ( !sub_1226F8(v12, v7) )
          goto LABEL_8;
      }
    }
    if ( !v5[1] && !*v5 )
    {
      sub_D0048(34, 146, 151, (int)"crypto/x509v3/v3_pcons.c", 83);
      goto LABEL_8;
    }
    return v5;
  }
  else
  {
    sub_D0048(34, 146, 65, (int)"crypto/x509v3/v3_pcons.c", 64);
    return 0;
  }
}
