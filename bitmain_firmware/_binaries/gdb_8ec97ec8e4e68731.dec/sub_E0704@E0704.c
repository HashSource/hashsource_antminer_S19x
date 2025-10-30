void __fastcall sub_E0704(int a1, int a2, int a3, int a4)
{
  const char *v5; // r4
  const char *v6; // r3
  const char *v7; // r4
  int v8; // r2
  int v9; // r8
  size_t v10; // r0
  size_t v11; // r11
  __int64 v12; // r6
  int v13; // r0
  int v14; // r9
  bool v15; // zf
  unsigned __int8 *v16; // r4
  _BYTE *v17; // r10
  bool v18; // zf
  char v19; // r5
  _DWORD *v20; // r0
  _DWORD *v21; // [sp+0h] [bp-30h]
  int v22; // [sp+4h] [bp-2Ch]

  v5 = *(const char **)(sub_273FA0(a4, "version") + 4);
  if ( strcmp(v5, "1.0") )
  {
    v22 = sub_273CF8(a1, "Unsupported btrace version: \"%s\"", v5);
    v7 = v6;
    v9 = v8;
    v10 = strlen(v6);
    if ( (v10 & 1) == 0 )
    {
      HIDWORD(v12) = v10 >> 1;
      v11 = v10;
      LODWORD(v12) = sub_93028(v10 >> 1);
      v21 = sub_9253C((int)sub_E05EC, v12);
      if ( !v11 )
      {
LABEL_13:
        sub_92640(v21);
        *(_QWORD *)(v9 + 12) = v12;
        return;
      }
      v13 = *(unsigned __int8 *)v7;
      v14 = *((unsigned __int8 *)v7 + 1);
      v15 = v14 == 0;
      if ( v7[1] )
        v15 = v13 == 0;
      if ( !v15 )
      {
        v16 = (unsigned __int8 *)(v7 + 4);
        v17 = (_BYTE *)v12;
        do
        {
          v19 = sub_990E4(v13);
          v11 -= 2;
          *v17++ = sub_990E4(v14) + 16 * v19;
          if ( !v11 )
            goto LABEL_13;
          v13 = *(v16 - 2);
          v16 += 2;
          v14 = *(v16 - 3);
          v18 = v14 == 0;
          if ( *(v16 - 3) )
            v18 = v13 == 0;
        }
        while ( !v18 );
      }
      sub_273CF8(v22, "Bad hex encoding.");
    }
    v20 = (_DWORD *)sub_273CF8(v22, "Bad raw data size.");
    sub_91CF8(v20);
  }
}
