int __fastcall sub_2ED50C(int a1, int a2, int a3)
{
  char v3; // r3
  int v5; // r1
  int v8; // r1
  int v9; // r9
  int v10; // r0
  int v11; // r10
  int v12; // r8
  int v13; // r5
  int v14; // r3
  int v15; // r1
  int v17; // r0
  int v18; // r0
  int v19; // [sp+8h] [bp-28h] BYREF
  unsigned int v20; // [sp+Ch] [bp-24h]
  unsigned int v21; // [sp+10h] [bp-20h]

  v3 = *(_BYTE *)(a2 + 24);
  v5 = *(_DWORD *)(a2 + 140);
  *(_BYTE *)(a2 + 24) = v3 | 8;
  v8 = *(_DWORD *)(v5 + 124);
  if ( v8 )
  {
    if ( (*(_BYTE *)(v8 + 24) & 8) == 0 )
    {
      v12 = sub_2ED50C(a1, v8, a3);
      if ( !v12 )
        return v12;
    }
  }
  v9 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a2 + 148) + 160) + 584);
  if ( (*(_DWORD *)(a2 + 20) & 4) == 0 || !*(_DWORD *)(a2 + 76) )
  {
    v13 = 1;
    v11 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a2 + 148) + 160) + 584);
    if ( v9 )
      v11 = 1;
    v12 = 1;
    goto LABEL_18;
  }
  if ( a2 == v9 )
  {
    v14 = *(_DWORD *)(a2 + 140);
    goto LABEL_27;
  }
  v10 = sub_2E297C(&v19, a1, a2);
  v11 = v9;
  if ( v9 )
    v11 = 1;
  v12 = v10;
  if ( v10 )
  {
    if ( v21 > v20 )
    {
      while ( sub_2ED6EC(a1, a2, a3, &v19) )
      {
        v20 += 12;
        if ( v20 >= v21 )
          goto LABEL_41;
      }
      v11 = 0;
      v13 = 0;
      v12 = 0;
    }
    else
    {
LABEL_41:
      v13 = 1;
      v12 = 1;
    }
    sub_2DBC08((int)&v19, a2);
LABEL_18:
    v14 = *(_DWORD *)(a2 + 140);
    if ( !v11 )
    {
LABEL_19:
      v15 = *(_DWORD *)(v14 + 132);
      if ( !v15 )
        v13 = 0;
      if ( v13 )
      {
        if ( (*(_BYTE *)(v15 + 24) & 8) != 0 )
        {
          return 1;
        }
        else
        {
          v18 = sub_2ED50C(a1, v15, a3);
          v12 = v18;
          if ( v18 )
            return 1;
        }
      }
      return v12;
    }
LABEL_27:
    if ( *(_DWORD *)(v14 + 128) )
    {
      v13 = sub_2E297C(&v19, a1, v9);
      if ( v13 )
      {
        v17 = sub_2F3264(a1, a2, v9, a3, &v19);
        v13 = v17;
        if ( v17 )
          v13 = 1;
        v12 = v13;
        sub_2DBC08((int)&v19, v9);
      }
      else
      {
        v12 = 0;
      }
      v14 = *(_DWORD *)(a2 + 140);
    }
    else
    {
      v13 = 1;
      v12 = 1;
    }
    goto LABEL_19;
  }
  return v12;
}
