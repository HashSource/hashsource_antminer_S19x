int __fastcall sub_1E97A0(int a1, int a2, int a3, int a4, int a5, int a6)
{
  int v9; // r0
  int v10; // r0
  _BYTE **v11; // r8
  int v12; // r3
  int v13; // r0
  int v15; // r0
  char *v16; // r11
  size_t v17; // r0
  int v18; // r0
  int v19; // r2
  _BYTE *v20; // r5
  int v21; // r4
  int v22; // r0
  int v23; // t1
  int v24; // [sp+Ch] [bp-8h]

  v9 = sub_16F654(a1);
  v10 = ((int (__fastcall *)(int))loc_1E2770)(v9);
  v11 = (_BYTE **)dword_488C94;
  if ( !sub_22EBBC(v10) )
    return sub_2323A0(a1, a2, a3, v12, a5, a6);
  v13 = ((int (__fastcall *)(int))loc_1E2198)(43);
  if ( v13 == 2 )
    return sub_2323A0(a1, a2, a3, v12, a5, a6);
  v15 = sub_1E831C(v13);
  v16 = *v11;
  v17 = sub_1E2890(v15);
  sub_93170(v16, v17, "qCRC:%lx,%lx", a3, a5);
  sub_1E7DEC(*v11);
  v24 = sub_31E7B4(a2, a5, -1);
  sub_1E4EB8(v11, (size_t *)v11 + 1, 0, 0, 0);
  v18 = sub_1E1768(*v11, dword_48899C);
  if ( !v18 )
    return -1;
  if ( v18 != 1 )
    return sub_2323A0(a1, a2, a3, v12, a5, a6);
  v19 = (unsigned __int8)(*v11)[1];
  v20 = *v11 + 1;
  if ( *v20 )
  {
    v21 = 0;
    do
    {
      v22 = sub_990E4(v19);
      v23 = (unsigned __int8)*++v20;
      v19 = v23;
      v21 = v22 + 16 * v21;
    }
    while ( v23 );
  }
  else
  {
    v21 = (unsigned __int8)(*v11)[1];
  }
  return v24 == v21;
}
