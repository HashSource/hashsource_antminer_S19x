void __fastcall sub_2223DC(char *a1, int a2)
{
  const char *v2; // r4
  int v3; // r5
  const char *v4; // r1
  int v5; // r0
  int *v6; // r4
  int *v7; // r7
  const char *v8; // r11
  int v9; // r6
  int v10; // r3
  int v11; // r0
  const char *v12; // r6
  const char *v13; // r2
  int v14; // r5
  int v15; // r6
  int v16; // r0
  bool v17; // cc
  int v18; // r3
  int v19; // r0
  int v20; // r3
  __int64 v21; // r0
  int v22; // r3
  void *v23; // r0
  int v24; // [sp+0h] [bp-24h]
  int v25; // [sp+4h] [bp-20h]
  int v26; // [sp+Ch] [bp-18h]
  void *v27; // [sp+14h] [bp-10h] BYREF
  void *ptr; // [sp+18h] [bp-Ch]

  while ( 1 )
  {
    v2 = a1;
    v3 = a2;
    v26 = a2;
    sub_22146C((int *)&v27, a1, a2, 0, 0);
    v4 = *(const char **)&aVoidSymbolCach[4 * v3 + 1588];
    v5 = v2 ? sub_259F10("All %ss matching regular expression \"%s\":\n", v4, v2) : sub_259F10("All defined %ss:\n", v4);
    v6 = (int *)v27;
    v7 = (int *)ptr;
    if ( v27 == ptr )
      break;
    v8 = 0;
    v9 = 1;
    while ( 1 )
    {
      while ( 1 )
      {
        sub_258BD4(v5);
        v14 = v6[2];
        if ( v14 )
          break;
        LODWORD(v21) = sub_21B630(v26, v6[1], *v6, v8);
        v22 = v6[1];
        if ( (*(_BYTE *)(v22 + 33) & 1) == 0 )
          goto LABEL_28;
        v5 = ((int (__fastcall *)(_DWORD))loc_2043D4)(*(_DWORD *)(v22 + 28));
        v6 += 4;
        v8 = (const char *)v5;
        if ( v7 == v6 )
        {
LABEL_19:
          v7 = (int *)v27;
          goto LABEL_20;
        }
      }
      if ( v9 )
      {
        sub_259F10("\nNon-debugging symbols:\n");
        v14 = v6[2];
      }
      v15 = v6[3];
      v16 = sub_1B7250(v15);
      v17 = ((int (__fastcall *)(int))loc_16666C)(v16) <= 32;
      v18 = *(__int16 *)(v14 + 22);
      v19 = *(_DWORD *)(v14 + 8);
      if ( !v17 )
      {
        if ( v18 == -1 )
        {
          sub_94700((int)"symtab.c", 4555, "Section index is uninitialized");
          v23 = v27;
          if ( v27 )
            sub_339E64(v27);
          sub_338FFC(v23);
        }
        v20 = *(_DWORD *)(*(_DWORD *)(v15 + 144) + 4 * v18);
        v11 = sub_98B60(v19 + v20, 0, 16, v20, v24, v25);
        goto LABEL_7;
      }
      if ( v18 == -1 )
        break;
      v10 = *(_DWORD *)(*(_DWORD *)(v15 + 144) + 4 * v18);
      v11 = sub_98B60(v19 + v10, 0, 8, v10, v24, v25);
LABEL_7:
      v12 = (const char *)v11;
      if ( dword_46D448 )
        v13 = (const char *)sub_21B3C4(v14);
      else
        v13 = *(const char **)v14;
      v5 = sub_259F10("%s  %s\n", v12, v13);
      v6 += 4;
      v9 = 0;
      if ( v7 == v6 )
        goto LABEL_19;
    }
    v21 = sub_94700((int)"symtab.c", 4551, "Section index is uninitialized");
LABEL_28:
    a1 = (char *)((int (__fastcall *)(_DWORD, _DWORD))loc_21A4BC)(v21, HIDWORD(v21));
    a2 = 2;
  }
LABEL_20:
  if ( v7 )
    sub_339E64(v7);
}
