int __fastcall sub_CA300(int a1, int **a2, int **a3, int **a4, int a5)
{
  bool v5; // zf
  bool v6; // zf
  int v8; // r4
  int v11; // r5
  int v13; // r0
  int **v14; // [sp+Ch] [bp-8h]

  v5 = a2 == 0;
  if ( a2 )
    v5 = a1 == 0;
  if ( v5 )
    goto LABEL_14;
  v6 = a4 == 0;
  if ( a4 )
    v6 = a3 == 0;
  v8 = v6;
  if ( v6 )
  {
LABEL_14:
    v8 = 0;
    v11 = 0;
    sub_D0048(16, 200, 67, "crypto/ec/ecp_nist.c", 127);
    goto LABEL_13;
  }
  if ( !a5 )
  {
    v14 = a4;
    v13 = sub_130B08(a1);
    a5 = v13;
    if ( !v13 )
    {
      v8 = 0;
      v11 = 0;
      goto LABEL_13;
    }
    v8 = v13;
    a4 = v14;
  }
  v11 = sub_BA0CC(a2, a3, a4, a5);
  if ( v11 )
    v11 = (*(int (__fastcall **)(int **, int **, _DWORD, int))(a1 + 88))(a2, a2, *(_DWORD *)(a1 + 40), a5) != 0;
LABEL_13:
  sub_130B5C(v8);
  return v11;
}
