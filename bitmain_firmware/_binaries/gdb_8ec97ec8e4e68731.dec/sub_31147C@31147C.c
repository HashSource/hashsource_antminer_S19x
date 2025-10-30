int __fastcall sub_31147C(_DWORD *a1, unsigned __int8 **a2, unsigned int a3)
{
  unsigned __int8 *v6; // r1
  int v7; // r3
  int v8; // r5
  bool v9; // zf
  char v10; // r2
  int v11; // r2
  bool v12; // zf
  int v13; // r0
  int v14; // r1
  int v15; // r9
  void *v16; // r0
  int v18; // [sp+0h] [bp-1Ch] BYREF
  int v19; // [sp+4h] [bp-18h] BYREF
  unsigned __int8 *v20; // [sp+8h] [bp-14h] BYREF
  void *ptr; // [sp+Ch] [bp-10h] BYREF
  int v22; // [sp+10h] [bp-Ch]
  int v23; // [sp+14h] [bp-8h]

  if ( (*a1 & 1) != 0 )
  {
    sub_30D3E4(a3, "(");
    v6 = *a2;
    v7 = **a2;
    if ( **a2 )
      goto LABEL_3;
    sub_30D3E4(a3, "void");
  }
  v6 = *a2;
  v7 = **a2;
LABEL_3:
  v8 = 0;
  while ( 1 )
  {
    v9 = v7 == 95;
    if ( v7 != 95 )
      v9 = v7 == 0;
    v10 = !v9;
    if ( v7 == 101 )
      v11 = 0;
    else
      v11 = v10 & 1;
    if ( !v11 && (int)a1[20] <= 0 )
    {
      v15 = *a1 & 1;
      if ( v7 == 101 )
      {
        *a2 = v6 + 1;
        if ( !v15 )
          return 1;
        if ( v8 )
          sub_30D3E4(a3, (char *)&word_3D7D40);
        sub_30D3E4(a3, "...");
        v15 = *a1 & 1;
      }
      if ( v15 )
      {
        sub_30D3E4(a3, ")");
        return v15;
      }
      return 1;
    }
    v12 = v7 == 84;
    if ( v7 != 84 )
      v12 = v7 == 78;
    if ( v12 )
      break;
    if ( v8 && (*a1 & 1) != 0 )
      sub_30D3E4(a3, ", ");
    if ( !sub_311344(a1, a2, &ptr) )
      return 0;
    if ( (*a1 & 1) != 0 )
      sub_30D52C(__SPAIR64__(&ptr, a3), v22);
    v8 = 1;
    if ( ptr )
    {
      free(ptr);
      v6 = *a2;
      v22 = 0;
      v23 = 0;
      ptr = 0;
      v7 = *v6;
    }
    else
    {
LABEL_39:
      v6 = *a2;
      v7 = **a2;
    }
  }
  *a2 = v6 + 1;
  if ( *v6 == 78 )
  {
    if ( sub_30CBF8(a2, &v18) )
      goto LABEL_21;
    return 0;
  }
  v18 = 1;
LABEL_21:
  if ( (*a1 & 0x3800) == 0 || (int)a1[8] <= 9 )
  {
    if ( sub_30CBF8(a2, &v19) )
    {
      v13 = v19;
      goto LABEL_25;
    }
    return 0;
  }
  v13 = sub_30D00C(a2);
  v19 = v13;
  if ( v13 <= 0 )
    return 0;
LABEL_25:
  if ( (*a1 & 0x3C00) != 0 )
    v19 = --v13;
  if ( v13 >= 0 && a1[8] > v13 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        if ( (int)a1[20] <= 0 && --v18 < 0 )
          goto LABEL_39;
        v14 = v19;
        v9 = v8 == 0;
        v8 = 1;
        v20 = *(unsigned __int8 **)(a1[1] + 4 * v19);
        if ( !v9 && (*a1 & 1) != 0 )
        {
          sub_30D3E4(a3, ", ");
          v14 = v19;
        }
        sub_30CD70((int)a1, v14);
        v15 = sub_311344(a1, &v20, &ptr);
        if ( !v15 )
        {
          --a1[23];
          return v15;
        }
        v9 = (*a1 & 1) == 0;
        --a1[23];
        if ( !v9 )
          break;
        v16 = ptr;
        if ( ptr )
          goto LABEL_41;
      }
      sub_30D52C(__SPAIR64__(&ptr, a3), v22);
      v16 = ptr;
      if ( ptr )
      {
LABEL_41:
        free(v16);
        v22 = 0;
        v23 = 0;
        ptr = 0;
      }
    }
  }
  return 0;
}
