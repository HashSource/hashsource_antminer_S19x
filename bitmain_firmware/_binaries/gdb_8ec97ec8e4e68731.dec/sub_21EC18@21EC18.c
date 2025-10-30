int *__fastcall sub_21EC18(int *a1, int a2, int a3)
{
  int v3; // r6
  int v4; // r8
  int v5; // r9
  int v9; // r6
  int v10; // r3
  int v11; // r6
  unsigned int v12; // r8
  unsigned int v14; // r7
  int v15; // r3
  int v16; // r3
  __int64 v17; // r0
  int v18; // lr
  int v19; // r4
  int v20; // r0
  int v21; // r9
  unsigned int v22; // r5
  int v23; // r4
  _DWORD *v24; // r0
  int v25; // r2
  _DWORD *i; // r3
  int v27; // r8
  int v28; // r7
  int v29; // r4
  int *v30; // r4
  _DWORD *v31; // r2
  unsigned int v32; // [sp+0h] [bp-78h] BYREF
  unsigned int v33; // [sp+4h] [bp-74h] BYREF
  char v34[4]; // [sp+8h] [bp-70h] BYREF
  int v35; // [sp+Ch] [bp-6Ch]
  int v36; // [sp+18h] [bp-60h]
  int v37; // [sp+1Ch] [bp-5Ch]
  unsigned int v38; // [sp+20h] [bp-58h]
  char v39[4]; // [sp+30h] [bp-48h] BYREF
  int v40; // [sp+34h] [bp-44h]
  int v41; // [sp+40h] [bp-38h]
  unsigned int v42; // [sp+48h] [bp-30h]
  int v43; // [sp+5Ch] [bp-1Ch]
  int *v44; // [sp+60h] [bp-18h]
  int v45; // [sp+64h] [bp-14h]
  int v46; // [sp+68h] [bp-10h]
  int v47; // [sp+6Ch] [bp-Ch]
  int v48; // [sp+70h] [bp-8h]
  int v49; // [sp+74h] [bp-4h]

  if ( a2 )
  {
    if ( (*(_BYTE *)(a2 + 33) & 1) == 0 )
    {
      if ( *(__int16 *)(a2 + 22) < 0 )
      {
LABEL_4:
        v9 = 0;
        goto LABEL_9;
      }
      goto LABEL_23;
    }
    ((void (__fastcall *)(int, _DWORD))loc_21C1E0)(a2, 0);
  }
  v3 = *(__int16 *)(a2 + 22);
  if ( v3 < 0 )
    goto LABEL_4;
  if ( (*(_BYTE *)(a2 + 33) & 1) == 0 )
  {
LABEL_23:
    v17 = ((__int64 (*)(void))loc_16474)();
    v43 = a2;
    v44 = a1;
    v45 = v3;
    v46 = a3;
    v47 = v4;
    v48 = v5;
    v49 = v18;
    v19 = v17;
    sub_C37B8(SHIDWORD(v17), 0, &v32, &v33);
    v20 = ((int (__fastcall *)(int))loc_1696D8)(v19);
    v32 += v20;
    sub_21DEAC((int)v34, v32);
    v21 = v36;
    v22 = v38;
    if ( v36 )
    {
      v23 = v35;
      if ( *(_DWORD *)(v35 + 24) == 9 )
        goto LABEL_30;
      v24 = *(_DWORD **)(v35 + 8);
      v25 = 0;
      for ( i = v24; i[2] != v37 || !i[1]; i += 2 )
        ++v25;
      if ( v25 + 1 >= *v24 || (v31 = &v24[2 * v25], !v31[3]) || v31[4] != v32 )
      {
LABEL_30:
        if ( v33 > v38 )
        {
          while ( 1 )
          {
            sub_21DEAC((int)v39, v22);
            v27 = v40;
            v28 = v41;
            v29 = v40 != v23;
            if ( v41 >= v21 )
              v29 |= 1u;
            if ( !v41 )
              v29 = 1;
            if ( v29 )
              goto LABEL_41;
            v30 = sub_C2574(v22);
            if ( v30 )
              break;
LABEL_42:
            v22 = v42;
            v21 = v28;
            v23 = v27;
            if ( v33 <= v42 )
              goto LABEL_41;
          }
          while ( !sub_C23FC((int)v30) )
          {
            if ( !v30[2] )
            {
              v30 = (int *)v30[3];
              if ( v30 )
                continue;
            }
            goto LABEL_42;
          }
        }
      }
    }
LABEL_41:
    __asm { POP             {R4-R9,PC} }
  }
  v9 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a2 + 28) + 4) + 4) + 168) + 12 * v3;
LABEL_9:
  sub_21DF08(a1, **(_DWORD **)(a2 + 8), v9, 0);
  a1[2] = a2;
  if ( !a3 )
  {
    v12 = **(_DWORD **)(a2 + 8);
    if ( a1[5] < v12 )
    {
      memset(a1 + 1, 0, 0x24u);
      a1[5] = v12;
      a1[3] = v9;
      v16 = dword_487D2C;
      a1[2] = a2;
      *a1 = v16;
      return a1;
    }
    return a1;
  }
  v10 = a1[1];
  if ( v10 && ((*(_BYTE *)(*(_DWORD *)(v10 + 4) + 40) & 1) != 0 || *(_DWORD *)(v10 + 24) == 9) )
  {
    v11 = *(_DWORD *)(a2 + 28);
    if ( (*(_BYTE *)(a2 + 33) & 1) != 0 )
      v11 = sub_1B7250(*(_DWORD *)(*(_DWORD *)(v11 + 4) + 4));
    a1[5] = **(_DWORD **)(a2 + 8);
    if ( ((int (__fastcall *)(int))loc_168F04)(v11) )
      a1[5] = ((int (__fastcall *)(int, int))loc_168F50)(v11, a1[5]);
    return a1;
  }
  v14 = **(_DWORD **)(a2 + 8);
  if ( a1[5] < v14 )
  {
    memset(a1 + 1, 0, 0x24u);
    a1[5] = v14;
    a1[3] = v9;
    v15 = dword_487D2C;
    a1[2] = a2;
    *a1 = v15;
  }
  sub_21E6D0((int)a1);
  return a1;
}
