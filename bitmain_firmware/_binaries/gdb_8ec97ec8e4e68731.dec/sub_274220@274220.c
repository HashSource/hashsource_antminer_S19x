_DWORD *__fastcall sub_274220(int a1, _BYTE *a2)
{
  int v2; // r6
  _DWORD *result; // r0
  int v6; // r0
  int v7; // lr
  int v8; // r5
  const char **v9; // r1
  const char **v10; // r6
  char *v11; // r2
  const char *v12; // r4
  _DWORD *v13; // r0
  int v14; // r1
  int v15; // r7
  int v16; // r1
  int v17; // r4
  const char **v18; // r6
  const char *v19; // r2
  const char *v20; // r5
  const char *v21; // r0
  const char *v22; // t1
  int v23; // r2
  char *v24; // r0
  __int64 v25; // [sp-18h] [bp-24h] BYREF
  _BYTE *v26; // [sp-10h] [bp-1Ch]
  int v27; // [sp-Ch] [bp-18h]
  int v28; // [sp-8h] [bp-14h]
  int v29; // [sp-4h] [bp-10h]
  __int64 v30; // [sp+0h] [bp-Ch] BYREF

  if ( !sub_273AEC(a2, &v30) )
    return (_DWORD *)v30;
  v6 = sub_273CF8(a1, "Can't convert \"%s\" to an integer", a2);
  v26 = a2;
  v27 = a1;
  v28 = v2;
  v29 = v7;
  v8 = v6;
  v10 = v9;
  v12 = v11;
  if ( !sub_273AEC(v11, &v25) )
  {
    v13 = sub_93028(8u);
    v14 = HIDWORD(v25);
    *v13 = v25;
    v13[1] = v14;
    __asm { POP             {R4-R6,PC} }
  }
  v15 = sub_273CF8(v8, "Can't convert %s=\"%s\" to an integer", *v10, v12);
  v17 = *(_DWORD *)(v16 + 12);
  v18 = (const char **)v16;
  v20 = v19;
  v21 = *(const char **)v17;
  if ( *(_DWORD *)v17 )
  {
    while ( strcasecmp(v21, v20) )
    {
      v22 = *(const char **)(v17 + 16);
      v17 += 16;
      v21 = v22;
      if ( !v22 )
        goto LABEL_10;
    }
    result = sub_93028(8u);
    v23 = *(_DWORD *)(v17 + 12);
    *result = *(_DWORD *)(v17 + 8);
    result[1] = v23;
  }
  else
  {
LABEL_10:
    v24 = (char *)sub_273CF8(v15, "Unknown attribute value %s=\"%s\"", *v18, v20);
    return (_DWORD *)sub_274340(v24);
  }
  return result;
}
