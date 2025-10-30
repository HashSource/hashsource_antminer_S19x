int __fastcall sub_34C00(char **a1)
{
  int v2; // r0
  int v3; // r4
  int v4; // r0
  char **i; // r2
  int v6; // r4
  int v7; // r0
  char *v8; // r6
  int v10; // r0
  char *v11; // r3
  __int64 v12; // r0
  bool v13; // zf
  int v14; // r6
  char *v15; // r0
  char *s; // [sp+8h] [bp-8Ch] BYREF
  char *v17; // [sp+Ch] [bp-88h] BYREF
  char *v18; // [sp+10h] [bp-84h] BYREF
  char v19[100]; // [sp+14h] [bp-80h] BYREF

  if ( sub_BC304(&dword_4899A0, 33, a1) <= 0 )
    return 0;
  v2 = sub_22EBBC();
  v3 = v2;
  if ( v2 )
  {
    v7 = sub_183688(v2);
    v8 = (char *)*(unsigned __int8 *)(v7 + 16);
    if ( *(_BYTE *)(v7 + 16) )
      return 0;
    v10 = sub_183688(v7);
    sub_93170(v19, 100, "/proc/%ld/task/%ld/maps", *(_DWORD *)(v10 + 12), *(_DWORD *)(v10 + 12));
    sub_23183C(&s, v8, v19);
    if ( s )
    {
      v17 = v8;
      v11 = strtok_r(s, (const char *)&word_356638, &v17);
      if ( v11 )
      {
        while ( 1 )
        {
          v18 = v11;
          v12 = sub_9335C(v11, &v18, 16);
          v13 = HIDWORD(v12) == 0;
          v14 = v12;
          if ( !HIDWORD(v12) )
            v13 = (_DWORD)v12 == (_DWORD)*a1;
          if ( v13 )
            break;
          v11 = strtok_r(0, (const char *)&word_356638, &v17);
          if ( !v11 )
            goto LABEL_25;
        }
        v15 = v18;
        if ( *v18 == 45 )
          v15 = ++v18;
        v6 = 1;
        a1[1] = (char *)(sub_9335C(v15, &v18, 16) - v14);
        goto LABEL_26;
      }
    }
    else
    {
      sub_946B0("unable to open /proc file '%s'", v19);
    }
LABEL_25:
    v6 = 0;
LABEL_26:
    if ( s )
      free(s);
    return v6;
  }
  if ( sub_2DB184(dword_47ACB8) == -1 )
    return 0;
  v4 = sub_2DB1B8(dword_47ACB8, &s);
  if ( v4 <= 0 )
    return 0;
  for ( i = &s; (&s)[8 * v3] != (char *)1 || i[3] != *a1; i += 8 )
  {
    if ( v4 == ++v3 )
      return 0;
  }
  v6 = (int)(&s)[8 * v3];
  a1[1] = i[6];
  return v6;
}
