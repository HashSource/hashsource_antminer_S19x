int sub_187A4()
{
  int v0; // r8
  _QWORD *i; // r4
  char v3[48]; // [sp+4h] [bp-158h] BYREF
  _DWORD v4[74]; // [sp+34h] [bp-128h] BYREF

  sub_6DD44(v4);
  byte_2333A8 = 0;
  v0 = v4[0] - 1;
  if ( v4[0] - 1 < 0 )
    return -1;
  for ( i = &v4[18 * v4[0]]; ; i -= 9 )
  {
    sub_1E938(v3, 48);
    printf("%s ", v3);
    printf("%s : boardID %d\n", "check_hashboard_plug_in", *((_DWORD *)i - 17));
    snprintf(byte_220478, 0x100u, "boardID %d", *((_DWORD *)i - 17));
    sub_3CC5C(byte_220478, v3);
    if ( *((_DWORD *)i - 17) != 3 )
      break;
    if ( --v0 == -1 )
      return -1;
  }
  dword_21B3A4 = *((_DWORD *)i - 17);
  byte_2333A8 = 1;
  return 0;
}
