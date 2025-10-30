int __fastcall sub_37744(int a1, _DWORD *a2, __int64 a3)
{
  int v5; // r0
  int v6; // r0
  int v8; // r5
  int v9; // r0
  int v10; // r5
  const char *v11; // r0
  int v12; // r6
  char *v13; // r8
  int v14; // r0
  char *v15; // r6
  __int64 v16; // r8
  int v17; // r1
  char *v18; // r0
  __int64 v19; // r0
  int v20; // r2
  __int64 v21; // r6
  int v22; // r0
  int v23; // r5
  const char *v24; // r0
  char *v25; // r6
  int v26; // r7
  int v27; // r0
  __int64 v28; // [sp+0h] [bp-34h] BYREF
  char *v29; // [sp+8h] [bp-2Ch]
  int v30; // [sp+Ch] [bp-28h]

  v5 = sub_1DD58C(a1);
  v6 = ((int (__fastcall *)(int))loc_165BB8)(v5);
  if ( !a3 )
    return 0;
  v8 = v6;
  if ( sub_1DC3D4(a3, a2[23]) )
    return -1;
  v9 = sub_230020(a3, &v28, a2[23]);
  if ( v9 )
  {
    if ( !dword_487D4C )
      return -1;
    v10 = *(_DWORD *)sub_242FC8(v9);
    v11 = (const char *)sub_989F0(a3, HIDWORD(a3), *a2);
    sub_2594B0(v10, "Process record: error reading memory at addr = 0x%s len = %d.\n", v11, a2[23]);
    return -1;
  }
  else
  {
    v12 = sub_15C250(&v28, *a2, v8);
    v13 = (char *)&v28 + *a2;
    v14 = sub_15C250(v13, a2[20], v8);
    if ( sub_1DC3D4(v12, v14) )
      return -1;
    v15 = &v13[*a2];
    v16 = sub_15C250(v15, *a2, v8);
    v17 = *a2;
    v18 = &v15[*a2];
    v29 = v18;
    if ( v16 )
    {
      v19 = sub_15C250(v18, a2[64], v8);
      v20 = a2[65];
      v28 = v19;
      if ( v19 )
      {
        v21 = 0;
        while ( !sub_230020(v16, &v28, v20) )
        {
          v30 = sub_15C250(&v28, *a2, v8);
          v22 = sub_15C250((char *)&v28 + *a2, a2[64], v8);
          if ( sub_1DC3D4(v30, v22) )
            return -1;
          v20 = a2[65];
          v16 += v20;
          if ( ++v21 == v28 )
            goto LABEL_17;
        }
        if ( dword_487D4C )
        {
          v23 = *(_DWORD *)sub_242FC8(&v28);
          v24 = (const char *)sub_989F0(v16, HIDWORD(v16), *a2);
          sub_2594B0(v23, "Process record: error reading memory at addr = 0x%s len = %d.\n", v24, a2[65]);
        }
        return -1;
      }
LABEL_17:
      v17 = *a2;
    }
    v25 = &v29[a2[64]];
    v26 = sub_15C250(v25, v17, v8);
    v27 = sub_15C250(&v25[*a2], a2[64], v8);
    return -(sub_1DC3D4(v26, v27) != 0);
  }
}
