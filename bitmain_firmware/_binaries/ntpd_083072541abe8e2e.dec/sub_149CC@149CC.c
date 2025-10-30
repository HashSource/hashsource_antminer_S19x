int __fastcall sub_149CC(const char *a1, unsigned __int16 *a2, unsigned int a3)
{
  _BOOL4 v5; // r10
  int v6; // r4
  int v7; // r8
  int v8; // r0
  int v9; // r1
  int v10; // r2
  int v11; // r3
  int v12; // r1
  int v13; // r2
  int v14; // r1
  int v15; // r2
  int v16; // r3
  int v17; // r2
  int v18; // r1
  int result; // r0
  int v20; // r3
  int v21; // r3
  int v22; // [sp+4h] [bp-80h]
  int v23; // [sp+10h] [bp-74h]
  _BYTE v24[24]; // [sp+24h] [bp-60h] BYREF
  _BYTE v25[24]; // [sp+3Ch] [bp-48h] BYREF
  int v26; // [sp+54h] [bp-30h] BYREF
  int v27; // [sp+58h] [bp-2Ch]
  int v28; // [sp+5Ch] [bp-28h]
  int v29; // [sp+60h] [bp-24h]
  int v30; // [sp+64h] [bp-20h]
  int v31; // [sp+68h] [bp-1Ch]
  int v32; // [sp+6Ch] [bp-18h]
  int v33; // [sp+70h] [bp-14h]
  int v34; // [sp+74h] [bp-10h]
  int v35; // [sp+78h] [bp-Ch]

  v23 = a3 & 4;
  v22 = (a3 >> 2) & 1;
  v5 = sub_13D38(a2);
  v6 = nic_rule_list;
  if ( nic_rule_list )
  {
    while ( 1 )
    {
      switch ( *(_DWORD *)(v6 + 8) )
      {
        case 0:
          if ( v5 | v22 )
            goto LABEL_5;
          return *(_DWORD *)(v6 + 4);
        case 1:
          if ( *a2 == 2 )
            return *(_DWORD *)(v6 + 4);
          goto LABEL_5;
        case 2:
          if ( *a2 == 10 )
            return *(_DWORD *)(v6 + 4);
          goto LABEL_5;
        case 3:
          if ( v5 )
            return *(_DWORD *)(v6 + 4);
          goto LABEL_5;
        case 4:
          if ( a1 && !fnmatch(*(const char **)(v6 + 12), a1, 16) )
            return *(_DWORD *)(v6 + 4);
          goto LABEL_5;
        case 5:
          v7 = *(_DWORD *)(v6 + 44);
          if ( v7 == -1 )
          {
            v21 = *(unsigned __int16 *)(v6 + 16);
            if ( v21 == *a2 )
            {
              if ( v21 == 2 )
              {
                if ( *((_DWORD *)a2 + 1) == *(_DWORD *)(v6 + 20) )
                  return *(_DWORD *)(v6 + 4);
              }
              else if ( !memcmp(a2 + 4, (const void *)(v6 + 24), 0x10u) && *((_DWORD *)a2 + 6) == *(_DWORD *)(v6 + 40) )
              {
                return *(_DWORD *)(v6 + 4);
              }
            }
          }
          else
          {
            v8 = *(_DWORD *)a2;
            v9 = *((_DWORD *)a2 + 1);
            v10 = *((_DWORD *)a2 + 2);
            v11 = *((_DWORD *)a2 + 3);
            v34 = 0;
            v33 = 0;
            v35 = 0;
            v26 = v8;
            v27 = v9;
            v28 = v10;
            v29 = v11;
            v12 = *((_DWORD *)a2 + 5);
            v13 = *((_DWORD *)a2 + 6);
            v30 = *((_DWORD *)a2 + 4);
            v31 = v12;
            v32 = v13;
            sub_74CE8(v24, &v26);
            v33 = 0;
            v34 = 0;
            v35 = 0;
            v14 = *(_DWORD *)(v6 + 20);
            v15 = *(_DWORD *)(v6 + 24);
            v16 = *(_DWORD *)(v6 + 28);
            v26 = *(_DWORD *)(v6 + 16);
            v27 = v14;
            v28 = v15;
            v29 = v16;
            v17 = *(_DWORD *)(v6 + 40);
            v18 = *(_DWORD *)(v6 + 36);
            v30 = *(_DWORD *)(v6 + 32);
            v31 = v18;
            v32 = v17;
            sub_74CE8(v25, &v26);
            if ( sub_74518(v24, v25, v7) )
              return *(_DWORD *)(v6 + 4);
          }
LABEL_5:
          v6 = *(_DWORD *)v6;
          if ( !v6 )
            goto LABEL_6;
          break;
        default:
          goto LABEL_5;
      }
    }
  }
LABEL_6:
  if ( v23 )
    return 0;
  if ( v5 )
    return 2;
  v20 = (int)a1;
  if ( a1 )
    v20 = 1;
  if ( listen_to_virtual_ips )
    v20 = 0;
  if ( v20 && strchr(a1, 58) )
    return 1;
  result = nic_rule_list;
  if ( nic_rule_list )
    return 1;
  return result;
}
