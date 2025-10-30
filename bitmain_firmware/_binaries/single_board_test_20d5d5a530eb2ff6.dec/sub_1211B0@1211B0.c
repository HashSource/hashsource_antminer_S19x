int __fastcall sub_1211B0(int *a1, int a2, char *s, int a4)
{
  bool v4; // zf
  int v5; // r4
  int v7; // r5
  int v10; // r4
  _DWORD *v12; // r9
  _DWORD *v13; // r0

  v4 = s == 0;
  if ( s )
    v4 = a2 == 0;
  v5 = v4;
  if ( !a1 )
    v5 |= 1u;
  if ( v5 )
  {
    sub_D0048(34, 126, 107, (int)"crypto/x509v3/v3_sxnet.c", 158);
    return 0;
  }
  v7 = a4;
  if ( a4 != -1 )
  {
    if ( a4 <= 64 )
      goto LABEL_11;
LABEL_24:
    sub_D0048(34, 126, 132, (int)"crypto/x509v3/v3_sxnet.c", 164);
    return 0;
  }
  v7 = strlen(s);
  if ( v7 > 64 )
    goto LABEL_24;
LABEL_11:
  v10 = *a1;
  if ( *a1 )
    goto LABEL_12;
  v13 = (_DWORD *)sub_121154();
  v10 = (int)v13;
  if ( !v13 )
  {
    v12 = 0;
    goto LABEL_19;
  }
  if ( !sub_126EFC(*v13, 0) )
  {
    v12 = 0;
LABEL_19:
    sub_D0048(34, 126, 65, (int)"crypto/x509v3/v3_sxnet.c", 193);
    sub_121110((int)v12);
    sub_121168(v10);
    *a1 = 0;
    return 0;
  }
  *a1 = v10;
LABEL_12:
  if ( sub_12117C(v10, a2) )
  {
    sub_D0048(34, 126, 133, (int)"crypto/x509v3/v3_sxnet.c", 176);
    return 0;
  }
  v12 = (_DWORD *)sub_1210FC();
  if ( !v12 )
    goto LABEL_19;
  if ( v7 == -1 )
    v7 = strlen(s);
  if ( !sub_1280A4(v12[1], s, v7) || !sub_10BD3C(*(int **)(v10 + 4), (int)v12) )
    goto LABEL_19;
  *v12 = a2;
  return 1;
}
