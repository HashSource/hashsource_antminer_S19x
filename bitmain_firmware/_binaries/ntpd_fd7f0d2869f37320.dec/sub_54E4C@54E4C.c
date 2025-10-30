const char *__fastcall sub_54E4C(int a1)
{
  int v1; // r7
  char *v2; // r5
  int *v3; // r4
  _BYTE *v4; // r0
  int v5; // r2
  const char *result; // r0
  int v7; // r1
  int v8; // r3
  int v9; // r3
  int v10; // r2
  bool v11; // cc
  int v12; // r3
  bool v13; // zf
  unsigned int v14; // s15
  int v15; // r1
  char v16; // [sp+22h] [bp-2Eh] BYREF
  char v17; // [sp+23h] [bp-2Dh] BYREF
  unsigned int v18; // [sp+24h] [bp-2Ch] BYREF
  _DWORD v19[2]; // [sp+28h] [bp-28h] BYREF
  char v20; // [sp+30h] [bp-20h] BYREF
  char v21; // [sp+3Ch] [bp-14h] BYREF
  char v22; // [sp+45h] [bp-Bh]
  char v23; // [sp+48h] [bp-8h]

  v1 = *(_DWORD *)(a1 + 4);
  v2 = *(char **)(v1 + 84);
  v3 = *(int **)v2;
  v4 = sub_3A6D4(a1, *(bool **)(*(_DWORD *)v2 + 4), (int)&v2[-*(_DWORD *)(*(_DWORD *)v2 + 4) + 182], v19);
  v5 = v3[1];
  v3[1] = (int)&v4[v5 + 1];
  v4[v5] = 32;
  *(_BYTE *)v3[1] = 0;
  if ( *v3 )
  {
    v9 = *v3 + 1;
    v10 = v3[1];
    v11 = v9 <= 2;
    result = v2 + 56;
    *v3 = v9;
    v12 = v10 - (_DWORD)(v2 + 56);
    *((_DWORD *)v2 + 46) = v12;
    if ( !v11 )
    {
      if ( v12 > 45
        && sscanf(
             result,
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
        v13 = v22 == 56;
        *((_DWORD *)v2 + 52) *= (_DWORD)&unk_F4240;
        if ( !v13 )
          v2[40] = 3;
        if ( v23 == 72 )
          *((_DWORD *)v2 + 191) = *(_DWORD *)"WWVH";
        else
          strcpy(v2 + 764, "WWV");
        if ( *(unsigned __int8 *)(v1 + 93) <= 1u )
          *(_DWORD *)(v1 + 112) = *((_DWORD *)v2 + 191);
        v14 = v18;
        if ( !v18 )
        {
          v15 = *((_DWORD *)v2 + 59);
          *((_DWORD *)v2 + 56) = *((_DWORD *)v2 + 58);
          *((_DWORD *)v2 + 57) = v15;
        }
        *((double *)v2 + 31) = (double)v14 * 0.00001 * 60.0;
        result = (const char *)sub_3A4E8(v2);
        if ( result )
        {
          if ( *(double *)(v1 + 632) > 1.5 )
            return (const char *)sub_3A534(v1);
        }
        else
        {
          return (const char *)sub_39C88(v1, 6);
        }
      }
      else
      {
        return (const char *)sub_39C88(v1, 2);
      }
    }
  }
  else
  {
    result = (const char *)v19[0];
    v7 = v19[1];
    v8 = v3[1];
    *((_DWORD *)v2 + 58) = v19[0];
    *((_DWORD *)v2 + 59) = v7;
    *v3 = 1;
    *((_DWORD *)v2 + 46) = v8 - (_DWORD)(v2 + 56);
  }
  return result;
}
