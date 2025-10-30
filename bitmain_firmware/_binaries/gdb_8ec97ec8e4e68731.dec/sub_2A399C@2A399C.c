int __fastcall sub_2A399C(int a1, int a2, __int64 a3)
{
  int v5; // r1
  int v6; // r5
  int v8; // r0
  _DWORD *v9; // r10
  const char *v10; // r8
  int v11; // r6
  int v12; // r1
  int v13; // r9
  __int64 v14; // r0
  char v15; // lr
  int v16; // r0

  v6 = sub_2A3484(a1, a2, a3, SHIDWORD(a3));
  if ( !v6 && sub_2A8A04(a1, v5, a3, HIDWORD(a3), 0) >= 0 )
  {
    v8 = (*(int (__fastcall **)(int))(*(_DWORD *)(a1 + 4) + 236))(a1);
    v9 = (_DWORD *)v8;
    if ( v8 )
    {
      v10 = *(const char **)(v8 + 12);
      if ( (*(_BYTE *)(a1 + 44) & 1) != 0 )
      {
        if ( *v10 != 47 )
        {
          v10 = sub_2A3934((const char **)a1, *(const char **)(v8 + 12));
          if ( !v10 )
            goto LABEL_25;
        }
        if ( *((__int64 *)v9 + 2) >= 1 )
        {
          if ( j_strcmp(v10, *(const char **)a1) )
          {
            v11 = *(_DWORD *)(a1 + 152);
            if ( v11 )
            {
              while ( j_strcmp(v10, *(const char **)v11) )
              {
                v11 = *(_DWORD *)(v11 + 144);
                if ( !v11 )
                  goto LABEL_26;
              }
            }
            else
            {
LABEL_26:
              v16 = sub_2A2E1C((int)v10, a1);
              v11 = v16;
              if ( !v16 )
                goto LABEL_25;
              *(_DWORD *)(v16 + 144) = *(_DWORD *)(a1 + 152);
              *(_DWORD *)(a1 + 152) = v16;
            }
            if ( sub_2AA86C(v11, 2) )
            {
              v6 = sub_2A399C(v11, v12, v9[4], v9[5]);
              if ( v6 )
              {
                *(_QWORD *)(v6 + 64) = sub_2A890C(a1);
                return v6;
              }
            }
LABEL_25:
            free(v9);
            return v6;
          }
LABEL_24:
          ((void (__fastcall *)(int))loc_2A6C48)(10);
          goto LABEL_25;
        }
        v13 = sub_2A2E1C((int)v10, a1);
        if ( !v13 )
          goto LABEL_24;
      }
      else
      {
        v13 = sub_2AC530(a1);
        if ( !v13 )
          goto LABEL_25;
      }
      v14 = sub_2A890C(a1);
      *(_QWORD *)(v13 + 64) = v14;
      if ( (*(_BYTE *)(a1 + 44) & 1) != 0 )
      {
        *(_QWORD *)(v13 + 56) = 0;
      }
      else
      {
        *(_QWORD *)(v13 + 56) = v14;
        *(_DWORD *)v13 = sub_327254(v10);
      }
      *(_DWORD *)(v13 + 136) = v9;
      v15 = *(_BYTE *)(v13 + 44);
      *(_DWORD *)(v13 + 40) = *(_DWORD *)(v13 + 40) & 0xFE00001F
                            | (32 * ((*(_DWORD *)(a1 + 40) >> 5) & 0x2C000 | (*(_DWORD *)(v13 + 40) >> 5) & 0xFFFFF));
      *(_BYTE *)(v13 + 44) = v15 & 0xF7 | (8 * ((*(_BYTE *)(a1 + 44) & 8) != 0));
      if ( sub_2A34E4(a1, a3, v13) )
      {
        return v13;
      }
      else
      {
        free(v9);
        *(_DWORD *)(v13 + 136) = 0;
      }
    }
  }
  return v6;
}
