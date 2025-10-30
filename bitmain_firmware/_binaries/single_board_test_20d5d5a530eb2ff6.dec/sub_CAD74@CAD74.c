bool __fastcall sub_CAD74(_DWORD *a1, int a2)
{
  int v3; // r4
  int v4; // r8
  int v5; // r7
  int v6; // r9
  void **v7; // r10
  int *v8; // r11
  int v9; // r0
  int (__fastcall *v10)(_DWORD *, int, _DWORD, int); // r6
  _BOOL4 v11; // r5
  int v13; // [sp+Ch] [bp-8h]

  v3 = a2;
  v4 = 0;
  v13 = a1[10];
  if ( !a2 )
  {
    v3 = sub_130B08(a1);
    v4 = v3;
    if ( !v3 )
    {
      v4 = 0;
      sub_D0048(16, 165, 65, "crypto/ec/ecp_smpl.c", 254);
      v11 = 0;
      goto LABEL_6;
    }
  }
  sub_130BC0(v3);
  v5 = sub_130CCC(v3);
  v6 = sub_130CCC(v3);
  v7 = (void **)sub_130CCC(v3);
  v8 = (int *)sub_130CCC(v3);
  v9 = sub_130CCC(v3);
  if ( !v9 )
    goto LABEL_5;
  v10 = *(int (__fastcall **)(_DWORD *, int, _DWORD, int))(*a1 + 156);
  if ( v10 )
  {
    v9 = v10(a1, v5, a1[17], v3);
    if ( v9 )
    {
      v9 = (*(int (__fastcall **)(_DWORD *, int, _DWORD, int))(*a1 + 156))(a1, v6, a1[18], v3);
      if ( v9 )
        goto LABEL_8;
    }
LABEL_5:
    v11 = v9;
    goto LABEL_6;
  }
  v9 = sub_B89E4(v5, a1[17]);
  if ( !v9 )
    goto LABEL_5;
  v9 = sub_B89E4(v6, a1[18]);
  if ( !v9 )
    goto LABEL_5;
LABEL_8:
  if ( sub_B85B0(v5) )
  {
    v11 = !sub_B85B0(v6);
    goto LABEL_6;
  }
  v11 = 1;
  if ( !sub_B85B0(v6) )
  {
    v9 = sub_133FA0(v7, v5, v13, v3);
    if ( v9 )
    {
      v9 = sub_133F3C(v8, v7, v5, v13, v3);
      if ( v9 )
      {
        v9 = sub_BA5F8(v7, v8, 2);
        if ( v9 )
        {
          v9 = sub_133FA0(v8, v6, v13, v3);
          if ( v9 )
          {
            v9 = sub_BADB4((int **)v8, 27);
            if ( v9 )
            {
              v9 = sub_13384C(v5, v7, v8, v13, v3);
              if ( v9 )
              {
                v11 = !sub_B85B0(v5);
                goto LABEL_6;
              }
            }
          }
        }
      }
    }
    goto LABEL_5;
  }
LABEL_6:
  sub_130C74(v3);
  sub_130B5C(v4);
  return v11;
}
