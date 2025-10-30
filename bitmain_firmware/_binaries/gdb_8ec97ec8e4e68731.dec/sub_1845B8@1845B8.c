int __fastcall sub_1845B8(int a1)
{
  _DWORD *v1; // r4
  const char **v2; // r5
  const char *v3; // r0
  int v4; // r6
  bool v5; // zf
  __int64 v6; // r0
  const char *v7; // t1
  int v8; // r0
  const char *v9; // t1
  int i; // r9
  int v11; // r0
  int v12; // r7
  _DWORD *v13; // r0
  int v14; // r2
  _DWORD *v15; // r5
  int v16; // r3
  const char **v18; // [sp+0h] [bp-2Ch] BYREF
  _BYTE v19[36]; // [sp+4h] [bp-28h] BYREF

  if ( !a1 )
  {
    v1 = (_DWORD *)dword_487914;
    v18 = (const char **)dword_487D2C;
    ((void (__fastcall *)(_BYTE *))loc_23FF20)(v19);
LABEL_27:
    v4 = 1;
LABEL_20:
    for ( i = 0; i != v4; ++i )
    {
      v11 = sub_1CD1E8();
      v12 = sub_1CD220(v11);
      v13 = sub_184018(0);
      v14 = *(_DWORD *)(v12 + 20);
      v15 = v13;
      v16 = v1[42];
      v13[9] = v12;
      v13[8] = v14;
      v13[42] = v16;
      if ( sub_235940(v13[41]) )
        sub_235958(v15, v1);
      sub_259F10("Added inferior %d.\n", v15[2]);
      ((void (__fastcall *)(_DWORD *))loc_183698)(v15);
      sub_23F9F0(dword_475848, dword_47584C, dword_475850);
      sub_1CD2E8(v12, v1[9]);
    }
    goto LABEL_24;
  }
  v1 = 0;
  v18 = 0;
  sub_25B0DC(&v18, a1);
  v2 = v18;
  v3 = *v18;
  if ( !*v18 )
  {
    sub_31DAD0(v18);
    v1 = (_DWORD *)dword_487914;
    v18 = (const char **)dword_487D2C;
    ((void (__fastcall *)(_BYTE *))loc_23FF20)(v19);
    goto LABEL_27;
  }
  v4 = 1;
  do
  {
    while ( *v3 == 45 )
    {
      v5 = strcmp(v3, "-copies") == 0;
      v3 = v2[1];
      if ( v5 )
      {
        if ( !v3 )
          sub_946E0("No argument to -copies");
        v6 = sub_14CC00((int)v3);
        v4 = v6;
        if ( (int)v6 < 0 )
          sub_946E0("Invalid copies number", HIDWORD(v6));
        v7 = v2[2];
        v2 += 2;
        v3 = v7;
      }
      else
      {
        ++v2;
      }
      if ( !v3 )
        goto LABEL_17;
    }
    if ( v1 )
      sub_946E0("Invalid argument");
    v8 = sub_14CC00((int)v3);
    v1 = (_DWORD *)dword_487918;
    if ( !dword_487918 )
LABEL_25:
      sub_946E0("Inferior ID %d not known.", v8);
    while ( v8 != v1[2] )
    {
      v1 = (_DWORD *)v1[1];
      if ( !v1 )
        goto LABEL_25;
    }
    v9 = v2[1];
    ++v2;
    v3 = v9;
  }
  while ( v9 );
LABEL_17:
  sub_31DAD0(v18);
  if ( !v1 )
    v1 = (_DWORD *)dword_487914;
  v18 = (const char **)dword_487D2C;
  ((void (__fastcall *)(_BYTE *))loc_23FF20)(v19);
  if ( v4 )
    goto LABEL_20;
LABEL_24:
  ((void (__fastcall *)(_BYTE *))loc_23FC8C)(v19);
  return ((int (__fastcall *)(const char **))loc_1CD290)(v18);
}
