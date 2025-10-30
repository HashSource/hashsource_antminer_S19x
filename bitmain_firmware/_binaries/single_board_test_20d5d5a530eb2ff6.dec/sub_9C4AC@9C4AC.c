int __fastcall sub_9C4AC(_DWORD *a1, _DWORD *a2)
{
  unsigned int v3; // r3
  unsigned __int8 *v5; // r6
  int v6; // r3
  int v7; // r0
  void (__fastcall *v8)(int, _DWORD, int); // r5
  int v9; // r3
  int v10; // r1
  int v12; // r0
  int v13; // r2
  _DWORD *v14; // r2
  int v15; // r5
  int v16; // r5
  int v17; // [sp+10h] [bp-Ch] BYREF
  int v18; // [sp+14h] [bp-8h] BYREF

  v3 = a1[29];
  v5 = *(unsigned __int8 **)(a1[27] + 4);
  while ( 1 )
  {
    if ( v3 > 3 )
    {
      while ( !a1[7] )
      {
        v6 = *v5;
        if ( a1[16] == 1 || *v5 || v5[1] )
          goto LABEL_16;
        v6 = v5[2];
        if ( v5[2] )
        {
          v6 = v5[1];
          goto LABEL_16;
        }
        v7 = v5[3];
        if ( v5[3] )
          goto LABEL_16;
        v8 = (void (__fastcall *)(int, _DWORD, int))a1[33];
        a1[29] = v7;
        if ( !v8 )
        {
          v3 = 0;
          goto LABEL_11;
        }
        v8(v7, *a1, 22);
        v3 = a1[29];
        if ( v3 <= 3 )
          goto LABEL_11;
      }
      v6 = *v5;
LABEL_16:
      *a2 = v6;
      *(_DWORD *)(a1[31] + 524) = *v5;
      if ( sub_7EF80((int)(a1 + 404)) )
      {
        v12 = sub_7EF90((int)(a1 + 404));
        v9 = 1;
        v13 = *(_DWORD *)(a1[27] + 4);
        *(_DWORD *)(a1[31] + 520) = v12 + 4;
        a1[29] = 4;
        a1[28] = v13;
      }
      else
      {
        v9 = 1;
        v10 = *(_DWORD *)(a1[27] + 4) + 4;
        *(_DWORD *)(a1[31] + 520) = (v5[2] << 8) | (v5[1] << 16) | v5[3];
        a1[28] = v10;
        a1[29] = 0;
      }
      return v9;
    }
LABEL_11:
    if ( (*(int (__fastcall **)(_DWORD *, int, int *, unsigned __int8 *, unsigned int, _DWORD, int *))(a1[1] + 56))(
           a1,
           22,
           &v17,
           &v5[v3],
           4 - v3,
           0,
           &v18) <= 0 )
    {
      a1[5] = 3;
      return 0;
    }
    if ( v17 == 20 )
    {
      if ( a1[29] || v18 != 1 || *v5 != 1 )
      {
        sub_95494(a1, 10, 387, 103, (int)"ssl/statem/statem_lib.c", 1176);
        return 0;
      }
      v9 = a1[16];
      v14 = (_DWORD *)a1[31];
      if ( v9 || (*v14 & 0x800) == 0 )
      {
        v15 = a1[27];
        *a2 = 257;
        v9 = 1;
        v16 = *(_DWORD *)(v15 + 4);
        v14[131] = 257;
        a1[29] = 0;
        a1[28] = v16;
        v14[130] = 1;
      }
      return v9;
    }
    if ( v17 != 22 )
      break;
    v3 = v18 + a1[29];
    a1[29] = v3;
  }
  sub_95494(a1, 10, 387, 133, (int)"ssl/statem/statem_lib.c", 1198);
  return 0;
}
