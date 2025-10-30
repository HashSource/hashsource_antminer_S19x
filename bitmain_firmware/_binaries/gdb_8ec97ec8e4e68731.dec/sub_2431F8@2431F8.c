FILE *__fastcall sub_2431F8(int a1)
{
  char *v1; // r11
  int v2; // r8
  int v3; // r10
  FILE **v4; // r4
  int v5; // r0
  FILE *v6; // r0
  FILE *v7; // r3
  FILE *v8; // r7
  __int64 v9; // r8
  _DWORD *v10; // r4
  int v11; // r0
  FILE **v12; // r4
  FILE *result; // r0
  FILE *v14; // t1
  FILE *v15; // r0
  FILE **v16; // r4
  FILE *v17; // t1
  int v18; // [sp+8h] [bp-14h] BYREF
  FILE *v19; // [sp+Ch] [bp-10h] BYREF
  __int64 v20; // [sp+10h] [bp-Ch] BYREF
  char v21; // [sp+18h] [bp-4h] BYREF

  v20 = 0;
  v19 = 0;
  if ( !dword_48A50C && !dword_48A510 && *(_DWORD *)(dword_487668 + 44) == *(_DWORD *)(dword_487668 + 48) )
    *(_BYTE *)dword_48A4EC = 0;
  v18 = 0;
  sub_25B0DC(&v18, a1);
  if ( sub_31E100(v18) <= 1 )
    sub_946E0("usage: new-ui <interpreter> <tty>");
  if ( !v18 )
  {
    sub_94700((int)"utils.h", 203, "%s: Assertion `%s' failed.", "char* gdb_argv::operator[](int)", "m_argv != NULL");
    sub_31DAD0(v18);
    v16 = (FILE **)&v21;
    while ( 1 )
    {
      v17 = *--v16;
      v15 = v17;
      if ( v17 )
        v15 = (FILE *)fclose(v15);
      if ( v16 == &v19 )
        sub_338FFC(v15);
    }
  }
  v1 = *(char **)v18;
  v2 = *(_DWORD *)(v18 + 4);
  v3 = dword_487668;
  v4 = &v19;
  do
  {
    v5 = sub_967B4(v2, 258);
    if ( v5 < 0 )
      sub_258B04("opening terminal failed");
    v6 = fdopen(v5, "w+");
    v7 = *v4;
    *v4++ = v6;
    if ( v7 )
      fclose(v7);
  }
  while ( v4 != (FILE **)&v21 );
  v8 = v19;
  v9 = v20;
  v10 = sub_9836C(0x5Cu);
  sub_242FF0((int)v10, v8, v9);
  v10[9] = 1;
  dword_487668 = (int)v10;
  sub_191624(v1);
  v11 = sub_191AC0();
  ((void (__fastcall *)(int))loc_19178C)(v11);
  dword_487668 = v3;
  v19 = 0;
  v20 = 0;
  sub_259858("New UI allocated\n");
  v12 = (FILE **)&v20 + 1;
  sub_31DAD0(v18);
  result = 0;
  while ( v12 != &v19 )
  {
    while ( 1 )
    {
      v14 = *--v12;
      result = v14;
      if ( v14 )
        break;
      if ( v12 == &v19 )
        return result;
    }
    result = (FILE *)fclose(result);
  }
  return result;
}
