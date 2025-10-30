int __fastcall sub_3127F0(int *a1, unsigned __int8 **a2, _DWORD *a3, int a4)
{
  int v4; // r10
  int v5; // r9
  int v9; // r2
  __int64 v10; // r0
  unsigned __int8 *v11; // r8
  int v12; // r2
  int v13; // r3
  unsigned __int8 *v14; // r2
  bool v15; // zf
  unsigned __int8 *v16; // r9
  int v17; // t1
  int v18; // r2
  unsigned __int8 *i; // r3
  int v20; // t1
  void *ptr; // [sp+4h] [bp-6Ch] BYREF
  int v23; // [sp+8h] [bp-68h]
  int v24; // [sp+Ch] [bp-64h]
  int s[24]; // [sp+10h] [bp-60h] BYREF

  v4 = *(unsigned __int8 *)(a4 + 2);
  if ( !*(_BYTE *)(a4 + 2) )
    return v4;
  v5 = a4;
  if ( (*a1 & 0x3C00) == 0 && strstr((const char *)(a4 + 2), (const char *)&dword_3C439C) )
  {
    v9 = a3[1];
    ptr = 0;
    HIDWORD(v10) = a3;
    LODWORD(v10) = &ptr;
    v24 = 0;
    v23 = 0;
    v11 = *a2;
    sub_30D52C(v10, v9);
    memset(s, 0, sizeof(s));
    sub_30D570(s, a1);
    if ( *(_BYTE *)(v5 + 2) )
    {
      while ( 1 )
      {
        if ( sub_31184C(__SPAIR64__((unsigned int)a2, (unsigned int)a1), (int)a3, v5) )
        {
          v4 = sub_311D84(a1, a2, (unsigned int)a3);
          if ( v4 )
            break;
        }
        *a2 = v11;
        v12 = v23;
        a3[1] = *a3;
        sub_30D52C(__SPAIR64__(&ptr, (unsigned int)a3), v12);
        sub_30D570(a1, s);
        v13 = *(unsigned __int8 *)(v5 + 2);
        v14 = (unsigned __int8 *)(v5 + 2);
        if ( *(_BYTE *)(v5 + 2) )
        {
          while ( 1 )
          {
            v15 = v13 == 95;
            v16 = v14;
            v17 = *++v14;
            v13 = v17;
            if ( v15 && v13 == 95 )
              break;
            if ( !v13 )
              goto LABEL_18;
          }
          v18 = *v16;
          if ( v18 == 95 )
          {
            for ( i = v16 + 1; ; ++i )
            {
              v16 = i;
              if ( v18 != 95 )
                break;
              v20 = i[1];
              v18 = v20;
            }
          }
          v5 = (int)(v16 - 2);
          if ( v18 )
            continue;
        }
        goto LABEL_18;
      }
    }
    else
    {
LABEL_18:
      v4 = 0;
    }
    sub_30D184(s);
    sub_30CC94(s);
    if ( ptr )
      free(ptr);
    return v4;
  }
  return sub_31184C(__SPAIR64__((unsigned int)a2, (unsigned int)a1), (int)a3, v5);
}
