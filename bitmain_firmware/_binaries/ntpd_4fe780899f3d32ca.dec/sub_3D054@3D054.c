int __fastcall sub_3D054(struct sockaddr *a1, int a2, int a3)
{
  unsigned int v3; // r8
  int v4; // r10
  bool v5; // zf
  unsigned int v6; // r7
  int v7; // r9
  int *v8; // r2
  int v9; // r0
  int v10; // r10
  int v11; // r12
  char v12; // r3
  int i; // [sp+8h] [bp-5Ch]
  int v15; // [sp+Ch] [bp-58h]
  int v19; // [sp+24h] [bp-40h]
  int v20; // [sp+28h] [bp-3Ch] BYREF
  int v21; // [sp+2Ch] [bp-38h]
  int v22; // [sp+30h] [bp-34h]
  int v23; // [sp+34h] [bp-30h]
  int v24; // [sp+38h] [bp-2Ch]
  int v25; // [sp+3Ch] [bp-28h]
  int v26; // [sp+40h] [bp-24h] BYREF
  int v27; // [sp+44h] [bp-20h]
  int v28; // [sp+48h] [bp-1Ch]
  int v29; // [sp+4Ch] [bp-18h]
  int v30; // [sp+50h] [bp-14h]
  int v31; // [sp+54h] [bp-10h]
  int v32; // [sp+58h] [bp-Ch]

  v3 = __rev16(*(unsigned __int16 *)(a3 + 6)) & 0xFFF;
  if ( v3 > 0x18 )
    return sub_3AD58(a1, a2, *(_BYTE *)(a3 + 2), *(_BYTE *)(a3 + 3), 3);
  v19 = a3 + 8;
  v4 = 0;
  for ( i = 0; ; i = 1 )
  {
    v6 = __rev16(*(unsigned __int16 *)(a3 + 4)) & 0xFFF;
    v5 = v6 == 0;
    LOWORD(v6) = v6 - 1;
    if ( !v5 )
    {
      v7 = v19;
      while ( 2 )
      {
        v20 = 0;
        v21 = 0;
        v22 = 0;
        v23 = 0;
        v24 = 0;
        v25 = 0;
        _memcpy_chk(&v20, v7);
        v26 = 0;
        v27 = 0;
        v28 = 0;
        v29 = 0;
        v30 = 0;
        v31 = 0;
        v32 = 0;
        if ( dword_BCB2C && v21 )
        {
          LOWORD(v26) = 10;
          v28 = v22;
          v29 = v23;
          v30 = v24;
          v31 = v25;
        }
        else
        {
          LOWORD(v26) = 2;
          v27 = v20;
        }
        v8 = 0;
        HIWORD(v26) = 31488;
        while ( 1 )
        {
          v9 = sub_31A44((unsigned __int16 *)&v26, 0, v8, -1, 0, 0);
          v8 = (int *)v9;
          if ( !v9 )
            break;
          if ( (*(_DWORD *)(v9 + 68) & 1) != 0 )
          {
            if ( v4 )
            {
              v15 = v9;
              sub_36214(v9, (int *)"GONE");
              sub_31FC4(v15);
            }
            goto LABEL_12;
          }
        }
        if ( i != 1 )
        {
          v10 = a3;
          v11 = 4;
          v12 = *(_BYTE *)(a3 + 3);
          return sub_3AD58(a1, a2, *(_BYTE *)(v10 + 2), v12, v11);
        }
LABEL_12:
        v6 = (unsigned __int16)(v6 - 1);
        v7 += v3;
        if ( v6 != 0xFFFF )
          continue;
        break;
      }
    }
    v4 ^= 1u;
    if ( i == 1 )
      break;
  }
  v10 = a3;
  v11 = 0;
  v12 = *(_BYTE *)(a3 + 3);
  return sub_3AD58(a1, a2, *(_BYTE *)(v10 + 2), v12, v11);
}
