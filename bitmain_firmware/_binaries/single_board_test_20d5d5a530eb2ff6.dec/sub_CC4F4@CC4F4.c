int __fastcall sub_CC4F4(int a1, int a2, int a3, int a4)
{
  int v5; // r6
  int v7; // r0
  int ***v8; // r8
  int v9; // r9
  int v10; // r5
  int v11; // r0
  int v12; // r9
  int **v13; // r0
  int ***v14; // r7
  int v15; // r5
  int **v16; // t1
  int result; // r0
  int (__fastcall *v18)(int, int **, int); // r3
  int *v19; // r9
  int i; // r5
  int (__fastcall *v21)(int, int, int, int); // r5
  int v22; // r11
  int ***v23; // r9
  int v24; // r5
  int v25; // r10
  int v26; // r11
  int v27; // r5
  int v28; // t1
  int (__fastcall *v29)(int, _DWORD, int); // r3
  int v31; // [sp+10h] [bp-14h]
  int v32; // [sp+14h] [bp-10h]
  int v33; // [sp+18h] [bp-Ch]
  int v34; // [sp+1Ch] [bp-8h]

  if ( !a2 )
    return 1;
  v5 = a4;
  if ( a4 )
  {
    v31 = 0;
  }
  else
  {
    result = sub_130B08(a1);
    v5 = result;
    if ( !result )
      return result;
    v31 = result;
  }
  sub_130BC0(v5);
  v32 = sub_130CCC(v5);
  v33 = sub_130CCC(v5);
  if ( v33 && (v34 = a2, v7 = CRYPTO_malloc(4 * a2, "crypto/ec/ecp_smpl.c", 1224), (v8 = (int ***)v7) != 0) )
  {
    v9 = v7 - 4;
    v10 = 0;
    do
    {
      v11 = sub_B822C();
      ++v10;
      *(_DWORD *)(v9 + 4) = v11;
      v9 += 4;
      if ( !v11 )
        goto LABEL_9;
    }
    while ( a2 != v10 );
    if ( sub_B85B0(*(_DWORD *)(*(_DWORD *)a3 + 16)) )
    {
      v18 = *(int (__fastcall **)(int, int **, int))(*(_DWORD *)a1 + 160);
      if ( v18 )
      {
        if ( !v18(a1, *v8, v5) )
          goto LABEL_9;
      }
      else if ( !sub_B8930(*v8, 1) )
      {
        goto LABEL_9;
      }
    }
    else if ( !sub_B89E4((int)*v8, *(_DWORD *)(*(_DWORD *)a3 + 16)) )
    {
      goto LABEL_9;
    }
    if ( a2 != 1 )
    {
      v19 = (int *)v8;
      for ( i = a3 + 4; i != a3 + v34 * 4; i += 4 )
      {
        if ( sub_B85B0(*(_DWORD *)(*(_DWORD *)i + 16)) )
        {
          if ( !sub_B89E4(v19[1], *v19) )
            goto LABEL_9;
        }
        else if ( !(*(int (__fastcall **)(int, int, int, _DWORD, int))(*(_DWORD *)a1 + 136))(
                     a1,
                     v19[1],
                     *v19,
                     *(_DWORD *)(*(_DWORD *)i + 16),
                     v5) )
        {
          goto LABEL_9;
        }
        ++v19;
      }
    }
    v12 = (*(int (__fastcall **)(int, int, int **, int))(*(_DWORD *)a1 + 148))(a1, v32, v8[v34 - 1], v5);
    if ( v12 )
    {
      v21 = *(int (__fastcall **)(int, int, int, int))(*(_DWORD *)a1 + 152);
      if ( v21
        && (!v21(a1, v32, v32, v5)
         || !(*(int (__fastcall **)(int, int, int, int))(*(_DWORD *)a1 + 152))(a1, v32, v32, v5)) )
      {
        goto LABEL_9;
      }
      v22 = a2 - 1;
      if ( a2 != 1 )
      {
        v23 = &v8[a2 - 2];
        v24 = a3 + 4 * a2;
        while ( sub_B85B0(*(_DWORD *)(*(_DWORD *)(v24 - 4) + 16))
             || (*(int (__fastcall **)(int, int, int **, int, int))(*(_DWORD *)a1 + 136))(a1, v33, *v23, v32, v5)
             && (*(int (__fastcall **)(int, int, int, _DWORD, int))(*(_DWORD *)a1 + 136))(
                  a1,
                  v32,
                  v32,
                  *(_DWORD *)(*(_DWORD *)(v24 - 4) + 16),
                  v5)
             && sub_B89E4(*(_DWORD *)(*(_DWORD *)(v24 - 4) + 16), v33) )
        {
          --v22;
          v24 -= 4;
          --v23;
          if ( !v22 )
            goto LABEL_47;
        }
        goto LABEL_9;
      }
LABEL_47:
      if ( !sub_B85B0(*(_DWORD *)(*(_DWORD *)a3 + 16)) && !sub_B89E4(*(_DWORD *)(*(_DWORD *)a3 + 16), v32) )
      {
LABEL_9:
        v12 = 0;
        goto LABEL_10;
      }
      v25 = 0;
      v26 = a3 - 4;
      do
      {
        v28 = *(_DWORD *)(v26 + 4);
        v26 += 4;
        v27 = v28;
        if ( !sub_B85B0(*(_DWORD *)(v28 + 16)) )
        {
          if ( !(*(int (__fastcall **)(int, int, _DWORD, int))(*(_DWORD *)a1 + 140))(a1, v32, *(_DWORD *)(v27 + 16), v5)
            || !(*(int (__fastcall **)(int, _DWORD, _DWORD, int, int))(*(_DWORD *)a1 + 136))(
                  a1,
                  *(_DWORD *)(v27 + 8),
                  *(_DWORD *)(v27 + 8),
                  v32,
                  v5)
            || !(*(int (__fastcall **)(int, int, int, _DWORD, int))(*(_DWORD *)a1 + 136))(
                  a1,
                  v32,
                  v32,
                  *(_DWORD *)(v27 + 16),
                  v5)
            || !(*(int (__fastcall **)(int, _DWORD, _DWORD, int, int))(*(_DWORD *)a1 + 136))(
                  a1,
                  *(_DWORD *)(v27 + 12),
                  *(_DWORD *)(v27 + 12),
                  v32,
                  v5) )
          {
            goto LABEL_9;
          }
          v29 = *(int (__fastcall **)(int, _DWORD, int))(*(_DWORD *)a1 + 160);
          if ( v29 )
          {
            if ( !v29(a1, *(_DWORD *)(v27 + 16), v5) )
              goto LABEL_9;
          }
          else if ( !sub_B8930(*(int ***)(v27 + 16), 1) )
          {
            goto LABEL_9;
          }
          *(_DWORD *)(v27 + 20) = 1;
        }
        ++v25;
      }
      while ( a2 != v25 );
      v12 = 1;
    }
    else
    {
      sub_D0048(16, 137, 3, "crypto/ec/ecp_smpl.c", 1269);
    }
LABEL_10:
    sub_130C74(v5);
    sub_130B5C(v31);
    v13 = *v8;
    if ( *v8 )
    {
      v14 = v8;
      v15 = 0;
      do
      {
        ++v15;
        sub_B87C8((int *)v13);
        if ( a2 == v15 )
          break;
        v16 = v14[1];
        ++v14;
        v13 = v16;
      }
      while ( v16 );
    }
    CRYPTO_free(v8, "crypto/ec/ecp_smpl.c", 1354);
    return v12;
  }
  else
  {
    sub_130C74(v5);
    sub_130B5C(v31);
    return 0;
  }
}
