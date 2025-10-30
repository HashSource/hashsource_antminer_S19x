int __fastcall sub_1593EC(const char *a1)
{
  void *v1; // r6
  unsigned int *v2; // r8
  int v3; // r0
  int *v4; // r9
  unsigned int v5; // r4
  int result; // r0
  unsigned int *v7; // r5
  unsigned int v8; // r3
  const char *v9; // r1
  int v10; // r7
  _DWORD *v11; // r0
  const char **v12; // r0
  const char **v13; // t1
  const char *v14; // r1
  __int64 v15; // kr00_8
  int v16; // r0
  int v17; // r0
  _DWORD v19[6]; // [sp+1Ch] [bp-68h] BYREF
  _BYTE v20[80]; // [sp+34h] [bp-50h] BYREF

  v3 = sub_15F7E8("No frame selected");
  v4 = sub_C32A8(v3, 0);
  if ( !v4 )
    return sub_259F10("No symbol table info available.\n");
  v5 = 0;
  do
  {
    sub_2665F0(v20);
    result = sub_C28A8(v4, v19);
    v7 = (unsigned int *)result;
    if ( result )
    {
      while ( 1 )
      {
        v8 = *((unsigned __int8 *)v7 + 32);
        if ( (v8 & 7) == 5 )
          break;
LABEL_23:
        result = sub_C28E4((int)v19);
        v7 = (unsigned int *)result;
        if ( !result )
          goto LABEL_24;
      }
      if ( *((_DWORD *)off_46DBB8 + 4 * (v8 >> 3)) != 15 )
      {
        v15 = sub_94700(
                (int)"f-valprint.c",
                388,
                "%s: Assertion `%s' failed.",
                "void info_common_command_for_block(const block*, const char*, int*)",
                "SYMBOL_CLASS (sym) == LOC_COMMON_BLOCK");
        sub_92E40((int)v1);
        if ( HIDWORD(v15) != 1 )
        {
          sub_339E78(v15);
          sub_92E60();
        }
        v16 = sub_339E78(v15);
        v17 = sub_259F10("<error reading variable: %s>", *(_DWORD *)(v16 + 8));
        sub_339EF8(v17);
        while ( 1 )
        {
          ++v5;
          sub_25A4C8(10);
          if ( *v2 <= v5 )
            break;
LABEL_19:
          v13 = (const char **)v7[1];
          ++v7;
          v12 = v13;
          if ( dword_46D448 )
            v14 = (const char *)sub_21B3C4(v12);
          else
            v14 = *v12;
          sub_259F10("%s = ", v14);
          v1 = sub_92E28();
          v10 = sub_26118C(*v7, v4);
          v11 = (_DWORD *)sub_242F8C(v10);
          sub_266C84(v10, *v11, v20);
          sub_92E40((int)v1);
        }
        goto LABEL_22;
      }
      if ( a1 && (!*v7 || strcmp(a1, (const char *)*v7)) )
        goto LABEL_23;
      v2 = (unsigned int *)v7[2];
      if ( v5 )
        sub_25A4C8(10);
      if ( dword_46D448 )
      {
        if ( sub_21B3C4(v7) )
        {
          if ( dword_46D448 )
            v9 = (const char *)sub_21B3C4(v7);
          else
            v9 = (const char *)*v7;
          goto LABEL_13;
        }
      }
      else
      {
        v9 = (const char *)*v7;
        if ( *v7 )
        {
LABEL_13:
          sub_259F10("Contents of F77 COMMON block '%s':\n", v9);
          goto LABEL_14;
        }
      }
      sub_259F10("Contents of blank COMMON block:\n");
LABEL_14:
      if ( *v2 )
      {
        v7 = v2;
        v5 = 0;
        goto LABEL_19;
      }
LABEL_22:
      v5 = 1;
      goto LABEL_23;
    }
LABEL_24:
    if ( v4[2] )
      break;
    v4 = (int *)v4[3];
  }
  while ( v4 );
  if ( !v5 )
  {
    if ( a1 )
      return sub_259F10("No common block '%s'.\n", a1);
    else
      return sub_259F10("No common blocks.\n");
  }
  return result;
}
