int __fastcall X509_STORE_CTX_get1_issuer(_DWORD *a1, int a2, int a3)
{
  _DWORD *v6; // r0
  int v7; // r6
  _DWORD *v8; // r7
  int v9; // r9
  int v10; // r1
  int v11; // r2
  int v12; // r11
  int result; // r0
  int v14; // r1
  int v15; // r2
  int v16; // r0
  int v17; // r1
  int v18; // r2
  int v19; // r4
  bool v20; // cc
  unsigned int v21; // r1
  _DWORD *v22; // r0
  _DWORD *v23; // r11
  int v24; // r0
  int v25; // r1
  int v26; // [sp+4h] [bp-8h]

  v6 = sub_10F27C();
  v7 = *(_DWORD *)a2;
  if ( !v6 )
    return -1;
  v8 = v6;
  *a1 = 0;
  v9 = sub_10E65C(a3);
  v12 = sub_10F350((int *)a2, 1, v9, v8);
  if ( v12 == 1 )
  {
    if ( (*(int (__fastcall **)(int, int, _DWORD))(a2 + 36))(a2, a3, v8[1]) && sub_110E50(a2, v8[1], -1) )
    {
      v16 = v8[1];
      *a1 = v16;
      if ( !sub_10FD18(v16) )
      {
        v12 = -1;
        *a1 = 0;
      }
      X509_OBJECT_free(v8, v17, v18);
      return v12;
    }
    else
    {
      X509_OBJECT_free(v8, v14, v15);
      result = v7;
      if ( v7 )
      {
        sub_10EF78(v7);
        v19 = sub_10F330(*(_DWORD *)(v7 + 4), 1, v9);
        v26 = 0;
        if ( v19 != -1 )
        {
          while ( 1 )
          {
            v20 = v19 < sub_10C010(*(_DWORD *)(v7 + 4));
            v21 = v19++;
            if ( !v20 )
              break;
            v22 = (_DWORD *)sub_10C01C(*(_DWORD **)(v7 + 4), v21);
            v23 = v22;
            if ( *v22 != 1 )
              break;
            v24 = sub_10E660(v22[1]);
            if ( sub_10E6E0(v9, v24) )
              break;
            if ( (*(int (__fastcall **)(int, int, _DWORD))(a2 + 36))(a2, a3, v23[1]) )
            {
              v25 = v23[1];
              v26 = 1;
              *a1 = v25;
              if ( sub_110E50(a2, v25, -1) )
              {
                v26 = 1;
                break;
              }
            }
          }
        }
        if ( *a1 && !sub_10FD18(*a1) )
        {
          *a1 = 0;
          v26 = -1;
        }
        sub_10EF80(v7);
        return v26;
      }
    }
  }
  else
  {
    X509_OBJECT_free(v8, v10, v11);
    return 0;
  }
  return result;
}
