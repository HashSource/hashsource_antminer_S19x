int __fastcall sub_15FE8C(int a1, int a2, int a3, int a4, int a5)
{
  int v5; // r5
  int i; // r6
  int v8; // r10
  _DWORD *v9; // r3
  int v10; // r0
  int v11; // r6
  int v12; // [sp+20h] [bp-88h] BYREF
  int v13; // [sp+24h] [bp-84h]
  int v14; // [sp+28h] [bp-80h]
  int v15; // [sp+2Ch] [bp-7Ch]
  int v16; // [sp+30h] [bp-78h]
  int v17; // [sp+34h] [bp-74h]
  int v18; // [sp+38h] [bp-70h]
  int v19; // [sp+3Ch] [bp-6Ch]
  int v20; // [sp+40h] [bp-68h]
  int v21; // [sp+44h] [bp-64h]
  _DWORD var60[32]; // [sp+48h] [bp-60h] BYREF
  int varg_r0; // [sp+C8h] [bp+20h]
  int varg_r1; // [sp+CCh] [bp+24h]
  int varg_r2; // [sp+D0h] [bp+28h]
  int varg_r3; // [sp+D4h] [bp+2Ch]

  varg_r0 = a1;
  varg_r1 = a2;
  varg_r2 = a3;
  varg_r3 = a4;
  v5 = sub_15CD58(a1, a2, a3, a4, a5);
  if ( v5 )
  {
    if ( sub_15D0C4(varg_r0, varg_r1, varg_r2, varg_r3, a5, 0, 0, 0, 0x12u, 0) )
    {
      return dword_487758;
    }
    else
    {
      v17 = varg_r0;
      v18 = varg_r1;
      v19 = varg_r2;
      v20 = varg_r3;
      v21 = a5;
      var60[12] = varg_r0;
      var60[13] = varg_r1;
      var60[14] = varg_r2;
      var60[15] = varg_r3;
      var60[16] = a5;
      v5 = sub_323E3C(dword_487720, var60);
      if ( !v5 )
      {
        for ( i = sub_15F70C(0); ; i = v8 )
        {
          ((void (__fastcall *)(int *, int))loc_15CFA0)(&v12, i);
          if ( sub_15D0C4(varg_r0, varg_r1, varg_r2, varg_r3, a5, v12, v13, v14, v15, v16) )
            break;
          v8 = ((int (__fastcall *)(int))loc_15FA88)(i);
          if ( !v8 )
            return v5;
          v9 = *(_DWORD **)(i + 16);
          if ( !v9 )
          {
            sub_160DD4(i, i + 12);
            v9 = *(_DWORD **)(i + 16);
          }
          if ( !*v9 )
          {
            v10 = sub_15DB40(*(int **)(i + 76));
            if ( !((int (__fastcall *)(int, int, int, int, int, int, int, int, int, int, int))loc_15C7F0)(
                    v10,
                    varg_r0,
                    varg_r1,
                    varg_r2,
                    varg_r3,
                    a5,
                    v12,
                    v13,
                    v14,
                    v15,
                    v16) )
            {
              v11 = sub_15DB40(*(int **)(v8 + 76));
              ((void (__fastcall *)(_DWORD *, int))loc_15CFA0)(var60, v8);
              if ( ((int (__fastcall *)(int, int, int, int, int, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))loc_15C7F0)(
                     v11,
                     varg_r0,
                     varg_r1,
                     varg_r2,
                     varg_r3,
                     a5,
                     var60[0],
                     var60[1],
                     var60[2],
                     var60[3],
                     var60[4]) )
              {
                return v5;
              }
            }
          }
        }
        return i;
      }
    }
  }
  return v5;
}
