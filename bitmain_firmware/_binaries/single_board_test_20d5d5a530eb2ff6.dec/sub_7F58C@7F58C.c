int __fastcall sub_7F58C(int *a1, int a2, int a3, int a4)
{
  _DWORD *v8; // r6
  int v9; // r7
  int v10; // r8
  int v11; // r0
  int v12; // r0
  int v14; // r8
  __int16 *v15; // r3
  __int16 v16; // r3
  __int16 v17; // r3
  int v18; // r1
  int v19; // r2
  int v20; // r3
  char v21; // r3
  char v22; // r3
  char v23; // r3
  char v24; // r3
  char v25; // r3
  char v26; // r3
  char v27; // r3
  int v28; // r1
  int v29; // r0
  int v30; // r1
  int v31; // r0
  int v32; // [sp+1Ch] [bp-20h] BYREF
  __int64 v33; // [sp+20h] [bp-1Ch]
  __int64 v34; // [sp+28h] [bp-14h] BYREF
  char v35; // [sp+30h] [bp-Ch]
  char v36; // [sp+31h] [bp-Bh]
  char v37; // [sp+32h] [bp-Ah]
  char v38; // [sp+33h] [bp-9h]
  char v39; // [sp+34h] [bp-8h]

  if ( a4 )
  {
    v8 = a1 + 970;
    v9 = a1[256];
    v10 = a1[50] & 2;
  }
  else
  {
    v8 = a1 + 968;
    v9 = a1[248];
    v10 = a1[50] & 1;
  }
  v11 = sub_D8D8C(v9);
  v12 = sub_D8C78(v11);
  if ( v12 < 0 )
    return 0;
  v32 = v12;
  if ( v10 )
  {
    v14 = 0;
  }
  else
  {
    v29 = sub_D14F4();
    v14 = v29;
    if ( !v29 )
      goto LABEL_35;
    v30 = v9;
    v9 = v29;
    if ( !sub_D18D8(v29, v30) )
      goto LABEL_35;
  }
  if ( (*(_DWORD *)(*(_DWORD *)(a1[1] + 100) + 48) & 8) != 0 )
  {
    v15 = (__int16 *)a1[974];
    if ( a4 )
      v16 = v15[1];
    else
      v16 = *v15;
    LOBYTE(v33) = HIBYTE(v16);
    BYTE1(v33) = v16;
    v17 = *((_WORD *)v8 + 3);
    *(_DWORD *)((char *)&v33 + 2) = *(_DWORD *)((char *)v8 + 2);
    HIWORD(v33) = v17;
    v34 = v33;
  }
  else
  {
    v28 = v8[1];
    LODWORD(v34) = *v8;
    HIDWORD(v34) = v28;
  }
  v18 = *a1;
  v19 = *(_DWORD *)(a2 + 8);
  v20 = *(_DWORD *)(a2 + 4);
  v37 = *a1;
  v39 = v19;
  v35 = v20;
  v36 = BYTE1(v18);
  v38 = BYTE1(v19);
  if ( a4
    || (*(_DWORD *)a1[31] & 0x100) != 0
    || (v31 = sub_D8920(a1[243]), (sub_D8928(v31) & 0xF0007) != 2)
    || !sub_819C8(v9) )
  {
    if ( sub_D16D8(v9, &v34, 13) <= 0
      || sub_D16D8(v9, *(_DWORD *)(a2 + 24), *(_DWORD *)(a2 + 8)) <= 0
      || sub_D9644(v9, a3, &v32) <= 0 )
    {
      goto LABEL_35;
    }
  }
  else if ( sub_819EC(
              v9,
              a3,
              (int)&v32,
              (int)&v34,
              *(void **)(a2 + 24),
              *(_DWORD *)(a2 + 8) + v32,
              *(_DWORD *)(a2 + 12),
              (void *)(a1[31] + 8),
              *(_DWORD *)(a1[31] + 4),
              0) <= 0 )
  {
LABEL_35:
    sub_D1504(v14);
    return 0;
  }
  sub_D1504(v14);
  if ( (*(_DWORD *)(*(_DWORD *)(a1[1] + 100) + 48) & 8) == 0 )
  {
    v21 = *((_BYTE *)v8 + 7) + 1;
    *((_BYTE *)v8 + 7) = v21;
    if ( !v21 )
    {
      v22 = *((_BYTE *)v8 + 6) + 1;
      *((_BYTE *)v8 + 6) = v22;
      if ( !v22 )
      {
        v23 = *((_BYTE *)v8 + 5) + 1;
        *((_BYTE *)v8 + 5) = v23;
        if ( !v23 )
        {
          v24 = *((_BYTE *)v8 + 4) + 1;
          *((_BYTE *)v8 + 4) = v24;
          if ( !v24 )
          {
            v25 = *((_BYTE *)v8 + 3) + 1;
            *((_BYTE *)v8 + 3) = v25;
            if ( !v25 )
            {
              v26 = *((_BYTE *)v8 + 2) + 1;
              *((_BYTE *)v8 + 2) = v26;
              if ( !v26 )
              {
                v27 = *((_BYTE *)v8 + 1) + 1;
                *((_BYTE *)v8 + 1) = v27;
                if ( !v27 )
                  ++*(_BYTE *)v8;
              }
            }
          }
        }
      }
    }
  }
  return 1;
}
