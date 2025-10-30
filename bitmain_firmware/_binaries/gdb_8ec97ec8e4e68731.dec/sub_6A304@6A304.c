int *__fastcall sub_6A304(int a1)
{
  int v2; // r0
  _DWORD *v3; // r1
  int v4; // r4
  _DWORD *v5; // r0
  bool v6; // zf
  int *v7; // r8
  int v8; // r0
  int v9; // r1
  int v10; // r12
  int *v11; // r3
  int v12; // r1
  int v13; // t1
  int v14; // r0
  int v15; // r5
  int v16; // r6
  unsigned int v17; // r12
  _DWORD *v18; // r0
  int v19; // r3
  int v20; // r2
  int v21; // t1
  unsigned int v22; // r1
  unsigned int v23; // r2
  _BOOL4 v24; // r3
  _DWORD savedregs[8]; // [sp+0h] [bp-1Ch] BYREF

  if ( sub_2DB184(a1) == -1 )
    return 0;
  v2 = sub_2DB1B8(a1, savedregs);
  if ( v2 <= 0 )
    return 0;
  v3 = savedregs;
  v4 = 0;
  v5 = &savedregs[8 * v2];
  do
  {
    v6 = *v3 == 1;
    if ( *v3 == 1 )
      savedregs[v4] = v3;
    v3 += 8;
    if ( v6 )
      ++v4;
  }
  while ( v3 != v5 );
  if ( !v4 )
    return 0;
  v7 = (int *)sub_93094(1, 0x10u);
  *v7 = v4;
  v7[1] = sub_93094(v4, 4u);
  v8 = sub_93094(v4, 4u);
  v9 = v7[1];
  v10 = v8 - 4;
  v7[2] = v8;
  v11 = savedregs;
  v12 = v9 - 4;
  do
  {
    v13 = *v11++;
    *(_DWORD *)(v12 + 4) = *(_DWORD *)(v13 + 12);
    v12 += 4;
    *(_DWORD *)(v10 + 4) = *(_DWORD *)(v13 + 24);
    v10 += 4;
  }
  while ( v11 != &savedregs[v4] );
  v14 = sub_93094(*(_DWORD *)(a1 + 108), 4u);
  v15 = *(_DWORD *)(a1 + 100);
  v7[3] = v14;
  if ( v15 )
  {
    v16 = 0;
    do
    {
      if ( (*(_DWORD *)(v15 + 20) & 1) != 0 )
      {
        v17 = *(_DWORD *)(v15 + 28);
        v18 = &savedregs[-1];
        v19 = 0;
        while ( 1 )
        {
          v21 = v18[1];
          ++v18;
          v20 = v21;
          v22 = *(_DWORD *)(v21 + 24);
          if ( v22 )
          {
            v23 = *(_DWORD *)(v20 + 12);
            if ( v23 <= v17 && v22 > v17 - v23 )
              break;
          }
          if ( v4 == ++v19 )
          {
            v19 = v4;
            goto LABEL_21;
          }
        }
        *(_DWORD *)(v7[3] + 4 * v16) = v19 + 1;
LABEL_21:
        v24 = v19 == v4;
        if ( !*(_DWORD *)(v15 + 36) )
          v24 = 0;
        if ( v24 && (*(_DWORD *)(v15 + 20) & 2) != 0 )
          sub_946B0("Loadable section \"%s\" outside of ELF segments", *(const char **)v15);
      }
      v15 = *(_DWORD *)(v15 + 12);
      ++v16;
    }
    while ( v15 );
  }
  return v7;
}
