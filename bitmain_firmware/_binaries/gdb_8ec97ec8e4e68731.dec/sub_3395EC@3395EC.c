bool __fastcall sub_3395EC(int a1, int a2, _DWORD *a3, int a4)
{
  int v7; // r9
  int v8; // r6
  int i; // r4
  int v10; // r2
  int v11; // r11
  int v12; // r5
  int v13; // r2
  char *v14; // r2
  int v15; // r5
  _BOOL4 v16; // r2
  int v17; // r1
  int v18; // r9
  int v20; // r1
  int v21; // r2
  int v22; // r3
  bool v23; // zf
  int v24; // [sp+4h] [bp-28h]
  int v27; // [sp+18h] [bp-14h] BYREF
  int v28; // [sp+1Ch] [bp-10h]
  int v29; // [sp+20h] [bp-Ch]
  int v30; // [sp+24h] [bp-8h]

  v7 = sub_33A304();
  if ( !v7 )
  {
    v24 = *(_DWORD *)(a4 + 8);
    if ( (v24 & 0x10) != 0 )
      v24 = *(_DWORD *)(a1 + 8);
    v8 = *(_DWORD *)(a1 + 12);
    for ( i = a1 + 8 * v8; v8; i -= 8 )
    {
      v10 = *(_DWORD *)(i + 12);
      v27 = 0;
      v28 = 0;
      v11 = v10 & 2;
      v12 = v10 & 1;
      v29 = v24;
      v30 = 0;
      if ( (v10 & 2) != 0 || (v24 & 1) != 0 )
      {
        if ( a3 )
        {
          v13 = v10 >> 8;
          if ( v12 )
            v13 = *(_DWORD *)(*a3 + v13);
          v14 = (char *)a3 + v13;
        }
        else
        {
          v14 = 0;
        }
        v7 = (*(int (__fastcall **)(_DWORD, int, char *, int *))(**(_DWORD **)(i + 8) + 24))(
               *(_DWORD *)(i + 8),
               a2,
               v14,
               &v27);
        if ( v7 )
        {
          if ( v30 == 8 )
            v15 = v12 & 1;
          else
            v15 = 0;
          if ( v15 )
            v30 = *(_DWORD *)(i + 8);
          v16 = v28 > 3;
          if ( v11 )
            v16 = 0;
          if ( v16 )
            v28 &= ~2u;
          v17 = *(_DWORD *)(a4 + 12);
          if ( v17 )
          {
            if ( *(_DWORD *)a4 != v27 )
            {
              *(_QWORD *)a4 = 0x200000000LL;
              return v7;
            }
            if ( !*(_DWORD *)a4 )
            {
              v23 = v30 == 8;
              if ( v30 != 8 )
                v23 = v17 == 8;
              if ( v23 || !sub_33A848(v30, v17) )
              {
                *(_DWORD *)(a4 + 4) = 2;
                return v7;
              }
            }
            *(_DWORD *)(a4 + 4) |= v28;
          }
          else
          {
            v20 = v28;
            v21 = v29;
            v22 = v30;
            *(_DWORD *)a4 = v27;
            *(_DWORD *)(a4 + 4) = v20;
            *(_DWORD *)(a4 + 8) = v21;
            *(_DWORD *)(a4 + 12) = v22;
            if ( v20 <= 3 )
              return v7;
            if ( (v20 & 2) != 0 )
            {
              if ( (*(_DWORD *)(a1 + 8) & 1) == 0 )
                return v7;
            }
            else if ( (v20 & 1) == 0 || (*(_DWORD *)(a1 + 8) & 2) == 0 )
            {
              return v7;
            }
          }
        }
      }
      --v8;
    }
    v18 = *(_DWORD *)(a4 + 4);
    return v18 != 0;
  }
  return v7;
}
