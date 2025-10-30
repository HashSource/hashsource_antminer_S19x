int __fastcall sub_CC848(_DWORD *a1, _DWORD *a2, int a3, _DWORD *a4, int a5)
{
  int v9; // r10
  int v10; // r9
  int v11; // r5
  int result; // r0
  int v13; // r3
  int (__fastcall *v14)(_DWORD *, int, int, int); // r7
  int v15; // r3
  int (__fastcall *v16)(_DWORD *, int, int, int); // r7
  int (__fastcall *v17)(_DWORD *, _DWORD, int); // r3
  int v18; // [sp+Ch] [bp-18h]
  int v19; // [sp+10h] [bp-14h]
  int v20; // [sp+14h] [bp-10h]
  int v21; // [sp+18h] [bp-Ch]
  int v22; // [sp+1Ch] [bp-8h]

  if ( sub_B85B0(a2[4]) )
    return sub_C6A30((int)a1, a2);
  if ( !sub_B85B0(*(_DWORD *)(a3 + 16)) )
  {
    sub_130BC0(a5);
    v19 = sub_130CCC(a5);
    v18 = sub_130CCC(a5);
    v22 = sub_130CCC(a5);
    v21 = sub_130CCC(a5);
    v9 = sub_130CCC(a5);
    v20 = sub_130CCC(a5);
    v10 = sub_130CCC(a5);
    if ( !v10
      || !sub_133FE4(v9, a4[3], a1[10])
      || !(*(int (__fastcall **)(_DWORD *, int, _DWORD, int, int))(*a1 + 136))(a1, v10, a2[2], v9, a5)
      || !(*(int (__fastcall **)(_DWORD *, int, _DWORD, int, int))(*a1 + 136))(a1, v10, *(_DWORD *)(a3 + 16), v10, a5)
      || !(*(int (__fastcall **)(_DWORD *, int, _DWORD, int, int))(*a1 + 136))(a1, v20, a2[4], v10, a5)
      || !sub_133FE4(v18, a1[18], a1[10])
      || !(*(int (__fastcall **)(_DWORD *, int, _DWORD))(*a1 + 136))(a1, v18, *(_DWORD *)(a3 + 16))
      || !(*(int (__fastcall **)(_DWORD *, int, _DWORD, int))(*a1 + 140))(a1, v21, a2[4], a5)
      || !(*(int (__fastcall **)(_DWORD *, int, int, int, int))(*a1 + 136))(a1, v22, v21, v18, a5)
      || !(*(int (__fastcall **)(_DWORD *, int, _DWORD, _DWORD, int))(*a1 + 136))(a1, v10, a2[4], a1[17], a5)
      || !(*(int (__fastcall **)(_DWORD *, int, _DWORD, _DWORD, int))(*a1 + 136))(a1, v18, a4[2], a2[2], a5)
      || !sub_133AF8(v18, v18, v10, a1[10])
      || !(*(int (__fastcall **)(_DWORD *, int, _DWORD))(*a1 + 136))(a1, v18, *(_DWORD *)(a3 + 16))
      || !(*(int (__fastcall **)(_DWORD *, int, _DWORD, _DWORD, int))(*a1 + 136))(a1, v19, a4[2], a2[4], a5)
      || !sub_133AF8(v10, a2[2], v19, a1[10])
      || !(*(int (__fastcall **)(_DWORD *, int, int, int, int))(*a1 + 136))(a1, v10, v10, v18, a5)
      || !sub_133AF8(v10, v10, v22, a1[10])
      || !sub_133F18(v19, v19, a2[2], a1[10])
      || !(*(int (__fastcall **)(_DWORD *, int, int, int))(*a1 + 140))(a1, v19, v19, a5)
      || !(*(int (__fastcall **)(_DWORD *, int, int, _DWORD, int))(*a1 + 136))(a1, v19, v19, *(_DWORD *)(a3 + 8), a5)
      || !sub_133F18(v19, v10, v19, a1[10])
      || !(*(int (__fastcall **)(_DWORD *, int, _DWORD, int, int))(*a1 + 136))(a1, v18, *(_DWORD *)(a3 + 16), v9, a5)
      || !(*(int (__fastcall **)(_DWORD *, int, int))(*a1 + 136))(a1, v18, v21) )
    {
      goto LABEL_5;
    }
    v13 = *a1;
    v14 = *(int (__fastcall **)(_DWORD *, int, int, int))(*a1 + 156);
    if ( v14 )
    {
      if ( !v14(a1, v18, v18, a5) )
        goto LABEL_5;
      v13 = *a1;
    }
    if ( (*(int (__fastcall **)(_DWORD *, int, int, int))(v13 + 148))(a1, v18, v18, a5) )
    {
      v15 = *a1;
      v16 = *(int (__fastcall **)(_DWORD *, int, int, int))(*a1 + 152);
      if ( v16 )
      {
        if ( !v16(a1, v18, v18, a5) )
          goto LABEL_5;
        v15 = *a1;
      }
      if ( (*(int (__fastcall **)(_DWORD *, _DWORD, int, int, int))(v15 + 136))(a1, a2[2], v20, v18, a5)
        && (*(int (__fastcall **)(_DWORD *, _DWORD, int, int, int))(*a1 + 136))(a1, a2[3], v19, v18, a5) )
      {
        v17 = *(int (__fastcall **)(_DWORD *, _DWORD, int))(*a1 + 160);
        if ( v17 )
        {
          if ( v17(a1, a2[4], a5) )
          {
LABEL_43:
            a2[5] = 1;
            v11 = 1;
            goto LABEL_6;
          }
        }
        else if ( sub_B8930((int **)a2[4], 1) )
        {
          goto LABEL_43;
        }
      }
    }
LABEL_5:
    v11 = 0;
LABEL_6:
    sub_130C74(a5);
    return v11;
  }
  result = sub_C6594(a2, a4);
  if ( result )
    return sub_C6C74(a1, a2) != 0;
  return result;
}
