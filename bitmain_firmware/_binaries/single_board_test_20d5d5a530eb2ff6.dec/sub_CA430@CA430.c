int __fastcall sub_CA430(_DWORD *a1, _DWORD *a2, int a3, int a4, int a5)
{
  int v5; // r4
  int v8; // r8
  int v9; // r0
  int v10; // r11
  int v11; // r10
  int v12; // r9
  _BOOL4 v13; // r5
  int result; // r0
  int (__fastcall *v15)(_DWORD *, int, _DWORD, int); // r6
  int (__fastcall *v16)(_DWORD *, int, _DWORD, int); // r6
  int v17; // r6
  int v18; // r0
  unsigned int v19; // r0
  int v22; // [sp+14h] [bp-8h]

  v5 = a5;
  v8 = 0;
  v9 = sub_D00F0(a1);
  if ( a5 )
  {
LABEL_2:
    sub_130BC0(v5);
    v10 = sub_130CCC(v5);
    v11 = sub_130CCC(v5);
    v12 = sub_130CCC(v5);
    v22 = sub_130CCC(v5);
    if ( !v22 || !sub_1337FC(v12, a3, a1[10], v5) )
      goto LABEL_4;
    if ( *(_DWORD *)(*a1 + 156) )
    {
      if ( !sub_133FA0(v11, a3, a1[10], v5) || !sub_133F3C(v10, v11, a3, a1[10], v5) )
        goto LABEL_4;
    }
    else if ( !(*(int (__fastcall **)(_DWORD *, int, int, int))(*a1 + 140))(a1, v11, a3, v5)
           || !(*(int (__fastcall **)(_DWORD *, int, int, int, int))(*a1 + 136))(a1, v10, v11, a3, v5) )
    {
      goto LABEL_4;
    }
    if ( a1[19] )
    {
      if ( !sub_133FE4(v11, v12, a1[10]) || !sub_133AF8(v11, v11, v12, a1[10]) || !sub_133F18(v10, v10, v11, a1[10]) )
        goto LABEL_4;
    }
    else
    {
      v15 = *(int (__fastcall **)(_DWORD *, int, _DWORD, int))(*a1 + 156);
      if ( v15 )
      {
        if ( !v15(a1, v11, a1[17], v5) || !sub_133F3C(v11, v11, v12, a1[10], v5) )
          goto LABEL_4;
      }
      else if ( !(*(int (__fastcall **)(_DWORD *, int, _DWORD, int, int))(*a1 + 136))(a1, v11, a1[17], v12, v5) )
      {
        goto LABEL_4;
      }
      if ( !sub_133AF8(v10, v10, v11, a1[10]) )
      {
LABEL_4:
        v13 = 0;
LABEL_5:
        sub_130C74(v5);
        sub_130B5C(v8);
        return v13;
      }
    }
    v16 = *(int (__fastcall **)(_DWORD *, int, _DWORD, int))(*a1 + 156);
    if ( v16 )
    {
      if ( !v16(a1, v11, a1[18], v5) || !sub_133AF8(v10, v10, v11, a1[10]) )
        goto LABEL_4;
    }
    else if ( !sub_133AF8(v10, v10, a1[18], a1[10]) )
    {
      goto LABEL_4;
    }
    if ( !sub_136A3C(v22, v10, a1[10], v5) )
    {
      v19 = sub_D065C();
      if ( HIBYTE(v19) == 3 && (v19 & 0xFFF) == 0x6F )
      {
        sub_D00F0(111);
        v13 = 0;
        sub_D0048(16, 169, 110, "crypto/ec/ecp_oct.c", 108);
      }
      else
      {
        v13 = 0;
        sub_D0048(16, 169, 3, "crypto/ec/ecp_oct.c", 111);
      }
      goto LABEL_5;
    }
    v17 = a4;
    if ( a4 )
      v17 = 1;
    if ( v17 != sub_B870C(v22) )
    {
      if ( sub_B85B0(v22) )
      {
        v18 = sub_133634(v12, a1[10], v5);
        if ( v18 != -2 )
        {
          if ( v18 != 1 )
          {
            v13 = 0;
            sub_D0048(16, 169, 110, "crypto/ec/ecp_oct.c", 131);
            goto LABEL_5;
          }
          sub_D0048(16, 169, 109, "crypto/ec/ecp_oct.c", 125);
        }
        goto LABEL_4;
      }
      if ( !sub_12F56C(v22, a1[10], v22) )
        goto LABEL_4;
    }
    if ( v17 == sub_B870C(v22) )
    {
      v13 = sub_C6E54(a1, a2) != 0;
    }
    else
    {
      v13 = 0;
      sub_D0048(16, 169, 68, "crypto/ec/ecp_oct.c", 139);
    }
    goto LABEL_5;
  }
  result = sub_130B08(v9);
  v5 = result;
  if ( result )
  {
    v8 = result;
    goto LABEL_2;
  }
  return result;
}
