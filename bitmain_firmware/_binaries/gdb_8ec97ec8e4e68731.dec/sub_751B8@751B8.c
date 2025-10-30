int __fastcall sub_751B8(int a1, int a2, int a3)
{
  int v6; // r0
  int v7; // lr
  _DWORD *v8; // r12
  unsigned __int8 *v9; // r6
  int v10; // r3
  int v11; // r2
  int v12; // r3
  int v13; // r3
  int v15; // r2
  int v16; // r3
  _BOOL4 v17; // r9
  _DWORD *v18; // r3
  unsigned int v19; // r3
  int v20; // r2
  int v21; // lr
  int v22; // r1
  bool v23; // zf
  int v24; // r0
  int v25; // r2
  int v26; // r3
  int v27; // r0
  int v28; // [sp+Ch] [bp-30h] BYREF
  int v29; // [sp+10h] [bp-2Ch]
  _DWORD v30[2]; // [sp+14h] [bp-28h] BYREF
  int v31; // [sp+1Ch] [bp-20h]
  _DWORD v32[7]; // [sp+20h] [bp-1Ch] BYREF

  v6 = sub_1C3E58(dword_474AB0, dword_474AB4);
  v7 = *(_DWORD *)(a1 + 4);
  v30[1] = 0;
  v8 = v30;
  v30[0] = 0;
  v9 = (unsigned __int8 *)v6;
  v31 = 0;
  if ( !*(_DWORD *)(*(_DWORD *)v7 + 84) )
    v8 = 0;
  sub_21D6B0(&v28, v6, a2, 1, v8);
  v10 = v28;
  if ( !v28 )
  {
    v16 = v30[0];
    if ( !v30[0] )
      goto LABEL_34;
    if ( v31 && (*(_BYTE *)(*(_DWORD *)(v31 + 8) + 12) & 0x40) != 0 )
    {
      sub_21D6B0(&v28, v9, a2, 2, v32);
      v10 = v28;
      if ( v28 )
      {
LABEL_33:
        dword_474AB8 = *(_DWORD *)(v10 + 24);
        return 267;
      }
      v16 = v30[0];
    }
    v17 = a3 != 0;
    if ( !v16 )
      v17 = 1;
    if ( v17 )
    {
LABEL_34:
      v24 = sub_21AB84(v9);
      if ( v24 )
      {
        v13 = 318;
        dword_474AB0 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v24 + 4) + 32) + 12);
        return v13;
      }
    }
    v18 = *(_DWORD **)(a1 + 4);
    if ( *(_DWORD *)(*v18 + 8) == 3 )
    {
      v26 = sub_1B51D8(v18[1], v9);
      if ( v26 )
      {
        dword_474ABC = v26;
        v27 = sub_1B5150(v9, dword_487CD0, 1);
        v13 = 268;
        if ( v27 )
          dword_474AB8 = *(_DWORD *)(v27 + 24);
        return v13;
      }
    }
    v19 = *v9;
    if ( v19 <= 0x60 )
    {
      if ( v19 <= 0x40 )
        goto LABEL_24;
      v20 = dword_46DE54;
    }
    else
    {
      v20 = dword_46DE54;
      if ( v19 < dword_46DE54 + 87 )
      {
LABEL_23:
        if ( sub_74B78(a1, v9, dword_474AB4, 0, (int)v32) == 258 )
        {
          v25 = v30[0];
          v28 = 0;
          v13 = 270;
          if ( v30[0] )
            v25 = 1;
          dword_474AC0 = v25;
          dword_474AB8 = 0;
          dword_474ABC = v29;
          return v13;
        }
LABEL_24:
        v28 = 0;
        v21 = v30[0];
        if ( v30[0] )
          v21 = 1;
        dword_474AC0 = v21;
        dword_474AB8 = 0;
        dword_474ABC = v29;
        v22 = *(_DWORD *)(**(_DWORD **)(a1 + 4) + 8);
        v23 = v22 == 4;
        if ( v22 == 4 )
          v23 = v30[0] == 0;
        if ( v23 )
        {
          sub_1B141C((int)v32, (char *)v9);
          if ( !v32[0] )
            return 265;
        }
        return 264;
      }
    }
    if ( v19 >= v20 + 55 )
      goto LABEL_24;
    goto LABEL_23;
  }
  v11 = *((_DWORD *)off_46DBB8 + 4 * (*(unsigned __int8 *)(v28 + 32) >> 3));
  if ( v11 != 10 )
  {
    if ( v11 != 8 )
    {
      v12 = v30[0];
      if ( v30[0] )
        v12 = 1;
      dword_474AB8 = v28;
      dword_474ABC = v29;
      dword_474AC0 = v12;
      return 264;
    }
    goto LABEL_33;
  }
  v15 = v30[0];
  if ( v30[0] )
    v15 = 1;
  dword_474AB8 = v28;
  dword_474ABC = v29;
  dword_474AC0 = v15;
  return 317;
}
