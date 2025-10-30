int __fastcall sub_14BF8(const char *a1, unsigned __int16 *a2, unsigned int a3)
{
  char *v3; // r7
  _BOOL4 v6; // r0
  int v7; // r4
  _BOOL4 v8; // r10
  int v9; // r9
  int v10; // r0
  int v11; // r1
  int v12; // r2
  int v13; // r3
  int v14; // r1
  int v15; // r2
  int v16; // r1
  int v17; // r2
  int v18; // r3
  int v19; // r2
  int v20; // r1
  int result; // r0
  int v22; // r3
  _BOOL4 v23; // r3
  int v24; // r3
  int v25; // [sp+0h] [bp-74h]
  _BYTE v26[24]; // [sp+14h] [bp-60h] BYREF
  _BYTE v27[24]; // [sp+2Ch] [bp-48h] BYREF
  char v28; // [sp+44h] [bp-30h] BYREF
  int v29; // [sp+48h] [bp-2Ch]
  int v30; // [sp+4Ch] [bp-28h]
  int v31; // [sp+50h] [bp-24h]
  int v32; // [sp+54h] [bp-20h]
  int v33; // [sp+58h] [bp-1Ch]
  int v34; // [sp+5Ch] [bp-18h]
  int v35; // [sp+60h] [bp-14h]
  int v36; // [sp+64h] [bp-10h]
  int v37; // [sp+68h] [bp-Ch]

  v25 = (a3 >> 2) & 1;
  v6 = sub_13F60(a2);
  v7 = nic_rule_list;
  if ( nic_rule_list )
    v3 = &v28;
  v8 = v6;
  if ( nic_rule_list )
  {
    while ( 1 )
    {
      switch ( *(_DWORD *)(v7 + 8) )
      {
        case 0:
          if ( v8 | v25 )
            goto LABEL_7;
          return *(_DWORD *)(v7 + 4);
        case 1:
          if ( *a2 == 2 )
            return *(_DWORD *)(v7 + 4);
          goto LABEL_7;
        case 2:
          if ( *a2 == 10 )
            return *(_DWORD *)(v7 + 4);
          goto LABEL_7;
        case 3:
          if ( v8 )
            return *(_DWORD *)(v7 + 4);
          goto LABEL_7;
        case 4:
          if ( a1 && !fnmatch(*(const char **)(v7 + 12), a1, 16) )
            return *(_DWORD *)(v7 + 4);
          goto LABEL_7;
        case 5:
          v9 = *(_DWORD *)(v7 + 44);
          if ( v9 != -1 )
          {
            v10 = *(_DWORD *)a2;
            v11 = *((_DWORD *)a2 + 1);
            v12 = *((_DWORD *)a2 + 2);
            v13 = *((_DWORD *)a2 + 3);
            v35 = 0;
            v36 = 0;
            v37 = 0;
            *(_DWORD *)v3 = v10;
            *((_DWORD *)v3 + 1) = v11;
            *((_DWORD *)v3 + 2) = v12;
            *((_DWORD *)v3 + 3) = v13;
            v14 = *((_DWORD *)a2 + 5);
            v15 = *((_DWORD *)a2 + 6);
            *((_DWORD *)v3 + 4) = *((_DWORD *)a2 + 4);
            *((_DWORD *)v3 + 5) = v14;
            *((_DWORD *)v3 + 6) = v15;
            sub_75D2C(v26, v3);
            *(_DWORD *)v3 = 0;
            v29 = 0;
            v30 = 0;
            v31 = 0;
            v32 = 0;
            v33 = 0;
            v34 = 0;
            v35 = 0;
            v36 = 0;
            v37 = 0;
            v16 = *(_DWORD *)(v7 + 20);
            v17 = *(_DWORD *)(v7 + 24);
            v18 = *(_DWORD *)(v7 + 28);
            *(_DWORD *)v3 = *(_DWORD *)(v7 + 16);
            *((_DWORD *)v3 + 1) = v16;
            *((_DWORD *)v3 + 2) = v17;
            *((_DWORD *)v3 + 3) = v18;
            v19 = *(_DWORD *)(v7 + 40);
            v20 = *(_DWORD *)(v7 + 36);
            *((_DWORD *)v3 + 4) = *(_DWORD *)(v7 + 32);
            *((_DWORD *)v3 + 5) = v20;
            *((_DWORD *)v3 + 6) = v19;
            sub_75D2C(v27, v3);
            if ( sub_75548(v26, v27, v9) )
              return *(_DWORD *)(v7 + 4);
            goto LABEL_7;
          }
          v22 = *(unsigned __int16 *)(v7 + 16);
          if ( v22 != *a2 )
            goto LABEL_7;
          if ( v22 == 2 )
          {
            v23 = *((_DWORD *)a2 + 1) == *(_DWORD *)(v7 + 20);
          }
          else
          {
            if ( memcmp(a2 + 4, (const void *)(v7 + 24), 0x10u) )
              goto LABEL_7;
            v23 = *((_DWORD *)a2 + 6) == *(_DWORD *)(v7 + 40);
          }
          if ( v23 )
            return *(_DWORD *)(v7 + 4);
LABEL_7:
          v7 = *(_DWORD *)v7;
          if ( !v7 )
            goto LABEL_8;
          break;
        default:
          goto LABEL_7;
      }
    }
  }
LABEL_8:
  if ( v25 )
    return 0;
  if ( v8 )
    return 2;
  v24 = (int)a1;
  if ( a1 )
    v24 = 1;
  if ( listen_to_virtual_ips )
    v24 = 0;
  if ( v24 && strchr(a1, 58) )
    return 1;
  result = nic_rule_list;
  if ( nic_rule_list )
    return 1;
  return result;
}
