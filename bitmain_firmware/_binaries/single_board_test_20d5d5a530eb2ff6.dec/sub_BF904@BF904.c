int __fastcall sub_BF904(int a1)
{
  int v2; // r8
  int *v3; // r4
  int v4; // r9
  int v5; // r7
  int *v6; // r6
  int v7; // r1
  int v8; // r6
  int *v10; // r0
  int *v11; // r9
  int *v12; // r0

  if ( sub_B85BC(*(_DWORD **)(a1 + 8)) <= 10000 )
  {
    v2 = sub_130B08();
    if ( v2 && ((v3 = *(int **)(a1 + 24), v4 = 0, v3) || (v4 = 1, (v3 = (int *)sub_B8264()) != 0)) )
    {
      v5 = *(_DWORD *)(a1 + 20);
      if ( !v5 )
      {
        v5 = sub_B822C();
        if ( !v5 )
          goto LABEL_14;
      }
      if ( (*(_DWORD *)(a1 + 28) & 1) != 0 )
      {
        v12 = sub_B96D8((int **)(a1 + 32), *(_DWORD *)(a1 + 72), *(int ***)(a1 + 8), v2);
        v6 = v12;
        if ( !v12 )
          goto LABEL_14;
      }
      else
      {
        v6 = 0;
      }
      if ( !v4 )
        goto LABEL_21;
      v7 = *(_DWORD *)(a1 + 36);
      if ( v7 )
      {
        while ( sub_1365E8(v3, v7) )
        {
          if ( !sub_B85B0((int)v3) && !sub_B86D8((int)v3) )
            goto LABEL_21;
          v7 = *(_DWORD *)(a1 + 36);
        }
        goto LABEL_14;
      }
      if ( !*(_DWORD *)(a1 + 16) )
        sub_B85BC(*(_DWORD **)(a1 + 8));
      if ( sub_136480(v3)
        && (!sub_B86F0(*(_DWORD *)(a1 + 12), 2) || sub_B83F0(*(_DWORD **)(a1 + 8), 2) || sub_B8C5C(v3, 0)) )
      {
LABEL_21:
        v10 = (int *)sub_B822C();
        v11 = v10;
        if ( v10 )
        {
          sub_B8740(v10, v3, 4);
          if ( (*(int (__fastcall **)(int, int, _DWORD, int *, _DWORD, int, int *))(*(_DWORD *)(a1 + 64) + 12))(
                 a1,
                 v5,
                 *(_DWORD *)(a1 + 12),
                 v11,
                 *(_DWORD *)(a1 + 8),
                 v2,
                 v6) )
          {
            v8 = 1;
            sub_B87C8(v11);
            *(_DWORD *)(a1 + 20) = v5;
            *(_DWORD *)(a1 + 24) = v3;
LABEL_18:
            sub_130B5C(v2);
            return v8;
          }
          sub_B87C8(v11);
        }
      }
    }
    else
    {
      v3 = 0;
      v5 = 0;
    }
LABEL_14:
    sub_D0048(5, 103, 3, "crypto/dh/dh_key.c", 187);
    if ( *(_DWORD *)(a1 + 20) != v5 )
      sub_B895C(v5);
    v8 = 0;
    if ( *(int **)(a1 + 24) != v3 )
      sub_B895C((int)v3);
    goto LABEL_18;
  }
  sub_D0048(5, 103, 103, "crypto/dh/dh_key.c", 113);
  return 0;
}
