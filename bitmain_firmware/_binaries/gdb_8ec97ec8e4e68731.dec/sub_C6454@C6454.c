void __fastcall sub_C6454(int a1)
{
  int v2; // r6
  void *v3; // r8
  _BYTE *v4; // r3
  int v5; // r2
  _BYTE *v6; // r3
  int v7; // r2
  char *v8; // r1
  int v9; // r0
  int v10; // [sp+Ch] [bp-64h] BYREF
  char *string; // [sp+10h] [bp-60h] BYREF
  int v12; // [sp+14h] [bp-5Ch]
  _DWORD v13[4]; // [sp+18h] [bp-58h] BYREF
  void *v14; // [sp+28h] [bp-48h] BYREF
  int v15; // [sp+2Ch] [bp-44h]
  _DWORD v16[4]; // [sp+30h] [bp-40h] BYREF
  void *ptr; // [sp+40h] [bp-30h] BYREF
  int v18; // [sp+44h] [bp-2Ch]
  _DWORD v19[4]; // [sp+48h] [bp-28h] BYREF
  void *v20; // [sp+58h] [bp-18h] BYREF
  int v21; // [sp+5Ch] [bp-14h]
  _DWORD v22[4]; // [sp+60h] [bp-10h] BYREF

  string = (char *)v13;
  v12 = 0;
  LOBYTE(v13[0]) = 0;
  v2 = *(_DWORD *)(a1 + 8);
  off_478420();
  if ( *(_BYTE *)(a1 + 25) && *(_DWORD *)(v2 + 164) )
  {
    v3 = sub_92E28();
    v15 = 0;
    LOBYTE(v16[0]) = 0;
    v14 = v16;
    sub_C57DC(0, &v10);
    sub_FC8EC(&ptr, v10);
    v4 = string;
    if ( ptr == v19 )
    {
      sub_33B48C(&string, &ptr);
      v4 = ptr;
    }
    else
    {
      if ( string == (char *)v13 )
      {
        string = (char *)ptr;
        v12 = v18;
        v13[0] = v19[0];
      }
      else
      {
        string = (char *)ptr;
        v12 = v18;
        v5 = v13[0];
        v13[0] = v19[0];
        if ( v4 )
        {
          ptr = v4;
          v19[0] = v5;
          goto LABEL_7;
        }
      }
      ptr = v19;
      v4 = v19;
    }
LABEL_7:
    v18 = 0;
    *v4 = 0;
    if ( ptr != v19 )
      sub_339E64(ptr);
    sub_FFE48(&v20, string);
    v6 = v14;
    if ( v20 == v22 )
    {
      sub_33B48C(&v14, &v20);
      v6 = v20;
      goto LABEL_13;
    }
    if ( v14 == v16 )
    {
      v14 = v20;
      v15 = v21;
      v16[0] = v22[0];
    }
    else
    {
      v14 = v20;
      v15 = v21;
      v7 = v16[0];
      v16[0] = v22[0];
      if ( v6 )
      {
        v20 = v6;
        v22[0] = v7;
LABEL_13:
        v21 = 0;
        *v6 = 0;
        if ( v20 != v22 )
          sub_339E64(v20);
        if ( v15 )
          sub_33C508(&string, &v14);
        if ( v14 != v16 )
          sub_339E64(v14);
        sub_92E40((int)v3);
        v8 = string;
        if ( v12 )
        {
          v9 = j_regexec(*(const regex_t **)(v2 + 164), string, 0, 0, 0);
          v8 = string;
          if ( v9 )
            *(_BYTE *)(a1 + 25) = 0;
        }
        if ( v8 != (char *)v13 )
          sub_339E64(v8);
        return;
      }
    }
    v20 = v22;
    v6 = v22;
    goto LABEL_13;
  }
  if ( string != (char *)v13 )
    sub_339E64(string);
}
