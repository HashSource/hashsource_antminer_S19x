int __fastcall sub_CAFC4(_DWORD *a1, _DWORD *a2, int a3, int a4, int a5)
{
  int v8; // r4
  int v9; // r7
  int v10; // r10
  int v11; // r8
  int v12; // r11
  int (__fastcall *v13)(_DWORD *, int, _DWORD, int); // r7
  int (__fastcall *v14)(_DWORD *, int, _DWORD, int); // r7
  int v16; // r0
  int v18; // [sp+10h] [bp-Ch]
  int v19; // [sp+14h] [bp-8h]

  v8 = a5;
  if ( !sub_C6CD4(a1, a2) )
  {
    v9 = 0;
    v10 = 0;
    if ( !a5 )
    {
      v16 = sub_130B08(0);
      v8 = v16;
      if ( !v16 )
        return v9;
      v10 = v16;
    }
    sub_130BC0(v8);
    v11 = sub_130CCC(v8);
    v18 = sub_130CCC(v8);
    v19 = sub_130CCC(v8);
    v12 = sub_130CCC(v8);
    if ( !v12 )
      goto LABEL_15;
    v13 = *(int (__fastcall **)(_DWORD *, int, _DWORD, int))(*a1 + 156);
    if ( v13 )
    {
      if ( !v13(a1, v11, a2[4], v8) )
        goto LABEL_15;
    }
    else
    {
      v11 = a2[4];
    }
    if ( !sub_B86D8(v11) )
    {
      v9 = (*(int (__fastcall **)(_DWORD *, int, int, int))(*a1 + 148))(a1, v18, v11, v8);
      if ( !v9 )
      {
        sub_D0048(16, 167, 3, "crypto/ec/ecp_smpl.c", 558);
        goto LABEL_16;
      }
      if ( *(_DWORD *)(*a1 + 152) )
      {
        if ( !sub_133FA0(v19, v18, a1[10], v8) )
          goto LABEL_15;
      }
      else if ( !(*(int (__fastcall **)(_DWORD *, int, int, int))(*a1 + 140))(a1, v19, v18, v8) )
      {
        goto LABEL_15;
      }
      if ( a3 && !(*(int (__fastcall **)(_DWORD *, int, _DWORD, int, int))(*a1 + 136))(a1, a3, a2[2], v19, v8) )
        goto LABEL_15;
      if ( !a4 )
        goto LABEL_22;
      if ( *(_DWORD *)(*a1 + 152) )
      {
        if ( !sub_133F3C(v12, v19, v18, a1[10], v8) )
          goto LABEL_15;
      }
      else if ( !(*(int (__fastcall **)(_DWORD *, int, int, int, int))(*a1 + 136))(a1, v12, v19, v18, v8) )
      {
        goto LABEL_15;
      }
      v9 = (*(int (__fastcall **)(_DWORD *, int, _DWORD, int, int))(*a1 + 136))(a1, a4, a2[3], v12, v8) != 0;
      goto LABEL_16;
    }
    v14 = *(int (__fastcall **)(_DWORD *, int, _DWORD, int))(*a1 + 156);
    if ( v14 )
    {
      if ( !a3 || v14(a1, a3, a2[2], v8) )
      {
        if ( a4 )
        {
          v9 = (*(int (__fastcall **)(_DWORD *, int, _DWORD, int))(*a1 + 156))(a1, a4, a2[3], v8) != 0;
LABEL_16:
          sub_130C74(v8);
          sub_130B5C(v10);
          return v9;
        }
LABEL_22:
        v9 = 1;
        goto LABEL_16;
      }
    }
    else if ( !a3 || sub_B89E4(a3, a2[2]) )
    {
      if ( a4 )
      {
        v9 = sub_B89E4(a4, a2[3]) != 0;
        goto LABEL_16;
      }
      goto LABEL_22;
    }
LABEL_15:
    v9 = 0;
    goto LABEL_16;
  }
  sub_D0048(16, 167, 106, "crypto/ec/ecp_smpl.c", 507);
  return 0;
}
