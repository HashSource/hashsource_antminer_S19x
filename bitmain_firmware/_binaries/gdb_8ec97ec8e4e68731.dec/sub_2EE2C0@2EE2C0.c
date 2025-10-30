bool __fastcall sub_2EE2C0(int a1, int *a2, int a3)
{
  int v4; // r7
  _DWORD *v7; // r4
  int v8; // r10
  int v9; // r7
  int (__fastcall *v10)(_DWORD); // r3
  const char *v11; // r5
  int v12; // r0
  const char *v13; // r1
  int i; // r8
  int v15; // r8
  int v16; // r3
  int v17; // r4
  int v18; // [sp+4h] [bp-10h]
  int v19; // [sp+8h] [bp-Ch]

  v18 = *(_DWORD *)(*(_DWORD *)(a3 + 140) + 8);
  if ( a2[3] )
  {
    v4 = *a2;
    return (v4 & ~v18) == 0 && (v18 & a2[1]) == 0;
  }
  v7 = (_DWORD *)a2[2];
  v8 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 48) + 4) + 444);
  if ( !v7 )
  {
    v15 = 0;
    v9 = 0;
LABEL_19:
    v16 = *a2;
    v17 = a2[1];
    a2[3] = 1;
    v4 = v9 | v16;
    *a2 = v4;
    a2[1] = v17 | v15;
    return (v4 & ~v18) == 0 && (v18 & a2[1]) == 0;
  }
  v9 = 0;
  v19 = 0;
  while ( 1 )
  {
    v10 = *(int (__fastcall **)(_DWORD))(v8 + 280);
    v11 = (const char *)v7[1];
    if ( !v10 )
      break;
    v12 = v10(v7[1]);
    if ( !v12 )
    {
      v11 = (const char *)v7[1];
      break;
    }
    if ( *v7 )
    {
      if ( *v7 == 1 )
        v19 |= v12;
    }
    else
    {
      v9 |= v12;
    }
LABEL_24:
    v7[2] = 1;
LABEL_17:
    v7 = (_DWORD *)v7[3];
    if ( !v7 )
    {
      v15 = v19;
      goto LABEL_19;
    }
  }
  v13 = "SHF_WRITE";
  for ( i = 0; ; v13 = (&off_41AF90)[2 * i] )
  {
    if ( !strcmp(v11, v13) )
    {
      if ( *v7 )
      {
        if ( *v7 == 1 )
          v19 |= *(_DWORD *)&aElfLinkAdjustR[8 * i + 332];
      }
      else
      {
        v9 |= *(_DWORD *)&aElfLinkAdjustR[8 * i + 332];
      }
      goto LABEL_24;
    }
    if ( ++i == 12 )
      break;
  }
  if ( v7[2] )
    goto LABEL_17;
  (*(void (**)(const char *, ...))(*(_DWORD *)(a1 + 24) + 44))("Unrecognized INPUT_SECTION_FLAG %s\n", v11);
  return 0;
}
