int *__fastcall sub_D07B4(int *result)
{
  int *v1; // r4
  int v2; // r2
  int v3; // r5
  int v4; // r3
  int v5; // r0
  int v6; // r6
  int v7; // r3
  int v8; // r3
  int v9; // r5
  const char *v10; // r0
  int v11; // [sp+0h] [bp-38h] BYREF
  int v12; // [sp+4h] [bp-34h] BYREF
  _DWORD v13[2]; // [sp+8h] [bp-30h] BYREF
  int v14; // [sp+10h] [bp-28h]
  _BYTE v15[36]; // [sp+14h] [bp-24h] BYREF

  v1 = result;
  if ( !result[5] )
  {
    result = (int *)result[1];
    if ( !result )
      return result;
    result = (int *)sub_21E570(result, v1[4], &v11);
    if ( !result )
    {
      v9 = v1[4];
      v10 = (const char *)((int (__fastcall *)(int))loc_2043D4)(v1[1]);
      sub_946E0("No line %d in file \"%s\".", v9, v10);
    }
    v2 = *((unsigned __int8 *)v1 + 29);
    v1[5] = v11;
    if ( v2 )
      result = (int *)sub_21E6D0(v1);
  }
  v3 = v1[3];
  if ( !v3 )
  {
    v4 = v1[1];
    if ( v4 )
    {
      result = sub_C2410(v1[5], v1[3], &v12, *(_DWORD *)(v4 + 4));
      if ( result )
      {
        v5 = sub_C23B0(v12);
        v6 = v5;
        if ( v5 )
        {
          result = (int *)sub_21C7C8(v5, *(_DWORD *)(*(_DWORD *)(v1[1] + 4) + 4));
          v7 = *(__int16 *)(v6 + 22);
          if ( v7 >= 0 )
            v3 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v1[1] + 4) + 4) + 168) + 12 * v7;
          v1[3] = v3;
        }
        else
        {
          v14 = dword_487D2C;
          ((void (__fastcall *)(_BYTE *))loc_23FF20)(v15);
          sub_1CD664(*v1);
          sub_1B240C(v13, v1[5]);
          if ( v13[0] )
          {
            v8 = *(__int16 *)(v13[0] + 22);
            if ( v8 >= 0 )
              v3 = *(_DWORD *)(v13[1] + 168) + 12 * v8;
            v1[3] = v3;
          }
          ((void (__fastcall *)(_BYTE *))loc_23FC8C)(v15);
          return (int *)((int (__fastcall *)(int))loc_1CD290)(v14);
        }
      }
    }
  }
  return result;
}
