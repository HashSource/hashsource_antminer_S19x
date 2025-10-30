void sub_21B418()
{
  _DWORD *v0; // r5
  int *v1; // r9
  const char *v2; // r2
  _DWORD *v3; // r0
  _DWORD *v4; // r8
  _DWORD *v5; // r7
  int v6; // r0
  int v7; // r4
  int v8; // r0
  _DWORD *v9; // r4
  unsigned int v10; // r6
  int v11; // r9
  char *v12; // r10
  const char *v13; // r8
  const char *v14; // r0
  int v15; // r3
  char *v16; // r0
  int v17; // r10
  char *v18; // r8
  int v19; // r0
  int v20; // [sp+14h] [bp-18h]
  _DWORD *v21; // [sp+18h] [bp-14h]
  int *v22; // [sp+20h] [bp-Ch]

  v0 = (_DWORD *)dword_487D28;
  if ( dword_487D28 )
  {
    v1 = &dword_489700;
    while ( 1 )
    {
      while ( 1 )
      {
        v6 = v0[8];
        v7 = v0[1];
        v2 = v6 ? (const char *)sub_1B87A8(v6) : "(no object file)";
        sub_259F10("Symbol cache for pspace %d\n%s:\n", v7, v2);
        v3 = (_DWORD *)sub_1CD14C((int)v0, (_DWORD *)*v1);
        v4 = v3;
        if ( v3 )
          break;
        sub_259F10("  <empty>\n");
        v0 = (_DWORD *)*v0;
        if ( !v0 )
          return;
      }
      v5 = (_DWORD *)*v3;
      if ( *v3 )
        break;
      sub_259F10("  <disabled>\n");
LABEL_7:
      v0 = (_DWORD *)*v0;
      if ( !v0 )
        return;
    }
    v8 = sub_259F10("Global symbols:\n");
    v20 = 0;
    if ( !v5[3] )
      goto LABEL_23;
    while ( 1 )
    {
      v9 = v5;
      v10 = 0;
      v21 = v4;
      v22 = v1;
      do
      {
        v8 = sub_258BD4(v8);
        v15 = v9[4];
        if ( v15 == 1 )
        {
          v16 = sub_98EEC(v9[5]);
          v17 = v9[6];
          v18 = v16;
          v19 = ((int (__fastcall *)(_DWORD))loc_21A5A4)(v9[7]);
          v8 = sub_259F10("  [%4u] = %s, %s %s (not found)\n", v10, v18, v17, v19);
        }
        else if ( v15 == 2 )
        {
          v11 = v9[6];
          v12 = sub_98EEC(v9[5]);
          if ( dword_46D448 )
            v13 = (const char *)sub_21B3C4(v11);
          else
            v13 = *(const char **)v11;
          v14 = (const char *)((int (__fastcall *)(int))loc_21A5A4)(*(_BYTE *)(v11 + 32) & 7);
          v8 = sub_259F10("  [%4u] = %s, %s %s\n", v10, v12, v13, v14);
        }
        ++v10;
        v9 += 4;
      }
      while ( v5[3] > v10 );
      v4 = v21;
      v1 = v22;
      if ( v20 == 1 )
        goto LABEL_7;
LABEL_23:
      v5 = (_DWORD *)v4[1];
      v20 = 1;
      v8 = sub_259F10("Static symbols:\n");
      if ( !v5[3] )
        goto LABEL_7;
    }
  }
}
