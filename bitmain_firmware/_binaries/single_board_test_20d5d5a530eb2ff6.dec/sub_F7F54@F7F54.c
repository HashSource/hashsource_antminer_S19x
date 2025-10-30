int __fastcall sub_F7F54(int a1, int a2)
{
  int v3; // r4
  int v4; // r5
  _DWORD *v5; // r0
  int v6; // r9
  int v7; // r8
  int result; // r0
  int v9; // r10
  int v10; // r8
  int v11; // r9
  bool v12; // zf
  int v13; // r3
  int **v14; // r7
  int **v15; // r11
  _UNKNOWN **v16; // r0
  _UNKNOWN **v17; // r0
  int v18; // r8
  int **v20; // [sp+Ch] [bp-8h]

  v3 = a2;
  if ( !a2 )
  {
    result = sub_130B08(a1);
    v3 = result;
    if ( !result )
      return result;
  }
  sub_130BC0(v3);
  v4 = sub_130CCC(v3);
  if ( v4 )
  {
    v4 = *(_DWORD *)(a1 + 20);
    if ( v4 )
      goto LABEL_4;
    v9 = *(_DWORD *)(a1 + 24);
    v10 = *(_DWORD *)(a1 + 28);
    v11 = *(_DWORD *)(a1 + 32);
    v12 = v10 == 0;
    if ( v10 )
      v12 = v9 == 0;
    v13 = v12;
    if ( !v11 )
      v13 |= 1u;
    if ( !v13 )
    {
      sub_130BC0(v3);
      v20 = (int **)sub_130CCC(v3);
      v14 = (int **)sub_130CCC(v3);
      v15 = (int **)sub_130CCC(v3);
      if ( v15
        && (v16 = sub_B81FC(), BN_sub(v14, v10, v16))
        && (v17 = sub_B81FC(), BN_sub(v15, v11, v17))
        && sub_BA0CC(v20, v14, v15, v3) )
      {
        v18 = sub_1330EC(0, v9, v20, v3);
        sub_130C74(v3);
        if ( v18 )
        {
          v4 = v18;
LABEL_4:
          v5 = (_DWORD *)sub_B822C();
          v6 = (int)v5;
          if ( v5 )
          {
            sub_B8740(v5, *(int **)(a1 + 16), 4);
            v7 = sub_130888(0, v4, v6, v3, *(_DWORD *)(*(_DWORD *)(a1 + 8) + 24), *(_DWORD *)(a1 + 68));
            sub_B895C(v6);
            if ( v7 )
              sub_1307AC(v7);
            else
              sub_D0048(4, 136, 3, (int)"crypto/rsa/rsa_crpt.c", 155);
          }
          else
          {
            v7 = 0;
            sub_D0048(4, 136, 65, (int)"crypto/rsa/rsa_crpt.c", 144);
          }
          goto LABEL_7;
        }
      }
      else
      {
        sub_130C74(v3);
      }
    }
    v7 = 0;
    sub_D0048(4, 136, 140, (int)"crypto/rsa/rsa_crpt.c", 133);
  }
  else
  {
    v7 = 0;
    sub_D0048(4, 136, 65, (int)"crypto/rsa/rsa_crpt.c", 126);
  }
LABEL_7:
  sub_130C74(v3);
  if ( v3 != a2 )
    sub_130B5C(v3);
  if ( v4 != *(_DWORD *)(a1 + 20) )
    sub_B895C(v4);
  return v7;
}
