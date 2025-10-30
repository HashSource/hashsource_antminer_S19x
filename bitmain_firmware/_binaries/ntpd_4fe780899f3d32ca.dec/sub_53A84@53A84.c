__int16 *__fastcall sub_53A84(int a1)
{
  int v1; // r7
  int v2; // r5
  int *v3; // r4
  __int16 *result; // r0
  int v5; // r2
  int v6; // r12
  int v7; // r1
  int v8; // r12
  int v9; // r2
  int v10; // r3
  int v11; // r1
  _DWORD *v12; // r2
  bool v13; // zf
  int v14; // r0
  double v15; // d7
  char v16; // [sp+22h] [bp-2Eh] BYREF
  char v17; // [sp+23h] [bp-2Dh] BYREF
  unsigned int v18; // [sp+24h] [bp-2Ch] BYREF
  _DWORD v19[2]; // [sp+28h] [bp-28h] BYREF
  char v20; // [sp+30h] [bp-20h] BYREF
  char v21; // [sp+3Ch] [bp-14h] BYREF
  unsigned __int8 v22; // [sp+45h] [bp-Bh]
  char v23; // [sp+48h] [bp-8h]

  v1 = *(_DWORD *)(a1 + 4);
  v2 = *(_DWORD *)(v1 + 84);
  v3 = *(int **)v2;
  result = (__int16 *)sub_39EE4(a1, *(bool **)(*(_DWORD *)v2 + 4), v2 + 182 - *(_DWORD *)(*(_DWORD *)v2 + 4), v19);
  v5 = v3[1];
  v6 = v2 + 56;
  v3[1] = (int)result + v5 + 1;
  *((_BYTE *)result + v5) = 32;
  *(_BYTE *)v3[1] = 0;
  if ( *v3 )
  {
    v9 = v3[1];
    v10 = *v3 + 1;
    *v3 = v10;
    *(_DWORD *)(v2 + 184) = v9 - v6;
    if ( v10 > 2 )
    {
      if ( v9 - v6 > 45
        && sscanf(
             (const char *)(v2 + 56),
             "%c%2d:%2d:%2d.%3ld%c %9s%3d%13s%4ld",
             &v16,
             v2 + 196,
             v2 + 200,
             v2 + 204,
             v2 + 208,
             &v17,
             &v20,
             v2 + 192,
             &v21,
             &v18) == 10 )
      {
        v11 = *(_DWORD *)(v2 + 208);
        v12 = (_DWORD *)v22;
        v13 = v22 == 56;
        *(_DWORD *)(v2 + 208) = (_DWORD)&unk_F4240 * v11;
        if ( !v13 )
          *(_BYTE *)(v2 + 40) = 3;
        if ( v23 == 72 )
        {
          v14 = *(_DWORD *)"WWVH";
          *(_DWORD *)(v2 + 764) = *(_DWORD *)"WWVH";
        }
        else
        {
          v14 = *(_DWORD *)"WWV";
          strcpy((char *)(v2 + 764), "WWV");
        }
        if ( *(unsigned __int8 *)(v1 + 93) <= 1u )
          *(_DWORD *)(v1 + 112) = *(_DWORD *)(v2 + 764);
        if ( !v18 )
        {
          v14 = *(_DWORD *)(v2 + 232);
          v11 = *(_DWORD *)(v2 + 236);
          v12 = (_DWORD *)(v2 + 224);
        }
        v15 = (double)v18;
        if ( !v18 )
        {
          *v12 = v14;
          v12[1] = v11;
        }
        *(double *)(v2 + 248) = v15 * 0.00001 * 60.0;
        result = (__int16 *)sub_39CF8((_DWORD *)v2);
        if ( result )
        {
          if ( *(double *)(v1 + 632) > 1.5 )
            return (__int16 *)sub_39D44(v1);
        }
        else
        {
          return sub_394A0((__int16 *)v1, 6);
        }
      }
      else
      {
        return sub_394A0((__int16 *)v1, 2);
      }
    }
  }
  else
  {
    result = (__int16 *)v19[0];
    v7 = v19[1];
    v8 = v3[1] - v6;
    *(_DWORD *)(v2 + 232) = v19[0];
    *(_DWORD *)(v2 + 236) = v7;
    *v3 = 1;
    *(_DWORD *)(v2 + 184) = v8;
  }
  return result;
}
