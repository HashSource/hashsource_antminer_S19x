int sub_1AEA20()
{
  const char *v0; // r0
  int *v1; // r3
  int v2; // r0
  int v3; // r0
  int v4; // r0
  int v5; // r0
  int result; // r0
  int v7; // r6
  int v8; // r3
  int v9; // r4
  unsigned int v10; // r6
  int v11; // r2
  int v12; // r0
  int v13; // r0
  int v14; // r3
  signed int v15; // r2
  const char *v16; // r0
  int v17; // r0
  int v18; // r0
  bool v19; // cc
  int v20; // r3
  int v21; // r0
  const char *v22; // r1
  int v23; // r3
  const char *v24; // r0
  int v25; // r0
  _DWORD *v26; // r0
  int savedregs; // [sp+0h] [bp+0h]
  int savedregs_4; // [sp+4h] [bp+4h]

  if ( off_46D9C4 == &dword_487AF4 )
    LOWORD(v0) = 29680;
  else
    LOWORD(v0) = 29728;
  HIWORD(v0) = 60;
  sub_259F10(v0);
  v1 = off_46D9C4;
  if ( off_46D9C4 == &dword_487AF4 && !byte_487AF0 )
  {
    sub_1AE9B0();
    v1 = off_46D9C4;
  }
  if ( v1[1] == *v1 )
    return sub_259858("There are no memory regions defined.\n");
  sub_259F10("Num ");
  sub_259F10("Enb ");
  v2 = sub_259F10("Low Addr   ");
  v3 = sub_16F654(v2);
  if ( ((int (__fastcall *)(int))loc_16666C)(v3) > 32 )
    sub_259F10("        ");
  v4 = sub_259F10("High Addr  ");
  v5 = sub_16F654(v4);
  if ( ((int (__fastcall *)(int))loc_16666C)(v5) > 32 )
    sub_259F10("        ");
  sub_259F10("Attrs ");
  result = sub_259F10((const char *)&word_356638);
  v7 = *off_46D9C4;
  v8 = off_46D9C4[1];
  if ( v8 != *off_46D9C4 )
  {
    v9 = v7 + 40;
    v10 = ((v8 - (v7 + 40)) & 0xFFFFFFF8) + v7 + 80;
    do
    {
      if ( *(_BYTE *)(v9 - 28) )
        v11 = 121;
      else
        v11 = 110;
      v12 = sub_259F10("%-3d %-3c\t", *(_DWORD *)(v9 - 32), v11);
      v13 = sub_16F654(v12);
      if ( ((int (__fastcall *)(int))loc_16666C)(v13) > 32 )
        v15 = 16;
      else
        v15 = 8;
      v16 = (const char *)sub_98B60(*(_DWORD *)(v9 - 40), 0, v15, v14, savedregs, savedregs_4);
      v17 = sub_259F10("%s ", v16);
      v18 = sub_16F654(v17);
      v19 = ((int (__fastcall *)(int))loc_16666C)(v18) <= 32;
      v21 = *(_DWORD *)(v9 - 36);
      if ( v19 )
      {
        if ( v21 )
          v22 = (const char *)sub_98B60(v21, 0, 8, v20, savedregs, savedregs_4);
        else
          v22 = "0x100000000";
      }
      else if ( v21 )
      {
        v22 = (const char *)sub_98B60(v21, 0, 16, v20, savedregs, savedregs_4);
      }
      else
      {
        v22 = "0x10000000000000000";
      }
      sub_259F10("%s ", v22);
      switch ( *(_DWORD *)(v9 - 24) )
      {
        case 1:
          sub_259F10("rw ");
          break;
        case 2:
          sub_259F10("ro ");
          break;
        case 3:
          sub_259F10("wo ");
          break;
        case 4:
          sub_259F10("flash blocksize 0x%x ", *(_DWORD *)(v9 - 4));
          break;
        default:
          break;
      }
      switch ( *(_DWORD *)(v9 - 20) )
      {
        case 1:
          sub_259F10("8 ");
          break;
        case 2:
          sub_259F10("16 ");
          break;
        case 3:
          sub_259F10("32 ");
          break;
        case 4:
          sub_259F10("64 ");
          break;
        default:
          break;
      }
      v23 = *(_DWORD *)(v9 - 12);
      v9 += 40;
      if ( v23 )
        LOWORD(v24) = 29916;
      else
        LOWORD(v24) = 29924;
      HIWORD(v24) = 60;
      sub_259F10(v24);
      v25 = sub_259F10((const char *)&word_356638);
      v26 = (_DWORD *)sub_242F8C(v25);
      result = sub_25680C(*v26);
    }
    while ( v9 != v10 );
  }
  return result;
}
