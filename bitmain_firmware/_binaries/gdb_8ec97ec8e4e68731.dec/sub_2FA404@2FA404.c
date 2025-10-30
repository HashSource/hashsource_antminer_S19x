int __fastcall sub_2FA404(int a1, int *a2, int a3, unsigned int a4, _DWORD *a5, _DWORD *a6)
{
  int *v6; // r6
  _DWORD *v10; // r7
  int v11; // r5
  int v12; // r11
  int v13; // r4
  int v14; // r10
  unsigned int v15; // r0
  unsigned int v16; // r3
  int v17; // r2
  int v18; // t1
  int result; // r0
  unsigned int v20; // r3
  unsigned int v21; // [sp+4h] [bp-10h]
  unsigned int v22; // [sp+Ch] [bp-8h] BYREF

  v6 = a2;
  if ( !a2 )
    return 0;
  if ( *(_DWORD *)(*(_DWORD *)(a1 + 4) + 4) != 5 )
    return 0;
  v10 = *(_DWORD **)(*(_DWORD *)(a1 + 160) + 564);
  if ( !v10 )
  {
    v10 = sub_2AD09C(a1, 0x10u);
    *(_DWORD *)(*(_DWORD *)(a1 + 160) + 564) = v10;
    if ( !v10 )
      return 0;
  }
  if ( *v10 == a3 )
  {
    result = v10[1];
    if ( result )
    {
      v20 = *(_DWORD *)(result + 8);
      if ( v20 <= a4 && v20 + v10[3] > a4 )
      {
LABEL_20:
        if ( a5 )
          *a5 = v10[2];
        if ( a6 )
          *a6 = *(_DWORD *)(result + 4);
        return result;
      }
    }
  }
  v11 = 0;
  v12 = *(_DWORD *)(*(_DWORD *)(a1 + 4) + 444);
  v10[1] = 0;
  v13 = *v6;
  *v10 = a3;
  v10[2] = 0;
  v10[3] = 0;
  if ( !v13 )
    return 0;
  v14 = 0;
  v21 = 0;
  do
  {
    if ( (*(_DWORD *)(v13 + 12) & 0x4000) != 0 )
    {
      v14 = v13;
      if ( v11 == 1 )
        v11 = 2;
    }
    else
    {
      v15 = (*(int (__fastcall **)(int, int, unsigned int *))(v12 + 364))(v13, a3, &v22);
      if ( v15 )
      {
        v16 = v22;
        if ( v22 <= a4 && (v22 > v21 || v22 == v21 && v10[3] < v15) )
        {
          v10[1] = v13;
          v10[3] = v15;
          v10[2] = 0;
          if ( v14 )
          {
            v17 = *(_DWORD *)(v13 + 12);
            if ( v11 != 2 )
              LOBYTE(v17) = v17 | 1;
            if ( (v17 & 1) == 0 )
            {
              v21 = v16;
              v11 = 2;
              goto LABEL_18;
            }
            v21 = v16;
            v10[2] = *(_DWORD *)(v14 + 4);
          }
          else
          {
            v21 = v16;
          }
        }
      }
      if ( !v11 )
        v11 = 1;
    }
LABEL_18:
    v18 = v6[1];
    ++v6;
    v13 = v18;
  }
  while ( v18 );
  result = v10[1];
  if ( result )
    goto LABEL_20;
  return 0;
}
