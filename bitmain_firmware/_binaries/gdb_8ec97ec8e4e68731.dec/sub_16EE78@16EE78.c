_DWORD *__fastcall sub_16EE78(__int64 a1, int a2)
{
  int v2; // r6
  int v3; // r7
  int v4; // r5
  int v5; // r8
  int v6; // r2
  _DWORD *v7; // r3
  int *v8; // r4
  int *v9; // r0
  const char *v10; // r8
  int v11; // r9
  char *v12; // r0
  _DWORD *result; // r0

  while ( 1 )
  {
    v2 = HIDWORD(a1);
    v3 = a2;
    v4 = a1;
    v5 = sub_2A67B8(a1, 0);
    if ( !v5 )
      goto LABEL_13;
    v6 = dword_4877F0;
    if ( !dword_4877F0 )
    {
      v8 = &dword_4877F0;
      goto LABEL_8;
    }
    if ( v4 != *(_DWORD *)dword_4877F0 )
      break;
LABEL_12:
    sub_94700((int)"gdbarch.c", 5279, "gdbarch: Duplicate registration of architecture (%s)", *(const char **)(v5 + 24));
LABEL_13:
    a1 = sub_94700((int)"gdbarch.c", 5268, "gdbarch: Attempt to register unknown architecture (%d)", v4);
    a2 = 0;
  }
  while ( 1 )
  {
    v7 = *(_DWORD **)(v6 + 16);
    if ( !v7 )
      break;
    v6 = *(_DWORD *)(v6 + 16);
    if ( *v7 == v4 )
      goto LABEL_12;
  }
  v8 = (int *)(v6 + 16);
LABEL_8:
  if ( dword_4877EC )
  {
    v9 = (int *)sub_242FC8(&dword_487780);
    v10 = *(const char **)(v5 + 24);
    v11 = *v9;
    v12 = sub_98EEC(v2);
    sub_2594B0(v11, "register_gdbarch_init (%s, %s)\n", v10, v12);
  }
  result = sub_93028(0x14u);
  *v8 = (int)result;
  *result = v4;
  result[1] = v2;
  result[2] = v3;
  result[3] = 0;
  result[4] = 0;
  return result;
}
